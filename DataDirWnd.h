#pragma once

#include <QDialog>
#include "ui_DataDirWnd.h"
#include "axyPE.h"
#include "ExportsTabWnd.h"
#include "ImportsTabWND.h"
#include "ResTabWND.h"
#include "ReLocalTabWND.h"
#include "DebugViewWND.h"
#include "TLSWND.h"
#include "DelayImportsTab.h"
QT_BEGIN_NAMESPACE
namespace Ui { class DataDirWndClass; };
QT_END_NAMESPACE

class DataDirWnd : public QDialog
{
	Q_OBJECT

public:
	DataDirWnd(QWidget *parent = nullptr);
	~DataDirWnd();
public slots:
	void Init(axyPE*);
	void EXPORTTAB();
	void IMPORTSTAB();
	void RESTAB();
	void RELOCAL();
	void DEBUGINFO();
	void TLS();
	void DelayIMPORTStab();
	void SAVE();
signals:
	void PEData(axyPE*);
private:
	Ui::DataDirWndClass *ui;
	ExportsTabWnd* wndExports;
	axyPE* PEdata;
	ImportsTabWND* wndImports;
	ResTabWND* wndResTab;
	ReLocalTabWND* wndRelocalTAB;
	DebugViewWND* wndDebug;
	TLSWND* wndTLS;
	DelayImportsTab* wndDelay;
};
