#include "PE_Load.h"
#include "psapi.h"
#include "WindowsAxy.h"
#include <QFile>
#include <QFileDialog>
PE_Load::PE_Load(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PE_LoadClass())
{
	wndPEMain = new PEMainWnd;
    ui->setupUi(this);
    Init();
    InitProcessTab();
	QObject::connect(this, &PE_Load::PE, wndPEMain, &PEMainWnd::ShowHeader);
	this->setWindowTitle(QString::fromLocal8Bit("PE文件解析器"));
	this->setWindowIcon(QIcon(":/PE_Load/aa7wy-bjq55-001.ico"));
}

void PE_Load::Init() {
	ui->tableWidget_Process->setColumnCount(3);
	ui->tableWidget_Process->setColumnWidth(0, 200);  //0 设置列宽
	QStringList sListHeader;
	sListHeader << QString::fromLocal8Bit("进程名") << QString::fromLocal8Bit("进程Id")\
		<< QString::fromLocal8Bit("镜像基址");
	ui->tableWidget_Process->setHorizontalHeaderLabels(sListHeader);
	ui->tableWidget_Process->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择模式，选择单行
	ui->tableWidget_Process->horizontalHeader()->setStretchLastSection(true);

	ui->tableWidget_Module->setColumnCount(3);
	ui->tableWidget_Module->setColumnWidth(0, 200);  //0 设置列宽
	sListHeader.clear();
	sListHeader << QString::fromLocal8Bit("模块名") << QString::fromLocal8Bit("镜像基址")\
		<< QString::fromLocal8Bit("镜像大小");
	ui->tableWidget_Module->setHorizontalHeaderLabels(sListHeader);
	ui->tableWidget_Module->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择模式，选择单行
	ui->tableWidget_Module->horizontalHeader()->setStretchLastSection(true);
}

VOID PE_Load::InitProcessTab() {
   
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (hSnap == INVALID_HANDLE_VALUE)  return;
	PROCESSENTRY32W pe32 = { sizeof(pe32) };
	BOOL bRet = Process32FirstW(hSnap, &pe32);
	DWORD dwIndex = 0;
	while (bRet) {
		ui->tableWidget_Process->setRowCount(dwIndex + 1);
		QString strName = QString::fromWCharArray(pe32.szExeFile);
		QString strProcessId = QString::number(pe32.th32ProcessID);
		HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pe32.th32ProcessID);
		HMODULE hModule[1] = { 0 };
		DWORD dwRet = 0;
		EnumProcessModules(hProcess, (HMODULE*)(hModule), sizeof(hModule), &dwRet);
		CloseHandle(hProcess);
		QString strImageBase = QString::number((DWORD)hModule[0], 16).toUpper();
		QString strImageSize = QString::number(pe32.dwSize, 16);
		ui->tableWidget_Process->setItem(dwIndex, 0, new QTableWidgetItem(strName));
		ui->tableWidget_Process->setItem(dwIndex, 1, new QTableWidgetItem(strProcessId));
		ui->tableWidget_Process->setItem(dwIndex, 2, new QTableWidgetItem(strImageBase));
		bRet = Process32NextW(hSnap, &pe32);
		dwIndex++;
	}
}

PE_Load::~PE_Load()
{
	delete wndPEMain;
    delete ui;
}

void PE_Load::SelectProcess(int nRow, int nColumn) {
	ui->tableWidget_Module->clearContents();
	DWORD dwProcessId = ui->tableWidget_Process->item(nRow, 1)->text().toUInt();
	std::unordered_multimap<std::string, MODULEENTRY32> mapModule;
	WindowsAxy::GetProcessModuleMap(mapModule, dwProcessId);
	DWORD dwIndex = 0;
	for (auto ite = mapModule.begin(); ite != mapModule.end(); ite++) {
		QString strModuleName = QString::fromStdString(ite->first);
		QString strModuleImageBase = QString::number((LONG_PTR)ite->second.modBaseAddr, 16).toUpper();
		QString strModuleImageSize = QString::number((DWORD)ite->second.modBaseSize);
		ui->tableWidget_Module->setRowCount(dwIndex + 1);
		ui->tableWidget_Module->setItem(dwIndex, 0, new QTableWidgetItem(strModuleName));
		ui->tableWidget_Module->setItem(dwIndex, 1, new QTableWidgetItem(strModuleImageBase));
		ui->tableWidget_Module->setItem(dwIndex, 2, new QTableWidgetItem(strModuleImageSize));
		dwIndex++;
	}
}

void PE_Load::SelectModule() {
	int nRow_Module = ui->tableWidget_Module->currentRow();
	int nRow_Process = ui->tableWidget_Process->currentRow();
	if (nRow_Process != -1 && nRow_Module != -1) {
		DWORD dwProcessId = ui->tableWidget_Process->item(nRow_Process, 1)->text().toUInt();
		LONG_PTR dwModuleBase = ui->tableWidget_Module->item(nRow_Module, 1)->text().toULongLong(nullptr, 16);
		DWORD dwModuleSize = ui->tableWidget_Module->item(nRow_Module, 2)->text().toUInt();
		m_PE.LoadIMage(dwProcessId,dwModuleBase,dwModuleSize);
		emit PE(&m_PE);
		wndPEMain->exec();
	}	
}

void PE_Load::SelectFile() {
	QString FilePath = QFileDialog::getOpenFileName(this, "选择PE文件", ".", "*.exe *.dll");
	if (!FilePath.isEmpty()) {
		m_PE.LoadFile(FilePath);
		emit PE(&m_PE);
		wndPEMain->exec();
	}
}

void PE_Load::Quit() {
	ExitProcess(0);
}
