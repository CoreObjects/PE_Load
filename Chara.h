#pragma once

#include <QDialog>
#include "ui_Chara.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CharaClass; };
QT_END_NAMESPACE

class Chara : public QDialog
{
	Q_OBJECT

public:
	Chara(QWidget *parent = nullptr);
	~Chara();
public slots:
	void Init(int);
	void OnOk();
	void Change();
signals:
	void CharaInfo(short);
private:
	Ui::CharaClass *ui;
};
