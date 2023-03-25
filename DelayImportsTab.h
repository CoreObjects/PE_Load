#pragma once

#include <QDialog>
#include "ui_DelayImportsTab.h"
#include "axyPE.h"
QT_BEGIN_NAMESPACE
namespace Ui { class DelayImportsTabClass; };
QT_END_NAMESPACE

class DelayImportsTab : public QDialog
{
	Q_OBJECT

public:
	DelayImportsTab(QWidget *parent = nullptr);
	~DelayImportsTab();
public slots:
	void Init(axyPE*);
	void ShowFun(int row, int column);
private:
	Ui::DelayImportsTabClass *ui;
	axyPE* aPE;
};
