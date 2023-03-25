#pragma once

#include <QDialog>
#include "ui_ExportsTabWnd.h"
#include "axyPE.h"
QT_BEGIN_NAMESPACE
namespace Ui { class ExportsTabWndClass; };
QT_END_NAMESPACE

class ExportsTabWnd : public QDialog
{
	Q_OBJECT

public:
	ExportsTabWnd(QWidget *parent = nullptr);
	~ExportsTabWnd();
public slots:
	void Init(axyPE*);
private:
	Ui::ExportsTabWndClass *ui;
};
