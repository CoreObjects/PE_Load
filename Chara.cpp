#include "Chara.h"

Chara::Chara(QWidget* parent)
	: QDialog(parent)
	, ui(new Ui::CharaClass()) {
	ui->setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("子系统信息"));
}

Chara::~Chara() {
	delete ui;
}

void Chara::Init(int nFlag) {
	QString strLabel = QString::fromLocal8Bit("当前值:") + QString::number(nFlag, 16).toUpper();
	switch (nFlag) {
	case 0:ui->radioButton_0->setChecked(true); break;
	case 1:ui->radioButton_1->setChecked(true); break;
	case 2:ui->radioButton_2->setChecked(true); break;
	case 3:ui->radioButton_3->setChecked(true); break;
	case 4:ui->radioButton_4->setChecked(true); break;
	case 5:ui->radioButton_5->setChecked(true); break;
	case 6:ui->radioButton_6->setChecked(true); break;
	case 7:ui->radioButton_7->setChecked(true); break;
	case 8:ui->radioButton_8->setChecked(true); break;
	case 9:ui->radioButton_9->setChecked(true); break;
	case 10:ui->radioButton_10->setChecked(true); break;
	case 11:ui->radioButton_11->setChecked(true); break;
	default:break;
	}
	ui->label->setText(strLabel);
}

void Chara::OnOk() {
	int nFlag = ui->radioButton_0->isChecked() * 0 + 
		ui->radioButton_1->isChecked() * 1 + 
		ui->radioButton_2->isChecked() * 2 +
		ui->radioButton_3->isChecked() * 3 +
		ui->radioButton_4->isChecked() * 4  +
		ui->radioButton_5->isChecked() * 5 +
		ui->radioButton_6->isChecked() * 6 +
		ui->radioButton_7->isChecked() * 7 +
		ui->radioButton_8->isChecked() * 8 +
		ui->radioButton_9->isChecked() * 9 + 
		ui->radioButton_10->isChecked() * 10 + 
		ui->radioButton_11->isChecked() * 11;
	emit CharaInfo(nFlag);
	this->accept();
}

void Chara::Change() {
	int nFlag = ui->radioButton_0->isChecked() * 0 +
		ui->radioButton_1->isChecked() * 1 +
		ui->radioButton_2->isChecked() * 2 +
		ui->radioButton_3->isChecked() * 3 +
		ui->radioButton_4->isChecked() * 4 +
		ui->radioButton_5->isChecked() * 5 +
		ui->radioButton_6->isChecked() * 6 +
		ui->radioButton_7->isChecked() * 7 +
		ui->radioButton_8->isChecked() * 8 +
		ui->radioButton_9->isChecked() * 9 +
		ui->radioButton_10->isChecked() * 10 +
		ui->radioButton_11->isChecked() * 11;
	QString strLabel = QString::fromLocal8Bit("当前值:") + QString::number(nFlag, 16).toUpper();
	ui->label->setText(strLabel);
}
