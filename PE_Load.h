#pragma once
#include <Windows.h>
#include <Tlhelp32.h>
#include <QtWidgets/QWidget>
#include "ui_PE_Load.h"
#include "axyPE.h"
#include "PEMainWnd.h"

QT_BEGIN_NAMESPACE
namespace Ui { class PE_LoadClass; };
QT_END_NAMESPACE

class PE_Load : public QWidget
{
    Q_OBJECT

public:
    PE_Load(QWidget *parent = nullptr);
	void Init();
	VOID InitProcessTab();
    ~PE_Load();
public slots:
    void SelectProcess(int, int);
    void SelectModule();
    void SelectFile();
    void Quit();
signals:
    void PE(axyPE* pPE);
private:
    Ui::PE_LoadClass *ui;
    PEMainWnd* wndPEMain;
    axyPE m_PE;
};
