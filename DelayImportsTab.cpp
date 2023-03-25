#include "DelayImportsTab.h"

DelayImportsTab::DelayImportsTab(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::DelayImportsTabClass())
{
	ui->setupUi(this);
	ui->tableWidget->setColumnCount(6);
	ui->tableWidget->setColumnWidth(0, 175);  //0 设置列宽
	ui->tableWidget->setColumnWidth(1, 175); //1 设置列宽
	ui->tableWidget->setColumnWidth(2, 100);  //0 设置列宽
	ui->tableWidget->setColumnWidth(3, 100); //1 设置列宽
	ui->tableWidget->setColumnWidth(4, 125);  //0 设置列宽
	ui->tableWidget->setColumnWidth(5, 125); //1 设置列宽
	QStringList sListHeader;
	sListHeader << QString::fromLocal8Bit("Dll(Name/RVA)") << QString::fromLocal8Bit("ModuleHandle(RVA)")
		<< QString::fromLocal8Bit("IAT(RVA)") << QString::fromLocal8Bit("INT(RVA)") << QString::fromLocal8Bit("BoundIAT(RVA)")
		<< QString::fromLocal8Bit("UnloadIAT(RVA)");
	ui->tableWidget->setHorizontalHeaderLabels(sListHeader);
	ui->tableWidget_2->setColumnCount(2);
	ui->tableWidget_2->setColumnWidth(0, 275);  //0 设置列宽
	ui->tableWidget_2->setColumnWidth(1, 275); //1 设置列宽
	QStringList sListHeader2;
	sListHeader2 << QString::fromLocal8Bit("Hint") << QString::fromLocal8Bit("API Name");
	ui->tableWidget_2->setHorizontalHeaderLabels(sListHeader2);
	ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择模式，选择单列
}

DelayImportsTab::~DelayImportsTab()
{
	delete ui;
}

void DelayImportsTab::Init(axyPE* mPe) {
	aPE = mPe;
	if (mPe->pDelayImportDirectory->Size == 0)
		return;
	DWORD OffsetDelayImports = mPe->RvaToOffset(mPe->pDelayImportDirectory->VirtualAddress,mPe->bIsFile);
	DWORD dNumOfDelayImports = mPe->pDelayImportDirectory->Size / sizeof(IMAGE_DELAYLOAD_DESCRIPTOR) - 1;
	PIMAGE_DELAYLOAD_DESCRIPTOR pDelayImportsTab = (PIMAGE_DELAYLOAD_DESCRIPTOR)(mPe->szBuffer + OffsetDelayImports);
	ui->tableWidget->setRowCount(dNumOfDelayImports);
	for (int i = 0; i < dNumOfDelayImports; i++) {

		ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(pDelayImportsTab[i].DllNameRVA, 16) + "H/" + QString((char*)mPe->szBuffer + mPe->RvaToOffset(pDelayImportsTab[i].DllNameRVA,mPe->bIsFile))));
		ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(pDelayImportsTab[i].ModuleHandleRVA, 16) + "H"));
		ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(pDelayImportsTab[i].ImportAddressTableRVA, 16) + "H"));
		ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(pDelayImportsTab[i].ImportNameTableRVA, 16) + "H"));
		ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(pDelayImportsTab[i].BoundImportAddressTableRVA, 16) + "H"));
		ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(pDelayImportsTab[i].UnloadInformationTableRVA, 16) + "H"));
	}
}

void DelayImportsTab::ShowFun(int row, int column) {
	const char* buffer = (char*)aPE->szBuffer;
	if (aPE->pDelayImportDirectory->Size == 0)
		return;
	DWORD OffsetDelayImports = aPE->RvaToOffset(aPE->pDelayImportDirectory->VirtualAddress, aPE->bIsFile);
	DWORD dNumOfDelayImports = aPE->pDelayImportDirectory->Size / sizeof(IMAGE_DELAYLOAD_DESCRIPTOR) - 1;
	PIMAGE_DELAYLOAD_DESCRIPTOR pDelayImportsTab = (PIMAGE_DELAYLOAD_DESCRIPTOR)(aPE->szBuffer + OffsetDelayImports);

	DWORD dINT = ui->tableWidget->item(row, 3)->text().remove((QChar)'H').toUInt(nullptr, 16);
	DWORD IATOffset = aPE->RvaToOffset(dINT, aPE->bIsFile);
	DWORD* IAT = (DWORD*)(buffer + IATOffset);
	int nRow = 0;
	while (*IAT) {
		ui->tableWidget_2->setRowCount(++nRow);
		PIMAGE_IMPORT_BY_NAME pImportsFunc = (PIMAGE_IMPORT_BY_NAME)(buffer + aPE->RvaToOffset(*IAT, aPE->bIsFile));
		ui->tableWidget_2->setItem(nRow - 1, 0, new QTableWidgetItem(QString::number(pImportsFunc->Hint)));
		ui->tableWidget_2->setItem(nRow - 1, 1, new QTableWidgetItem(QString(pImportsFunc->Name)));
		ui->tableWidget_2->setItem(nRow - 1, 2, new QTableWidgetItem(ui->tableWidget->item(row, 5)->text()));
		ui->tableWidget_2->setItem(nRow - 1, 3, new QTableWidgetItem(QString::number((DWORD)IATOffset, 16) + 'H'));
		ui->tableWidget_2->setItem(nRow - 1, 4, new QTableWidgetItem(QString::number(*IAT, 16) + 'H'));
		IAT++;
	}
}