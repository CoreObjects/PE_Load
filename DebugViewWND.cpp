#include "DebugViewWND.h"

DebugViewWND::DebugViewWND(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::DebugViewWNDClass())
{
	ui->setupUi(this);
	ui->tableWidget->setColumnCount(7); //设置列数
// 	ui->tableWidget->setColumnWidth(0, 80);  //0 设置列宽
// 	ui->tableWidget->setColumnWidth(1, 80); //1 设置列宽
// 	ui->tableWidget->setColumnWidth(2, 80);  //0 设置列宽
// 	ui->tableWidget->setColumnWidth(3, 80); //1 设置列宽
// 	ui->tableWidget->setColumnWidth(4, 80);  //0 设置列宽
	ui->tableWidget->setColumnWidth(5, 120); //1 设置列宽
	ui->tableWidget->setColumnWidth(6, 120);  //0 设置列宽
	QStringList sListHeader;
	sListHeader << QString::fromLocal8Bit("特征") << QString::fromLocal8Bit("调试时间")
		<< QString::fromLocal8Bit("编译器版本") << QString::fromLocal8Bit("类型") << QString::fromLocal8Bit("数据大小")
		<< QString::fromLocal8Bit("AddressOfRawData") << QString::fromLocal8Bit("PointerToRawData");
	ui->tableWidget->setHorizontalHeaderLabels(sListHeader);
	ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择模式，选择单行
	ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
	this->setWindowTitle(QString::fromLocal8Bit("调试信息"));
}

DebugViewWND::~DebugViewWND()
{
	delete ui;
}

void DebugViewWND::Init(axyPE* myPE) {
	if (myPE->pDebugDirectory->VirtualAddress == 0) {
		return;
	}
	PIMAGE_DEBUG_DIRECTORY pDebugInfo = (PIMAGE_DEBUG_DIRECTORY)(myPE->szBuffer + myPE->RvaToOffset(myPE->pDebugDirectory->VirtualAddress, myPE->bIsFile));
	int nRow = myPE->pDebugDirectory->Size / sizeof(IMAGE_DEBUG_DIRECTORY);
	ui->tableWidget->setRowCount(nRow);
	for (int i = 0; i < nRow; i++) {
		ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(pDebugInfo->Characteristics, 16) + "H"));
		time_t ts = (LONG64)pDebugInfo->TimeDateStamp + 28800;
		tm* pTime = gmtime(&ts);
		char szTime[80]{ 0 };
		strftime(szTime, 80, "%Y-%m-%d %H:%M:%S", pTime);
		ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString(szTime)));
		ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(pDebugInfo->MajorVersion) + "." + QString::number(pDebugInfo->MinorVersion)));
		ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(pDebugInfo->Type)));
		ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(pDebugInfo->SizeOfData, 16) + "H"));
		ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(pDebugInfo->AddressOfRawData, 16) + "H"));
		ui->tableWidget->setItem(i, 6, new QTableWidgetItem(QString::number(pDebugInfo->PointerToRawData, 16) + "H"));
		pDebugInfo++;
	}
}
