#pragma once

#include <QDialog>
#include "ui_SectionWND.h"
#include "axyPE.h"
QT_BEGIN_NAMESPACE
namespace Ui { class SectionWNDClass; };
QT_END_NAMESPACE

class SectionWND : public QDialog
{
	Q_OBJECT

public:
	SectionWND(QWidget *parent = nullptr);
	~SectionWND();
public slots:
	void Init(axyPE*);
private:
	Ui::SectionWNDClass *ui;
};
