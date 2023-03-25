#pragma once

#include <QDialog>
#include "ui_ReLocalTabWND.h"
#include "axyPE.h"
QT_BEGIN_NAMESPACE
namespace Ui { class ReLocalTabWNDClass; };
QT_END_NAMESPACE

class ReLocalTabWND : public QDialog
{
	Q_OBJECT

public:
	ReLocalTabWND(QWidget *parent = nullptr);
	~ReLocalTabWND();
public slots:
	void Init(axyPE*);
	void ShowSUBItem(int, int);
private:
	Ui::ReLocalTabWNDClass *ui;
	axyPE* mpe;
};
