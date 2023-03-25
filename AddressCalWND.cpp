#include "AddressCalWND.h"

AddressCalWND::AddressCalWND(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::AddressCalWNDClass())
{
	ui->setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("Î»ÖÃ¼ÆËãÆ÷"));
}

AddressCalWND::~AddressCalWND()
{
	delete ui;
}

void AddressCalWND::Init(axyPE* mpe) {
	ppE = mpe;
}

void AddressCalWND::CAL() {
	DWORD dwRva = ui->lineEdit_2->text().toUInt(nullptr, 16);
	if (dwRva == 0) {
		return;
	}
	ui->lineEdit_3->setText(QString::number(ppE->RvaToOffset(dwRva, ppE->bIsFile), 16).toUpper());
	ui->lineEdit_4->setText(QString::fromStdString(ppE->GetSectionName(dwRva)).toUpper());
	ppE->ParseHeader();
	if (ppE->bIs32) {
		ui->lineEdit->setText(QString::number(dwRva + ppE->pOptionHeader32->ImageBase, 16).toUpper());
	}
	else {
		ui->lineEdit->setText(QString::number(dwRva + ppE->pOptionHeader64->ImageBase, 16).toUpper());
	}
	
}
