#pragma once

#include <QDialog>
#include "ui_tezhenzhi.h"

QT_BEGIN_NAMESPACE
namespace Ui { class tezhenzhiClass; };
QT_END_NAMESPACE

class tezhenzhi : public QDialog
{
	Q_OBJECT

public:
	tezhenzhi(QWidget *parent = nullptr);
	~tezhenzhi();
public slots:
	void Init(int);
	void SetTzz();
signals:
	void tzzInfo(int);
private:
	Ui::tezhenzhiClass *ui;
};
