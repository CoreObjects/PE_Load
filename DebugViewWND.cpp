#include "DebugViewWND.h"

DebugViewWND::DebugViewWND(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::DebugViewWNDClass())
{
	ui->setupUi(this);
	ui->tableWidget->setColumnCount(7); //��������
// 	ui->tableWidget->setColumnWidth(0, 80);  //0 �����п�
// 	ui->tableWidget->setColumnWidth(1, 80); //1 �����п�
// 	ui->tableWidget->setColumnWidth(2, 80);  //0 �����п�
// 	ui->tableWidget->setColumnWidth(3, 80); //1 �����п�
// 	ui->tableWidget->setColumnWidth(4, 80);  //0 �����п�
	ui->tableWidget->setColumnWidth(5, 120); //1 �����п�
	ui->tableWidget->setColumnWidth(6, 120);  //0 �����п�
	QStringList sListHeader;
	sListHeader << QString::fromLocal8Bit("����") << QString::fromLocal8Bit("����ʱ��")
		<< QString::fromLocal8Bit("�������汾") << QString::fromLocal8Bit("����") << QString::fromLocal8Bit("���ݴ�С")
		<< QString::fromLocal8Bit("AddressOfRawData") << QString::fromLocal8Bit("PointerToRawData");
	ui->tableWidget->setHorizontalHeaderLabels(sListHeader);
	ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); //����ѡ��ģʽ��ѡ����
	ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
	this->setWindowTitle(QString::fromLocal8Bit("������Ϣ"));
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
