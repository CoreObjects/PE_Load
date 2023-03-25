#include "ReLocalTabWND.h"

ReLocalTabWND::ReLocalTabWND(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::ReLocalTabWNDClass())
{
	
	ui->setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("重定位表"));
	ui->tableWidget->setColumnCount(3);
//	ui->tableWidget->setColumnWidth(1, 150);  //0 设置列宽
	QStringList sListHeader;
	sListHeader << QString::fromLocal8Bit("区段") << QString::fromLocal8Bit("RVA")\
		<< QString::fromLocal8Bit("项目");
	ui->tableWidget->setHorizontalHeaderLabels(sListHeader);
	ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择模式，选择单行
	ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

	ui->tableWidget_2->setColumnCount(5);
//	ui->tableWidget_2->setColumnWidth(1, 150);  //0 设置列宽
	QStringList sListHeader1;
	sListHeader1 << "RVA" << QString::fromLocal8Bit("偏移") << QString::fromLocal8Bit("类型")\
		<< QString::fromLocal8Bit("FAR地址") << QString::fromLocal8Bit("数据解释");
	ui->tableWidget_2->setHorizontalHeaderLabels(sListHeader1);
	ui->tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择模式，选择单行
	ui->tableWidget_2->horizontalHeader()->setStretchLastSection(true);
	this->setWindowTitle(QString::fromLocal8Bit("重定位表"));
}

ReLocalTabWND::~ReLocalTabWND()
{
	delete ui;
}

void ReLocalTabWND::Init(axyPE* m_PE) {
	mpe = m_PE;
	m_PE->ParseHeader();
//	m_PE->ParseRelocalTab();
	PIMAGE_BASE_RELOCATION pRelocal = (PIMAGE_BASE_RELOCATION)(m_PE->szBuffer + m_PE->RvaToOffset(m_PE->pRelocalDirectory->VirtualAddress, m_PE->bIsFile));
	int nIndex = 0;
	ui->tableWidget->setRowCount(nIndex);
	while (pRelocal->SizeOfBlock != 0) {
		DWORD dwItemCount = (pRelocal->SizeOfBlock - sizeof(PIMAGE_BASE_RELOCATION)) / sizeof(WORD);
		QString strxm = QString::number(dwItemCount, 16).toUpper() + "h/" + QString::number(dwItemCount).toUpper() + "d";
		QString strQD = QString::fromStdString(m_PE->GetSectionName(pRelocal->VirtualAddress)).toUpper();
		QString strRVA = QString::number(pRelocal->VirtualAddress, 16).toUpper();
		
		ui->tableWidget->setRowCount(nIndex + 1);
		ui->tableWidget->setItem(nIndex, 0, new QTableWidgetItem(strQD));
		ui->tableWidget->setItem(nIndex, 1, new QTableWidgetItem(strRVA));
		ui->tableWidget->setItem(nIndex, 2, new QTableWidgetItem(strxm));
		nIndex++;
		pRelocal = (PIMAGE_BASE_RELOCATION)((char*)pRelocal + pRelocal->SizeOfBlock);
	}
}

void ReLocalTabWND::ShowSUBItem(int nRow, int nCou) {
	ui->tableWidget_2->clearContents();
	PIMAGE_BASE_RELOCATION pRelocal = (PIMAGE_BASE_RELOCATION)(mpe->szBuffer + mpe->RvaToOffset(mpe->pRelocalDirectory->VirtualAddress, mpe->bIsFile));
	DWORD dwRVA = ui->tableWidget->item(ui->tableWidget->currentRow(), 1)->text().toUInt(nullptr, 16);
	while (pRelocal->SizeOfBlock != 0) {
		if (pRelocal->VirtualAddress == dwRVA) {
			DWORD dwItemCount = (pRelocal->SizeOfBlock - sizeof(PIMAGE_BASE_RELOCATION)) / sizeof(WORD);
			ui->tableWidget_2->setRowCount(dwItemCount);
			PTypeOffset pTypeoffset = (PTypeOffset)(pRelocal + 1);
			for (int i = 0; i < dwItemCount; i++) {
				DWORD dwRva = pRelocal->VirtualAddress + pTypeoffset[i].Offset;
				DWORD dwType = pTypeoffset[i].Type;
				QString strRVA = QString::number(dwRva, 16).toUpper();
				QString strOffset = QString::number(mpe->RvaToOffset(dwRva, mpe->bIsFile), 16).toUpper();
				QString strTpye = dwType == 3 ? QString::fromLocal8Bit("HIGH_LOW") : QString();
				strTpye = dwType == 10 ? QString::fromLocal8Bit("DIR16") : strTpye;
				QString strFaradd; LONG_PTR dFarAddress; LONG_PTR dOffset;
				if (mpe->bIs32) {
					dFarAddress = *(DWORD*)(mpe->szBuffer + mpe->RvaToOffset(dwRva, mpe->bIsFile));
					dOffset = mpe->RvaToOffset(dFarAddress - mpe->pOptionHeader32->ImageBase, mpe->bIs32);
					strFaradd = QString::number(*(DWORD*)(mpe->szBuffer + mpe->RvaToOffset(dwRva, mpe->bIsFile)), 16);
				}
				else {
					dFarAddress = *(LONG_PTR*)(mpe->szBuffer + mpe->RvaToOffset(dwRva, mpe->bIsFile));
					dOffset = mpe->RvaToOffset(dFarAddress - mpe->pOptionHeader64->ImageBase, mpe->bIsFile);
					strFaradd = QString::number(*(LONG_PTR*)(mpe->szBuffer + mpe->RvaToOffset(dwRva, mpe->bIsFile)), 16);
				}
				if (dOffset > mpe->dwSize) {
					ui->tableWidget_2->setItem(i, 4, new QTableWidgetItem(QString("????????????????????")));
					continue;
				}
				const char* sz1 = (char*)mpe->szBuffer + dOffset;
				if ((*sz1 >= 'A' && *sz1 <= 'Z') || (*sz1 >= 'a' && *sz1 <= 'z') || (*sz1 >= '0' && *sz1 <= '9')) {
					ui->tableWidget_2->setItem(i, 4, new QTableWidgetItem(QString::fromWCharArray((wchar_t*)sz1)));
				}
				else {
					QByteArray bData(sz1, 8);
					QString str;
					for (int j = 0; j < 16; j++) {
						str += bData.toHex()[j];
						if (j % 2)
							str += " ";
					}
					ui->tableWidget_2->setItem(i, 4, new QTableWidgetItem(str));
				}
				ui->tableWidget_2->setItem(i, 0, new QTableWidgetItem(strRVA));
				ui->tableWidget_2->setItem(i, 1, new QTableWidgetItem(strOffset));
				ui->tableWidget_2->setItem(i, 2, new QTableWidgetItem(strTpye));
				ui->tableWidget_2->setItem(i, 3, new QTableWidgetItem(strFaradd));
			}
			return;
		}
		pRelocal = (PIMAGE_BASE_RELOCATION)((char*)pRelocal + pRelocal->SizeOfBlock);
	}
}

//		PTypeOffset pTypeoffset = (PTypeOffset)(pRelocal + 1);
// 		for (int i = 0; i < dwItemCount; i++) {
// 			DWORD dwRva = pRelocal->VirtualAddress + pTypeoffset[i].Offset;
// 			DWORD dwType = pTypeoffset[i].Type;
// 		}