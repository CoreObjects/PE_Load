#pragma once

#include <QDialog>
#include "ui_ImportsTabWND.h"
#include "axyPE.h"
QT_BEGIN_NAMESPACE
namespace Ui { class ImportsTabWNDClass; };
QT_END_NAMESPACE

class ImportsTabWND : public QDialog
{
	Q_OBJECT

public:
	ImportsTabWND(QWidget *parent = nullptr);
	~ImportsTabWND();
public slots:
	void Init(axyPE*);
	void slot1(int, int);
private:
	Ui::ImportsTabWNDClass *ui;
	axyPE* mpe;
};
