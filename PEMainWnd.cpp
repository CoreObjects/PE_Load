#include "PEMainWnd.h"
#include <QFile>
#include <QFileDialog>
PEMainWnd::PEMainWnd(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::PEMainWndClass())
{
	ui->setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("PE头信息"));
}

PEMainWnd::~PEMainWnd()
{
	delete ui;
}

void PEMainWnd::ShowHeader(axyPE* PE) {
	PEInfo = PE;
	QString strEOP,strImageBase,strImageSize,strBaseOfCode,strBaseOfData,strAlignment,strFileAlignment,strMin,strNumOfSection,strTime;
	QString strHeaderSize,strC,strSum,strOptionalHeaderSize,strRVANum;
	PEInfo->ParseHeader();
	if (PEInfo->bIs32) {
		strEOP = QString::number(PEInfo->pOptionHeader32->AddressOfEntryPoint, 16).toUpper();
		strImageBase = QString::number(PEInfo->pOptionHeader32->ImageBase, 16).toUpper();
		strImageSize = QString::number(PEInfo->pOptionHeader32->SizeOfImage, 16).toUpper();
		strBaseOfCode = QString::number(PEInfo->pOptionHeader32->BaseOfCode, 16).toUpper();
		strBaseOfData = QString::number(PEInfo->pOptionHeader32->BaseOfData, 16).toUpper();
		strAlignment = QString::number(PEInfo->pOptionHeader32->SectionAlignment, 16).toUpper();
		strFileAlignment = QString::number(PEInfo->pOptionHeader32->FileAlignment, 16).toUpper();
		strMin = QString::number(PEInfo->pOptionHeader32->Subsystem, 16).toUpper();
		strNumOfSection = QString::number(PEInfo->pFileHeader->NumberOfSections, 16).toUpper();
		strTime = QString::number(PEInfo->pFileHeader->TimeDateStamp, 16).toUpper();
		strHeaderSize = QString::number(PEInfo->pOptionHeader32->SizeOfHeaders, 16).toUpper();
		strC = QString::number(PEInfo->pFileHeader->Characteristics, 16).toUpper();
		strSum = QString::number(PEInfo->pOptionHeader32->CheckSum, 16).toUpper();
		strOptionalHeaderSize = QString::number(PEInfo->pFileHeader->SizeOfOptionalHeader, 16).toUpper();
		strRVANum = QString::number(PEInfo->pOptionHeader32->NumberOfRvaAndSizes, 16).toUpper();
	}
	else {
		strEOP = QString::number(PEInfo->pOptionHeader64->AddressOfEntryPoint, 16).toUpper();
		strImageBase = QString::number(PEInfo->pOptionHeader64->ImageBase, 16).toUpper();
		strImageSize = QString::number(PEInfo->pOptionHeader64->SizeOfImage, 16).toUpper();
		strBaseOfCode = QString::number(PEInfo->pOptionHeader64->BaseOfCode, 16).toUpper();
		strBaseOfData = QString::number(PEInfo->pOptionHeader64->BaseOfCode, 16).toUpper();
		strAlignment = QString::number(PEInfo->pOptionHeader64->SectionAlignment, 16).toUpper();
		strFileAlignment = QString::number(PEInfo->pOptionHeader64->FileAlignment, 16).toUpper();
		strMin = QString::number(PEInfo->pOptionHeader64->Subsystem, 16).toUpper();
		strNumOfSection = QString::number(PEInfo->pFileHeader->NumberOfSections, 16).toUpper();
		strTime = QString::number(PEInfo->pFileHeader->TimeDateStamp, 16).toUpper();
		strHeaderSize = QString::number(PEInfo->pOptionHeader64->SizeOfHeaders, 16).toUpper();
		strC = QString::number(PEInfo->pFileHeader->Characteristics, 16).toUpper();
		strSum = QString::number(PEInfo->pOptionHeader64->CheckSum, 16).toUpper();
		strOptionalHeaderSize = QString::number(PEInfo->pFileHeader->SizeOfOptionalHeader, 16).toUpper();
		strRVANum = QString::number(PEInfo->pOptionHeader64->NumberOfRvaAndSizes, 16).toUpper();
	}
	ui->lineEdit->setText(strEOP);
	ui->lineEdit_2->setText(strImageBase);
	ui->lineEdit_3->setText(strImageSize);
	ui->lineEdit_4->setText(strBaseOfCode);
	ui->lineEdit_5->setText(strBaseOfData);
	ui->lineEdit_6->setText(strAlignment);
	ui->lineEdit_7->setText(strFileAlignment);
	ui->lineEdit_16->setText(strMin);
	ui->lineEdit_17->setText(strNumOfSection);
	ui->lineEdit_18->setText(strTime);
	ui->lineEdit_19->setText(strHeaderSize);
	ui->lineEdit_20->setText(strC);
	ui->lineEdit_21->setText(strSum);
	ui->lineEdit_22->setText(strOptionalHeaderSize);
	ui->lineEdit_23->setText(strRVANum);
}

void PEMainWnd::ShowCharacteristics() {
	wndChara = new Chara;
	int nFlag = ui->lineEdit_16->text().toInt();
	connect(this, &PEMainWnd::Flag, wndChara, &Chara::Init);
	emit Flag(nFlag);
	connect(wndChara, &Chara::CharaInfo, this, &PEMainWnd::SetCharaInfo);
	wndChara->exec();
	delete wndChara;
}

void PEMainWnd::SetCharaInfo(int nFlag) {
	ui->lineEdit_16->setText(QString::number(nFlag, 16).toUpper());
	PEInfo->pOptionHeader32->Subsystem = nFlag;
}

void PEMainWnd::slotTZZ() {
	wndtzz = new tezhenzhi;
	int nFlag = ui->lineEdit_20->text().toInt(nullptr, 16);
	connect(this, &PEMainWnd::tzz, wndtzz, &tezhenzhi::Init);
	emit tzz(nFlag);
	connect(wndtzz, &tezhenzhi::tzzInfo, this, &PEMainWnd::SetTZZInfo);
	wndtzz->exec();
	delete wndtzz;
}

void PEMainWnd::SetTZZInfo(int nFlag) {
	ui->lineEdit_20->setText(QString::number(nFlag, 16).toUpper());
	PEInfo->pFileHeader->Characteristics = nFlag;
}

void PEMainWnd::slot1Section() {
	wndSection = new SectionWND;
	connect(this, &PEMainWnd::PE, wndSection, &SectionWND::Init);
	emit PE(PEInfo);
	wndSection->exec();
	delete wndSection;
}

void PEMainWnd::dataDir() {
	wndDataDir = new DataDirWnd;
	connect(this, &PEMainWnd::PE, wndDataDir, &DataDirWnd::Init);
	emit PE(PEInfo);
	wndDataDir->exec();
	delete wndDataDir;
}

void PEMainWnd::ADDRESSCAL() {
	wndAddress = new AddressCalWND;
	connect(this, &PEMainWnd::PE, wndAddress, &AddressCalWND::Init);
	emit PE(PEInfo);
	wndAddress->exec();
	delete wndAddress;
}

void PEMainWnd::SAVEPE() {
	if (PEInfo->bIs32) {
		PEInfo->pOptionHeader32->AddressOfEntryPoint = ui->lineEdit->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader32->ImageBase = ui->lineEdit_2->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader32->BaseOfCode = ui->lineEdit_3->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader32->BaseOfData = ui->lineEdit_4->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader32->SectionAlignment = ui->lineEdit_5->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader32->FileAlignment = ui->lineEdit_6->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader32->Subsystem = ui->lineEdit_16->text().toInt(nullptr, 16);
		PEInfo->pFileHeader->NumberOfSections = ui->lineEdit_17->text().toInt(nullptr, 16);
		PEInfo->pFileHeader->TimeDateStamp = ui->lineEdit_18->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader32->SizeOfHeaders = ui->lineEdit_19->text().toInt(nullptr, 16);
		PEInfo->pFileHeader->Characteristics = ui->lineEdit_20->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader32->CheckSum = ui->lineEdit_21->text().toInt(nullptr, 16);
		PEInfo->pFileHeader->SizeOfOptionalHeader = ui->lineEdit_22->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader32->NumberOfRvaAndSizes = ui->lineEdit_20->text().toInt(nullptr, 16);
	}
	else {
		PEInfo->pOptionHeader64->AddressOfEntryPoint = ui->lineEdit->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader64->ImageBase = ui->lineEdit_2->text().toULongLong(nullptr, 16);
		PEInfo->pOptionHeader64->BaseOfCode = ui->lineEdit_3->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader64->BaseOfCode = ui->lineEdit_4->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader64->SectionAlignment = ui->lineEdit_5->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader64->FileAlignment = ui->lineEdit_6->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader64->Subsystem = ui->lineEdit_16->text().toInt(nullptr, 16);
		PEInfo->pFileHeader->NumberOfSections = ui->lineEdit_17->text().toInt(nullptr, 16);
		PEInfo->pFileHeader->TimeDateStamp = ui->lineEdit_18->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader64->SizeOfHeaders = ui->lineEdit_19->text().toInt(nullptr, 16);
		PEInfo->pFileHeader->Characteristics = ui->lineEdit_20->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader64->CheckSum = ui->lineEdit_21->text().toInt(nullptr, 16);
		PEInfo->pFileHeader->SizeOfOptionalHeader = ui->lineEdit_22->text().toInt(nullptr, 16);
		PEInfo->pOptionHeader64->NumberOfRvaAndSizes = ui->lineEdit_20->text().toInt(nullptr, 16);
	}
	QString FilePath = QFileDialog::getSaveFileName(this, "选择PE文件", ".", "*.exe *.dll");
	if (!FilePath.isEmpty()) {
		QFile PEFile(FilePath);
		BOOL bRet = PEFile.open(QIODevice::WriteOnly);
		if (bRet) {
			PEFile.write((char*)PEInfo->szBuffer, PEInfo->dwSize);
			PEFile.close();
		}
	}
	this->accept();
}
