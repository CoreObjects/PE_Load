#include "TLSWND.h"

TLSWND::TLSWND(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::TLSWNDClass())
{
	ui->setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("TLS±í"));
}

TLSWND::~TLSWND()
{
	delete ui;
}

void TLSWND::Init(axyPE* aPE) {
	PIMAGE_TLS_DIRECTORY pTlsDirTab = (PIMAGE_TLS_DIRECTORY)((const char*)aPE->szBuffer + aPE->RvaToOffset(aPE->pTLSDirectory->VirtualAddress, aPE->bIsFile));
	ui->lineEdit_2->setText(QString::number(pTlsDirTab->StartAddressOfRawData, 16) + "H");;
	ui->lineEdit_3->setText(QString::number(pTlsDirTab->EndAddressOfRawData, 16) + "H");
	ui->lineEdit_5->setText(QString::number(pTlsDirTab->AddressOfCallBacks, 16) + "H");
	ui->lineEdit_4->setText(QString::number(pTlsDirTab->AddressOfIndex, 16) + "H");
	ui->lineEdit_6->setText(QString::number(pTlsDirTab->SizeOfZeroFill, 16) + "H");
	ui->lineEdit_7->setText(QString::number(pTlsDirTab->Characteristics, 16) + "H");
}
