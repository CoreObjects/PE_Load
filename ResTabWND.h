#pragma once

#include <QDialog>
#include "ui_ResTabWND.h"
#include "axyPE.h"
QT_BEGIN_NAMESPACE
namespace Ui { class ResTabWNDClass; };
QT_END_NAMESPACE

class ResTabWND : public QDialog
{
	Q_OBJECT

public:
	ResTabWND(QWidget *parent = nullptr);
	~ResTabWND();
	void ShowRes(axyPE* pPE);
public slots:
	void Init(axyPE* pPE);
	void slotClicked(QTreeWidgetItem*, int);
private:
	Ui::ResTabWNDClass *ui;
	axyPE* ppe;
};
