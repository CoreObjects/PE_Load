#pragma once

#include <QDialog>
#include "ui_PEMainWnd.h"
#include "axyPE.h"
#include "Chara.h"
#include "tezhenzhi.h"
#include "SectionWND.h"
#include "DataDirWnd.h"
#include "AddressCalWND.h"
QT_BEGIN_NAMESPACE
namespace Ui { class PEMainWndClass; };
QT_END_NAMESPACE

class PEMainWnd : public QDialog
{
	Q_OBJECT

public:
	PEMainWnd(QWidget *parent = nullptr);
	~PEMainWnd();
public slots:
	void ShowHeader(axyPE*);
	void ShowCharacteristics();
	void SetCharaInfo(int);
	void slotTZZ();
	void SetTZZInfo(int nFlag);
	void slot1Section();
	void dataDir();
	void ADDRESSCAL();
	void SAVEPE();
signals:
	void Flag(int);
	void tzz(int);
	void PE(axyPE*);
private:
	Ui::PEMainWndClass *ui;
	Chara* wndChara;
	axyPE* PEInfo;
	tezhenzhi* wndtzz;
	SectionWND* wndSection;
	DataDirWnd* wndDataDir;
	AddressCalWND* wndAddress;
};
