#include "ExportsTabWnd.h"

ExportsTabWnd::ExportsTabWnd(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::ExportsTabWndClass())
{
	ui->setupUi(this);
	ui->tableWidget->setColumnCount(4);
//	ui->tableWidget->setColumnWidth(0, 200);  //0 设置列宽
	QStringList sListHeader;
	sListHeader << QString::fromLocal8Bit("序号") << QString::fromLocal8Bit("RVA")\
		<< QString::fromLocal8Bit("偏移")<< QString::fromLocal8Bit("函数名");
	ui->tableWidget->setHorizontalHeaderLabels(sListHeader);
	ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择模式，选择单行
	ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
	this->setWindowTitle(QString::fromLocal8Bit("导出表"));
}

ExportsTabWnd::~ExportsTabWnd()
{
	delete ui;
}
/*
typedef struct _IMAGE_EXPORT_DIRECTORY {
	DWORD   Characteristics;
	DWORD   TimeDateStamp;
	WORD    MajorVersion;
	WORD    MinorVersion;
	DWORD   Name;
	DWORD   Base;
	DWORD   NumberOfFunctions;
	DWORD   NumberOfNames;
	DWORD   AddressOfFunctions;     // RVA from base of image
	DWORD   AddressOfNames;         // RVA from base of image
	DWORD   AddressOfNameOrdinals;  // RVA from base of image
} IMAGE_EXPORT_DIRECTORY, *PIMAGE_EXPORT_DIRECTORY;*/
void ExportsTabWnd::Init(axyPE* m_Pe) {
	m_Pe->ParseHeader();
	m_Pe->ParseExportsTab();
	if (m_Pe->pExportDirectory->VirtualAddress == 0) {
		return;
	}
	QString strOffset = QString::number(m_Pe->RvaToOffset(m_Pe->pExportDirectory->VirtualAddress, m_Pe->bIsFile), 16);
	QString strC = QString::number(m_Pe->pExport->Characteristics, 16);
	QString strBase = QString::number(m_Pe->pExport->Base, 16);
	QString strName = QString::fromLatin1((char*)m_Pe->szBuffer + m_Pe->RvaToOffset(m_Pe->pExport->Name, m_Pe->bIsFile));
	QString strFuncount = QString::number(m_Pe->pExport->NumberOfFunctions, 16);
	QString strNamecount = QString::number(m_Pe->pExport->NumberOfNames, 16);
	QString strAddrOfFun = QString::number(m_Pe->pExport->AddressOfFunctions, 16);
	QString strAddrOfName = QString::number(m_Pe->pExport->AddressOfNames, 16);
	QString strAddrofOrd = QString::number(m_Pe->pExport->AddressOfNameOrdinals, 16);
	ui->lineEdit->setText(strOffset);
	ui->lineEdit_2->setText(strC);
	ui->lineEdit_3->setText(strBase);
	ui->lineEdit_4->setText(strName);
	ui->lineEdit_5->setText(strName);
	ui->lineEdit_6->setText(strFuncount);
	ui->lineEdit_7->setText(strNamecount);
	ui->lineEdit_8->setText(strAddrOfFun);
	ui->lineEdit_9->setText(strAddrOfName);
	ui->lineEdit_10->setText(strAddrofOrd);
	ui->tableWidget->setRowCount(m_Pe->pExport->NumberOfFunctions);
	int i = 0;
	for (auto ite = m_Pe->mapExportTab.begin(); ite != m_Pe->mapExportTab.end(); ite++)
	{
//		ite->first;
		ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number((int)ite->first, 16)));
		ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number((int)ite->second.dwFunRva, 16)));
		ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(m_Pe->RvaToOffset(ite->second.dwFunRva, m_Pe->bIsFile), 16)));
		ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::fromStdString(ite->second.szFunName)));
		i++;
	}
}
