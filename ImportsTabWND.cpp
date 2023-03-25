#include "ImportsTabWND.h"

ImportsTabWND::ImportsTabWND(QWidget* parent)
	: QDialog(parent)
	, ui(new Ui::ImportsTabWNDClass()) {
	ui->setupUi(this);
	ui->tableWidget->setColumnCount(4);
	ui->tableWidget->setColumnWidth(1, 150);  //0 设置列宽
	QStringList sListHeader;
	sListHeader << QString::fromLocal8Bit("DLL名称") << QString::fromLocal8Bit("OriginalFirstThunk")\
		<< QString::fromLocal8Bit("名称") << QString::fromLocal8Bit("FirstThunk");
	ui->tableWidget->setHorizontalHeaderLabels(sListHeader);
	ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择模式，选择单行
	ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

	ui->tableWidget_2->setColumnCount(5);
	ui->tableWidget_2->setColumnWidth(1, 150);  //0 设置列宽
	QStringList sListHeader1;
	sListHeader1 << "ThunkRva" << QString::fromLocal8Bit("Thunk偏移") << QString::fromLocal8Bit("Thunk值")\
		<< QString::fromLocal8Bit("提示") << QString::fromLocal8Bit("Api名称");
	ui->tableWidget_2->setHorizontalHeaderLabels(sListHeader1);
	ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择模式，选择单行
	ui->tableWidget_2->horizontalHeader()->setStretchLastSection(true);
	this->setWindowTitle(QString::fromLocal8Bit("【导入表】"));
}

ImportsTabWND::~ImportsTabWND() {
	delete ui;
}

void ImportsTabWND::Init(axyPE* pe) {
	mpe = pe;
	pe->ParseHeader();
	if (pe->pImportDirectory->VirtualAddress == 0) {
		return;
	}
	pe->pImport = (PIMAGE_IMPORT_DESCRIPTOR)(pe->RvaToOffset(pe->pImportDirectory->VirtualAddress, pe->bIsFile) + pe->szBuffer);
	while (pe->pImport->Name != NULL) {
		QString szDllName = QString::fromLatin1((char*)(pe->RvaToOffset(pe->pImport->Name, pe->bIsFile) + pe->szBuffer));
		QString szoriginalthunk = QString::number(pe->pImport->OriginalFirstThunk, 16);
		QString szNAmeRva = QString::number(pe->pImport->Name, 16);
		QString szthunk = QString::number(pe->pImport->FirstThunk, 16);
		int iRow = ui->tableWidget->rowCount();
		ui->tableWidget->setRowCount(iRow + 1);//总行数增加1
		ui->tableWidget->setItem(iRow, 0, new QTableWidgetItem(szDllName));
		ui->tableWidget->setItem(iRow, 1, new QTableWidgetItem(szoriginalthunk));
		ui->tableWidget->setItem(iRow, 2, new QTableWidgetItem(szNAmeRva));
		ui->tableWidget->setItem(iRow, 3, new QTableWidgetItem(szthunk));
		// 		if (pe->bIs32) {
		// 			PIMAGE_THUNK_DATA32 pINT = (PIMAGE_THUNK_DATA32)(pe->RvaToOffset(pe->pImport->OriginalFirstThunk, pe->bIsFile) + pe->szBuffer);
		// 			PIMAGE_THUNK_DATA32 pIAT = (PIMAGE_THUNK_DATA32)pe->pImport->FirstThunk;
		// 			while (pINT->u1.Ordinal != 0) {
		// 				if (!(pINT->u1.Ordinal & 0x80000000)) {
		// 					PIMAGE_IMPORT_BY_NAME pName = (PIMAGE_IMPORT_BY_NAME)(pe->RvaToOffset(pINT->u1.AddressOfData, pe->bIsFile) + pe->szBuffer);
		// 					ImportsTab Import32;
		// 					Import32.dwIAT = (DWORD)pIAT;
		// 					Import32.szFunName = (char*)pName->Name;
		// 					vecFun.push_back(Import32);
		// 				}
		// 				pINT++;
		// 				pIAT++;
		// 			}
		// 		}
		// 		else {
		// 			PIMAGE_THUNK_DATA64 pINT = (PIMAGE_THUNK_DATA64)(pe->RvaToOffset(pe->pImport->OriginalFirstThunk, pe->bIsFile) + pe->szBuffer);
		// 			PIMAGE_THUNK_DATA64 pIAT = (PIMAGE_THUNK_DATA64)pe->pImport->FirstThunk;
		// 			while (pINT->u1.Ordinal != 0) {
		// 				if (!(pINT->u1.Ordinal & 0x8000000000000000)) {
		// 					PIMAGE_IMPORT_BY_NAME pName = (PIMAGE_IMPORT_BY_NAME)(pe->RvaToOffset(pINT->u1.AddressOfData, pe->bIsFile) + pe->szBuffer);
		// 					ImportsTab Import32;
		// 					Import32.dwIAT = (DWORD)pIAT;
		// 					Import32.szFunName = (char*)pName->Name;
		// 					vecFun.push_back(Import32);
		// 				}
		// 				pINT++;
		// 				pIAT++;
		// 			}
		// 		}
		pe->pImport++;
		pe->dwImportNumber++;
	}
}

void ImportsTabWND::slot1(int nRow, int) {
	ui->tableWidget_2->clearContents();
	unsigned OriginalFirstThunk = ui->tableWidget->item(ui->tableWidget->currentRow(), 1)->text().toUInt(nullptr, 16);
	if (mpe->bIs32) {
		PIMAGE_THUNK_DATA32 pINT = (PIMAGE_THUNK_DATA32)(mpe->RvaToOffset(OriginalFirstThunk, mpe->bIsFile) + mpe->szBuffer);
		int iRow = 0;
		while (pINT->u1.Ordinal != 0) {
			if (!(pINT->u1.Ordinal & 0x80000000)) {
				unsigned ThunkOffset = mpe->RvaToOffset(OriginalFirstThunk, mpe->bIsFile);
				unsigned ThunkValue = pINT->u1.AddressOfData;
				PIMAGE_IMPORT_BY_NAME pName = (PIMAGE_IMPORT_BY_NAME)(mpe->RvaToOffset(pINT->u1.AddressOfData, mpe->bIsFile) + mpe->szBuffer);
				QString str1 = QString::number(OriginalFirstThunk, 16);;
				QString str2 = QString::number(ThunkOffset, 16);
				QString str3 = QString::number(ThunkValue, 16);
				QString str4 = QString::number(pName->Hint, 16);
				QString str5 = QString::fromLatin1(pName->Name, 16);
				ui->tableWidget_2->setRowCount(iRow + 1);//总行数增加1
				ui->tableWidget_2->setItem(iRow, 0, new QTableWidgetItem(str1));
				ui->tableWidget_2->setItem(iRow, 1, new QTableWidgetItem(str2));
				ui->tableWidget_2->setItem(iRow, 2, new QTableWidgetItem(str3));
				ui->tableWidget_2->setItem(iRow, 3, new QTableWidgetItem(str4));
				ui->tableWidget_2->setItem(iRow, 4, new QTableWidgetItem(str5));
				iRow++;
				pINT++;
				OriginalFirstThunk += 4;
			}
		}
	}
	else {
		PIMAGE_THUNK_DATA64 pINT = (PIMAGE_THUNK_DATA64)(mpe->RvaToOffset(OriginalFirstThunk, mpe->bIsFile) + mpe->szBuffer);
		int iRow = 0;
		while (pINT->u1.Ordinal != 0) {
			if (!(pINT->u1.Ordinal & 0x8000000000000000)) {
				unsigned ThunkOffset = mpe->RvaToOffset(OriginalFirstThunk, mpe->bIsFile);
				unsigned ThunkValue = pINT->u1.AddressOfData;
				PIMAGE_IMPORT_BY_NAME pName = (PIMAGE_IMPORT_BY_NAME)(mpe->RvaToOffset(pINT->u1.AddressOfData, mpe->bIsFile) + mpe->szBuffer);
				QString str1 = QString::number(OriginalFirstThunk, 16);;
				QString str2 = QString::number(ThunkOffset, 16);
				QString str3 = QString::number(ThunkValue, 16);
				QString str4 = QString::number(pName->Hint, 16);
				QString str5 = QString::fromLatin1(pName->Name, 16);
				ui->tableWidget_2->setRowCount(iRow + 1);//总行数增加1
				ui->tableWidget_2->setItem(iRow, 0, new QTableWidgetItem(str1));
				ui->tableWidget_2->setItem(iRow, 1, new QTableWidgetItem(str2));
				ui->tableWidget_2->setItem(iRow, 2, new QTableWidgetItem(str3));
				ui->tableWidget_2->setItem(iRow, 3, new QTableWidgetItem(str4));
				ui->tableWidget_2->setItem(iRow, 4, new QTableWidgetItem(str5));
				iRow++;
				pINT++;
				OriginalFirstThunk += 8;
			}
		}
	}
}
