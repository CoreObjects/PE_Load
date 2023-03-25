#include "DataDirWnd.h"

DataDirWnd::DataDirWnd(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::DataDirWndClass())
{
	ui->setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("数据目录表"));
}

DataDirWnd::~DataDirWnd()
{
	delete ui;
}

void DataDirWnd::Init(axyPE* m_PE) {
	PEdata = m_PE;
	m_PE->ParseHeader();
	QString strImportRVA, strImportSize;
	strImportRVA = QString::number(m_PE->pImportDirectory->VirtualAddress, 16).toUpper();
	strImportSize = QString::number(m_PE->pImportDirectory->Size, 16).toUpper();
	QString strExportRVA, strExportSize;
	strExportRVA = QString::number(m_PE->pExportDirectory->VirtualAddress, 16).toUpper();
	strExportSize = QString::number(m_PE->pExportDirectory->Size, 16).toUpper();
	QString strResRVA, strResSize;
	strResRVA = QString::number(m_PE->pResouceDirectory->VirtualAddress, 16).toUpper();
	strResSize = QString::number(m_PE->pResouceDirectory->Size, 16).toUpper();
	QString strExRVA, strExSize;
	strExRVA = QString::number(m_PE->pExceptionDirectory->VirtualAddress, 16).toUpper();
	strExSize = QString::number(m_PE->pExceptionDirectory->Size, 16).toUpper();
	QString strsecRVA, strsecSize;
	strsecRVA = QString::number(m_PE->pSecurityDirectory->VirtualAddress, 16).toUpper();
	strsecSize = QString::number(m_PE->pSecurityDirectory->Size, 16).toUpper();
	QString strRelocalRVA, strRelocalSize;
	strRelocalRVA = QString::number(m_PE->pRelocalDirectory->VirtualAddress, 16).toUpper();
	strRelocalSize = QString::number(m_PE->pRelocalDirectory->Size, 16).toUpper();
	QString strDebugRVA, strDebugSize;
	strDebugRVA = QString::number(m_PE->pDebugDirectory->VirtualAddress, 16).toUpper();
	strDebugSize = QString::number(m_PE->pDebugDirectory->Size, 16).toUpper();
	QString strArcRVA, strArcSize;
	strArcRVA = QString::number(m_PE->pArchitectureDirectory->VirtualAddress, 16).toUpper();
	strArcSize = QString::number(m_PE->pArchitectureDirectory->Size, 16).toUpper();
	QString strppRVA, strppSize;
	strppRVA = QString::number(m_PE->pRVAofGPDirectory->VirtualAddress, 16).toUpper();
	strppSize = QString::number(m_PE->pRVAofGPDirectory->Size, 16).toUpper();
	QString strtlsRVA, strtlsSize;
	strtlsRVA = QString::number(m_PE->pTLSDirectory->VirtualAddress, 16).toUpper();
	strtlsSize = QString::number(m_PE->pTLSDirectory->Size, 16).toUpper();
	QString strconfRVA, strconfSize;
	strconfRVA = QString::number(m_PE->pLoadConfigurationDirectory->VirtualAddress, 16).toUpper();
	strconfSize = QString::number(m_PE->pLoadConfigurationDirectory->Size, 16).toUpper();
	QString strboundRVA, strboundSize;
	strboundRVA = QString::number(m_PE->pRVAofGPDirectory->VirtualAddress, 16).toUpper();
	strboundSize = QString::number(m_PE->pRVAofGPDirectory->Size, 16).toUpper();
	QString strIATRVA, strIATSize;
	strIATRVA = QString::number(m_PE->pIATDirectory->VirtualAddress, 16).toUpper();
	strIATSize = QString::number(m_PE->pIATDirectory->Size, 16).toUpper();
	QString strdelayRVA, strdelaySize;
	strdelayRVA = QString::number(m_PE->pDelayImportDirectory->VirtualAddress, 16).toUpper();
	strdelaySize = QString::number(m_PE->pDelayImportDirectory->Size, 16).toUpper();
	QString strcomRVA, strcomSize;
	strcomRVA = QString::number(m_PE->pCOMofGPDirectory->VirtualAddress, 16).toUpper();
	strcomSize = QString::number(m_PE->pCOMofGPDirectory->Size, 16).toUpper();
	ui->lineEdit->setText(strExportRVA);
	ui->lineEdit_28->setText(strExportSize);
	ui->lineEdit_2->setText(strImportRVA);
	ui->lineEdit_23->setText(strImportSize);
	ui->lineEdit_3->setText(strResRVA);
	ui->lineEdit_25->setText(strResSize);
	ui->lineEdit_4->setText(strExRVA);
	ui->lineEdit_26->setText(strExSize);
	ui->lineEdit_15->setText(strsecRVA);
	ui->lineEdit_18->setText(strsecSize);
	ui->lineEdit_10->setText(strRelocalRVA);
	ui->lineEdit_29->setText(strRelocalSize);
	ui->lineEdit_8->setText(strDebugRVA);
	ui->lineEdit_27->setText(strDebugSize);
	ui->lineEdit_12->setText(strArcRVA);
	ui->lineEdit_20->setText(strArcSize);
	ui->lineEdit_5->setText(strppRVA);
	ui->lineEdit_24->setText(strppSize);
	ui->lineEdit_6->setText(strtlsRVA);
	ui->lineEdit_17->setText(strtlsSize);
	ui->lineEdit_13->setText(strconfRVA);
	ui->lineEdit_21->setText(strconfSize);
	ui->lineEdit_7->setText(strboundRVA);
	ui->lineEdit_30->setText(strboundSize);
	ui->lineEdit_14->setText(strIATRVA);
	ui->lineEdit_19->setText(strIATSize);
	ui->lineEdit_11->setText(strdelayRVA);
	ui->lineEdit_16->setText(strdelaySize);
	ui->lineEdit_9->setText(strtlsRVA);
	ui->lineEdit_22->setText(strtlsSize);
}

void DataDirWnd::EXPORTTAB() {
	wndExports = new ExportsTabWnd;
	connect(this, &DataDirWnd::PEData, wndExports, &ExportsTabWnd::Init);
	emit PEData(PEdata);
	wndExports->exec();
	delete wndExports;
}

void DataDirWnd::IMPORTSTAB() {
	wndImports = new ImportsTabWND;
	connect(this, &DataDirWnd::PEData, wndImports, &ImportsTabWND::Init);
	emit PEData(PEdata);
	wndImports->exec();
	delete wndImports;
}

void DataDirWnd::RESTAB() {
	wndResTab = new ResTabWND;
	connect(this, &DataDirWnd::PEData, wndResTab, &ResTabWND::Init);
	emit PEData(PEdata);
	wndResTab->exec();
	delete wndResTab;
}

void DataDirWnd::RELOCAL() {
	wndRelocalTAB = new ReLocalTabWND;
	connect(this, &DataDirWnd::PEData, wndRelocalTAB, &ReLocalTabWND::Init);
	emit PEData(PEdata);
	wndRelocalTAB->exec();
	delete wndRelocalTAB;
}

void DataDirWnd::DEBUGINFO() {
	wndDebug = new DebugViewWND;
	connect(this, &DataDirWnd::PEData, wndDebug, &DebugViewWND::Init);
	emit PEData(PEdata);
	wndDebug->exec();
	delete wndDebug;
}

void DataDirWnd::TLS() {
	wndTLS = new TLSWND;
	connect(this, &DataDirWnd::PEData, wndTLS, &TLSWND::Init);
	emit PEData(PEdata);
	wndTLS->exec();
	delete wndTLS;
}

void DataDirWnd::DelayIMPORTStab() {
	wndDelay = new DelayImportsTab;
	connect(this, &DataDirWnd::PEData, wndDelay, &DelayImportsTab::Init);
	emit PEData(PEdata);
	wndDelay->exec();
	delete wndDelay;
}

void DataDirWnd::SAVE() {

	PEdata->pExportDirectory->VirtualAddress = ui->lineEdit->text().toUInt(nullptr, 16);
	PEdata->pExportDirectory->Size = ui->lineEdit_28->text().toUInt(nullptr, 16);

	PEdata->pImportDirectory->VirtualAddress = ui->lineEdit_2->text().toUInt(nullptr, 16);
	PEdata->pImportDirectory->Size = ui->lineEdit_23->text().toUInt(nullptr, 16);

	PEdata->pResouceDirectory->VirtualAddress = ui->lineEdit_3->text().toUInt(nullptr, 16);
	PEdata->pResouceDirectory->Size = ui->lineEdit_25->text().toUInt(nullptr, 16);

	PEdata->pExceptionDirectory->Size = ui->lineEdit_26->text().toUInt(nullptr, 16);
	PEdata->pExceptionDirectory->VirtualAddress = ui->lineEdit_4->text().toUInt(nullptr, 16);

	PEdata->pSecurityDirectory->VirtualAddress = ui->lineEdit_15->text().toUInt(nullptr, 16);
	PEdata->pSecurityDirectory->Size = ui->lineEdit_18->text().toUInt(nullptr, 16);

	PEdata->pRelocalDirectory->VirtualAddress = ui->lineEdit_10->text().toUInt(nullptr, 16);
	PEdata->pRelocalDirectory->Size = ui->lineEdit_29->text().toUInt(nullptr, 16);

	PEdata->pDebugDirectory->VirtualAddress = ui->lineEdit_8->text().toUInt(nullptr, 16);
	PEdata->pDebugDirectory->Size = ui->lineEdit_27->text().toUInt(nullptr, 16);

	PEdata->pArchitectureDirectory->VirtualAddress = ui->lineEdit_12->text().toUInt(nullptr, 16);
	PEdata->pArchitectureDirectory->Size = ui->lineEdit_20->text().toUInt(nullptr, 16);
	
	PEdata->pRVAofGPDirectory->VirtualAddress = ui->lineEdit_5->text().toUInt(nullptr, 16);
	PEdata->pRVAofGPDirectory->Size = ui->lineEdit_24->text().toUInt(nullptr, 16);

	PEdata->pTLSDirectory->VirtualAddress = ui->lineEdit_6->text().toUInt(nullptr, 16);
	PEdata->pTLSDirectory->Size = ui->lineEdit_17->text().toUInt(nullptr, 16);
	
	PEdata->pLoadConfigurationDirectory->VirtualAddress = ui->lineEdit_13->text().toUInt(nullptr, 16);
	PEdata->pLoadConfigurationDirectory->Size = ui->lineEdit_21->text().toUInt(nullptr, 16);

	PEdata->pBoundImportDirectory->VirtualAddress = ui->lineEdit_7->text().toUInt(nullptr, 16);
	PEdata->pBoundImportDirectory->Size = ui->lineEdit_30->text().toUInt(nullptr, 16);
	
	PEdata->pIATDirectory->VirtualAddress = ui->lineEdit_14->text().toUInt(nullptr, 16);
	PEdata->pIATDirectory->Size = ui->lineEdit_19->text().toUInt(nullptr, 16);
	
	PEdata->pDelayImportDirectory->VirtualAddress = ui->lineEdit_11->text().toUInt(nullptr, 16);
	PEdata->pDelayImportDirectory->Size = ui->lineEdit_16->text().toUInt(nullptr, 16);
	
	PEdata->pTLSDirectory->VirtualAddress = ui->lineEdit_9->text().toUInt(nullptr, 16);
	PEdata->pTLSDirectory->Size = ui->lineEdit_22->text().toUInt(nullptr, 16);

	this->accept();
}
