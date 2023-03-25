#include "SectionWND.h"
SectionWND::SectionWND(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::SectionWNDClass())
{
	ui->setupUi(this);
	ui->tableWidget->setColumnCount(6);
//	ui->tableWidget->setColumnWidth(0, 200);  //0 设置列宽
	QStringList sListHeader;
	sListHeader << QString::fromLocal8Bit("区段名") << QString::fromLocal8Bit("VOffset")\
		<< QString::fromLocal8Bit("VSize") << "ROffset" << "RSize" << QString::fromLocal8Bit("标志");
	ui->tableWidget->setHorizontalHeaderLabels(sListHeader);
	ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择模式，选择单行
	ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
	this->setWindowTitle(QString::fromLocal8Bit("【区段表】"));
}

SectionWND::~SectionWND()
{
	delete ui;
}

void SectionWND::Init(axyPE* p_PE) {
	ui->tableWidget->clearContents();
	ui->tableWidget->setRowCount(p_PE->pFileHeader->NumberOfSections);
	
	for (int i = 0; i < p_PE->pFileHeader->NumberOfSections; i++) {
		char szName[9];
		memcpy(szName, p_PE->pSectionHeader[i].Name, 8);
		QString strName = szName;
		QString strVoffset = QString::number(p_PE->pSectionHeader[i].VirtualAddress, 16).toUpper();
		QString strRoffset = QString::number(p_PE->pSectionHeader[i].PointerToRawData, 16).toUpper();
		QString strVSize = QString::number(p_PE->pSectionHeader[i].Misc.VirtualSize, 16).toUpper();
		QString strRsize = QString::number(p_PE->pSectionHeader[i].SizeOfRawData, 16).toUpper();
		QString strC = QString::number(p_PE->pSectionHeader[i].Characteristics, 16).toUpper();
		ui->tableWidget->setItem(i, 0, new QTableWidgetItem(strName));
		ui->tableWidget->setItem(i, 1, new QTableWidgetItem(strVoffset));
		ui->tableWidget->setItem(i, 2, new QTableWidgetItem(strVSize));
		ui->tableWidget->setItem(i, 3, new QTableWidgetItem(strRoffset));
		ui->tableWidget->setItem(i, 4, new QTableWidgetItem(strVSize));
		ui->tableWidget->setItem(i, 5, new QTableWidgetItem(strC));
	}
}
