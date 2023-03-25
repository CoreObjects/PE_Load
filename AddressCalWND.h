#pragma once

#include <QDialog>
#include "ui_AddressCalWND.h"
#include "axyPE.h"
QT_BEGIN_NAMESPACE
namespace Ui { class AddressCalWNDClass; };
QT_END_NAMESPACE

class AddressCalWND : public QDialog
{
	Q_OBJECT

public:
	AddressCalWND(QWidget *parent = nullptr);
	~AddressCalWND();
public slots:
	void Init(axyPE*);
	void CAL();
private:
	Ui::AddressCalWNDClass *ui;
	axyPE* ppE;
};
