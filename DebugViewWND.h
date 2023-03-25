#pragma once

#include <QDialog>
#include "ui_DebugViewWND.h"
#include "axyPE.h"
QT_BEGIN_NAMESPACE
namespace Ui { class DebugViewWNDClass; };
QT_END_NAMESPACE

class DebugViewWND : public QDialog
{
	Q_OBJECT

public:
	DebugViewWND(QWidget *parent = nullptr);
	~DebugViewWND();
public slots:
	void Init(axyPE* myPE);
private:
	Ui::DebugViewWNDClass *ui;
};
