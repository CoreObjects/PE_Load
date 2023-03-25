#pragma once

#include <QDialog>
#include "ui_TLSWND.h"
#include "axyPE.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TLSWNDClass; };
QT_END_NAMESPACE

class TLSWND : public QDialog
{
	Q_OBJECT

public:
	TLSWND(QWidget *parent = nullptr);
	~TLSWND();
public slots:
	void Init(axyPE* aPE);
private:
	Ui::TLSWNDClass *ui;
};
