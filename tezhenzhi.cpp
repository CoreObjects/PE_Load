#include "tezhenzhi.h"
#include <bitset>
tezhenzhi::tezhenzhi(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::tezhenzhiClass())
{
	ui->setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("文件特征窗口"));
}

tezhenzhi::~tezhenzhi()
{
	delete ui;
}

void tezhenzhi::Init(int nFlag) {
	std::bitset<16> bFileCharacteristics;
	short wCharacteristics = nFlag;
	for (int i = 0; i < 16; i++) {
		bFileCharacteristics[i] = wCharacteristics % 2;
		wCharacteristics >>= 1;
	}
	if (bFileCharacteristics[0]) {
		ui->check1->setChecked(true);
	}
	if (bFileCharacteristics[1]) {
		ui->check2->setChecked(true);
	}
	if (bFileCharacteristics[2]) {
		ui->check3->setChecked(true);
	}
	if (bFileCharacteristics[3]) {
		ui->check4->setChecked(true);
	}
	if (bFileCharacteristics[4]) {
		ui->check5->setChecked(true);
	}
	if (bFileCharacteristics[5]) {
		ui->check6->setChecked(true);
	}
	if (bFileCharacteristics[6]) {
		ui->check7->setChecked(true);
	}
	if (bFileCharacteristics[7]) {
		ui->check8->setChecked(true);
	}
	if (bFileCharacteristics[8]) {
		ui->check9->setChecked(true);
	}
	if (bFileCharacteristics[9]) {
		ui->check10->setChecked(true);
	}
	if (bFileCharacteristics[10]) {
		ui->check11->setChecked(true);
	}
	if (bFileCharacteristics[11]) {
		ui->check12->setChecked(true);
	}
	if (bFileCharacteristics[12]) {
		ui->check13->setChecked(true);
	}
	if (bFileCharacteristics[13]) {
		ui->check14->setChecked(true);
	}
	if (bFileCharacteristics[14]) {
		ui->check15->setChecked(true);
	}
}

void tezhenzhi::SetTzz() {
	int nFlag = ui->check1->isChecked() * 0b1 +
		ui->check2->isChecked() * 0b10 +
		ui->check3->isChecked() * 0b100 +
		ui->check4->isChecked() * 0b1000 +
		ui->check5->isChecked() * 0b10000 +
		ui->check6->isChecked() * 0b100000 +
		ui->check7->isChecked() * 0b1000000 +
		ui->check8->isChecked() * 0b10000000 +
		ui->check9->isChecked() * 0b100000000 +
		ui->check10->isChecked() * 0b1000000000 +
		ui->check11->isChecked() * 0b10000000000 +
		ui->check12->isChecked() * 0b100000000000 +
		ui->check13->isChecked() * 0b1000000000000 +
		ui->check14->isChecked() * 0b10000000000000+
		ui->check15->isChecked() * 0b100000000000000;
	emit tzzInfo(nFlag);
	this->accept();
}
