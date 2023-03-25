#include "ResTabWND.h"
#include "WindowsAxy.h"
ResTabWND::ResTabWND(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::ResTabWNDClass())
{
	ui->setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("��Դ��"));
}

ResTabWND::~ResTabWND()
{
	delete ui;
}

void ResTabWND::ShowRes(axyPE* pPE) {
	const char* szResType[0x11] = {
		"NULL",
		"���ָ��",
		"λͼ",
		"ͼ��",
		"�˵�",
		"�Ի���",
		"�ַ����б�",
		"����Ŀ¼",
		"����",
		"��ݼ�",
		"�Ǹ�ʽ����Դ",
		"��Ϣ�б�",
		"���ָ����",
		"NULL",
		"ͼ����",
		"NULL",
		"�汾��Ϣ",
	};
	PIMAGE_RESOURCE_DIRECTORY pFirst = (PIMAGE_RESOURCE_DIRECTORY)(pPE->szBuffer + pPE->RvaToOffset(pPE->pResouceDirectory->VirtualAddress, pPE->bIsFile));
	DWORD dwResNum = pFirst->NumberOfIdEntries + pFirst->NumberOfNamedEntries;
	int a = sizeof(PIMAGE_RESOURCE_DIRECTORY_ENTRY);
	PIMAGE_RESOURCE_DIRECTORY_ENTRY pFirstEntry = (PIMAGE_RESOURCE_DIRECTORY_ENTRY)(pFirst + 1);
	ui->lineEdit->setText(QString::number(pFirst->NumberOfNamedEntries, 16).toUpper());
	ui->lineEdit_2->setText(QString::number(pFirst->NumberOfIdEntries, 16).toUpper());
	for (int i = 0; i < dwResNum; i++) {
		QTreeWidgetItem* rootItem;
		if (pFirstEntry[i].NameIsString) {
			PIMAGE_RESOURCE_DIR_STRING_U ResFirstName = (PIMAGE_RESOURCE_DIR_STRING_U)((char*)pFirst + pFirstEntry[i].NameOffset);
			WCHAR* wcsName = new WCHAR[ResFirstName->Length + 1]{ 0 };
			memcpy(wcsName, ResFirstName->NameString, 2 * ResFirstName->Length);
			rootItem = new QTreeWidgetItem(ui->treeWidget);
			rootItem->setText(0, QString::fromWCharArray(wcsName));
			delete[] wcsName;
		}
		else {
			if (pFirstEntry[i].Id < 0x11) {
				rootItem = new QTreeWidgetItem(ui->treeWidget);
				rootItem->setText(0, QString::fromLocal8Bit(szResType[pFirstEntry[i].Id]));
			}
			else {
				std::cout << "��Ŀ¼ID��" << pFirstEntry[i].Id << std::endl;
				rootItem = new QTreeWidgetItem(ui->treeWidget);
				rootItem->setText(0, QString::number(pFirstEntry[i].Id));
			}
		}
		if (pFirstEntry[i].DataIsDirectory) {
			PIMAGE_RESOURCE_DIRECTORY pSecond = (PIMAGE_RESOURCE_DIRECTORY)((char*)pFirst + pFirstEntry[i].OffsetToDirectory);
			DWORD dwSecondCount = pSecond->NumberOfIdEntries + pSecond->NumberOfNamedEntries;
			PIMAGE_RESOURCE_DIRECTORY_ENTRY pSecondEntry = (PIMAGE_RESOURCE_DIRECTORY_ENTRY)(pSecond + 1);
//			std::cout << "��Ŀ¼������Ŀ��" << pSecond->NumberOfNamedEntries << std::endl;
//			std::cout << "��Ŀ¼ID��Ŀ��" << pSecond->NumberOfIdEntries << std::endl;
			for (int j = 0; j < dwSecondCount; j++) {
				if (pSecondEntry[j].NameIsString) {
					PIMAGE_RESOURCE_DIR_STRING_U ResSecondName = (PIMAGE_RESOURCE_DIR_STRING_U)((char*)pSecond + pSecondEntry[i].NameOffset);
					WCHAR* wcsName = new WCHAR[ResSecondName->Length + 1]{ 0 };
					memcpy(wcsName, ResSecondName->NameString, 2 * ResSecondName->Length);
					std::cout << "��Ŀ¼���ƣ�";
					std::wcout << wcsName << std::endl;
					QTreeWidgetItem* subItem = new QTreeWidgetItem(rootItem);
					subItem->setText(0, QString::fromWCharArray(wcsName));
					delete[] wcsName;
				}
				else {
					if (pSecondEntry[j].Id < 0x11) {
						std::cout << "��Ŀ¼����Դ����:" << szResType[pSecondEntry[j].Id] << std::endl;
						QTreeWidgetItem* subItem = new QTreeWidgetItem(rootItem);
						subItem->setText(0, QString::fromLocal8Bit(szResType[pSecondEntry[j].Id]));
					}
					else {
						std::cout << "��Ŀ¼ID��" << pSecondEntry[j].Id << std::endl;
						QTreeWidgetItem* subItem = new QTreeWidgetItem(rootItem);
						subItem->setText(0, QString::number(pSecondEntry[j].Id));
					}
				}
				if (pSecondEntry[j].DataIsDirectory) {
					PIMAGE_RESOURCE_DIRECTORY pThird = (PIMAGE_RESOURCE_DIRECTORY)((char*)pFirst + pSecondEntry[j].OffsetToDirectory);
					PIMAGE_RESOURCE_DIRECTORY_ENTRY pThirdEntry = (PIMAGE_RESOURCE_DIRECTORY_ENTRY)(pThird + 1);
					DWORD dwThirdCount = pThird->NumberOfIdEntries + pThird->NumberOfNamedEntries;
					for (int k = 0; k < dwThirdCount; k++) {
						if (pThirdEntry->DataIsDirectory) {
							continue;
						}
						else {
							PIMAGE_RESOURCE_DATA_ENTRY pResData = (PIMAGE_RESOURCE_DATA_ENTRY)((char*)pFirst + pThirdEntry->OffsetToData);
							std::cout << "��ԴRva:" << std::hex << pResData->OffsetToData << std::endl;
							std::cout << "��С:" << std::dec << pResData->Size << std::endl;
						}

					}
				}
			}
		}

	}
}

void ResTabWND::Init(axyPE* pPE) {
	pPE->ParseHeader();
	pPE->ParseResouceTab();
	ppe = pPE;
	ui->treeWidget->headerItem()->setText(0, QString::fromLocal8Bit("��ԴĿ¼"));
	ShowRes(pPE);
// 	QTreeWidgetItem* rootItem1 = new QTreeWidgetItem(ui->treeWidget);
// 	rootItem1->setText(0, "�˵�1");
// 	QTreeWidgetItem* childItem1_1 = new QTreeWidgetItem(rootItem1);
// 	childItem1_1->setText(0, "�Ӳ˵�1");
// 	QTreeWidgetItem* childItem1_2 = new QTreeWidgetItem(rootItem1);
// 	childItem1_2->setText(0, "�Ӳ˵�2");
}

void ResTabWND::slotClicked(QTreeWidgetItem* item, int column) {
	QString stritem = item->text(0);
	const char* szResType[0x11] = {
		"NULL",
		"���ָ��",
		"λͼ",
		"ͼ��",
		"�˵�",
		"�Ի���",
		"�ַ����б�",
		"����Ŀ¼",
		"����",
		"��ݼ�",
		"�Ǹ�ʽ����Դ",
		"��Ϣ�б�",
		"���ָ����",
		"NULL",
		"ͼ����",
		"NULL",
		"�汾��Ϣ",
	};
	PIMAGE_RESOURCE_DIRECTORY pFirst = (PIMAGE_RESOURCE_DIRECTORY)(ppe->szBuffer + ppe->RvaToOffset(ppe->pResouceDirectory->VirtualAddress, ppe->bIsFile));
	DWORD dwResNum = pFirst->NumberOfIdEntries + pFirst->NumberOfNamedEntries;
	int a = sizeof(PIMAGE_RESOURCE_DIRECTORY_ENTRY);
	PIMAGE_RESOURCE_DIRECTORY_ENTRY pFirstEntry = (PIMAGE_RESOURCE_DIRECTORY_ENTRY)(pFirst + 1);
	ui->lineEdit->setText(QString::number(pFirst->NumberOfNamedEntries, 16).toUpper());
	ui->lineEdit_2->setText(QString::number(pFirst->NumberOfIdEntries, 16).toUpper());
	for (int i = 0; i < dwResNum; i++) {
		if (pFirstEntry[i].NameIsString) {
			PIMAGE_RESOURCE_DIR_STRING_U ResFirstName = (PIMAGE_RESOURCE_DIR_STRING_U)((char*)pFirst + pFirstEntry[i].NameOffset);
			WCHAR* wcsName = new WCHAR[ResFirstName->Length + 1]{ 0 };
			memcpy(wcsName, ResFirstName->NameString, 2 * ResFirstName->Length);
			if (stritem == QString::fromWCharArray(wcsName))
			{
				delete[] wcsName;
				PIMAGE_RESOURCE_DIRECTORY pSecond = (PIMAGE_RESOURCE_DIRECTORY)((char*)pFirst + pFirstEntry[i].OffsetToDirectory);
				ui->lineEdit_3->setText(QString::number(pSecond->NumberOfNamedEntries, 16).toUpper());
				ui->lineEdit_4->setText(QString::number(pSecond->NumberOfIdEntries, 16).toUpper());
				return;
			}	
		}
		else {
			if (pFirstEntry[i].Id < 0x11) {
				if (stritem == QString::fromLocal8Bit(szResType[pFirstEntry[i].Id])) {
					PIMAGE_RESOURCE_DIRECTORY pSecond = (PIMAGE_RESOURCE_DIRECTORY)((char*)pFirst + pFirstEntry[i].OffsetToDirectory);
					ui->lineEdit_3->setText(QString::number(pSecond->NumberOfNamedEntries, 16).toUpper());
					ui->lineEdit_4->setText(QString::number(pSecond->NumberOfIdEntries, 16).toUpper());
					return;
				}
			}
			else {
				if (stritem == QString::number(pFirstEntry[i].Id)) {
					PIMAGE_RESOURCE_DIRECTORY pSecond = (PIMAGE_RESOURCE_DIRECTORY)((char*)pFirst + pFirstEntry[i].OffsetToDirectory);
					ui->lineEdit_3->setText(QString::number(pSecond->NumberOfNamedEntries, 16).toUpper());
					ui->lineEdit_4->setText(QString::number(pSecond->NumberOfIdEntries, 16).toUpper());
					return;
				}
			}
		}
		if (pFirstEntry[i].DataIsDirectory) {
			PIMAGE_RESOURCE_DIRECTORY pSecond = (PIMAGE_RESOURCE_DIRECTORY)((char*)pFirst + pFirstEntry[i].OffsetToDirectory);
			DWORD dwSecondCount = pSecond->NumberOfIdEntries + pSecond->NumberOfNamedEntries;
			PIMAGE_RESOURCE_DIRECTORY_ENTRY pSecondEntry = (PIMAGE_RESOURCE_DIRECTORY_ENTRY)(pSecond + 1);
			//			std::cout << "��Ŀ¼������Ŀ��" << pSecond->NumberOfNamedEntries << std::endl;
			//			std::cout << "��Ŀ¼ID��Ŀ��" << pSecond->NumberOfIdEntries << std::endl;
			for (int j = 0; j < dwSecondCount; j++) {
				if (pSecondEntry[j].NameIsString) {
					PIMAGE_RESOURCE_DIR_STRING_U ResSecondName = (PIMAGE_RESOURCE_DIR_STRING_U)((char*)pSecond + pSecondEntry[i].NameOffset);
					WCHAR* wcsName = new WCHAR[ResSecondName->Length + 1]{ 0 };
					memcpy(wcsName, ResSecondName->NameString, 2 * ResSecondName->Length);
					std::cout << "��Ŀ¼���ƣ�";
					std::wcout << wcsName << std::endl;
					if (stritem == QString::fromWCharArray(wcsName)) {
						PIMAGE_RESOURCE_DIRECTORY pThird = (PIMAGE_RESOURCE_DIRECTORY)((char*)pFirst + pSecondEntry[j].OffsetToDirectory);
						PIMAGE_RESOURCE_DIRECTORY_ENTRY pThirdEntry = (PIMAGE_RESOURCE_DIRECTORY_ENTRY)(pThird + 1);
						PIMAGE_RESOURCE_DATA_ENTRY pResData = (PIMAGE_RESOURCE_DATA_ENTRY)((char*)pFirst + pThirdEntry->OffsetToData);
						ui->lineEdit_5->setText(QString::number(pResData->OffsetToData, 16));
						ui->lineEdit_6->setText(QString::number(ppe->RvaToOffset(pResData->OffsetToData, ppe->bIsFile), 16));
						ui->lineEdit_7->setText(QString::number(pResData->Size, 16));
						delete[] wcsName;
						return;
					}
				}
				else {
					if (pSecondEntry[j].Id < 0x11) {
						if (stritem == QString::fromLocal8Bit(szResType[pSecondEntry[j].Id])) {
							PIMAGE_RESOURCE_DIRECTORY pThird = (PIMAGE_RESOURCE_DIRECTORY)((char*)pFirst + pSecondEntry[j].OffsetToDirectory);
							PIMAGE_RESOURCE_DIRECTORY_ENTRY pThirdEntry = (PIMAGE_RESOURCE_DIRECTORY_ENTRY)(pThird + 1);
							PIMAGE_RESOURCE_DATA_ENTRY pResData = (PIMAGE_RESOURCE_DATA_ENTRY)((char*)pFirst + pThirdEntry->OffsetToData);
							ui->lineEdit_5->setText(QString::number(pResData->OffsetToData, 16));
							ui->lineEdit_6->setText(QString::number(ppe->RvaToOffset(pResData->OffsetToData, ppe->bIsFile), 16));
							ui->lineEdit_7->setText(QString::number(pResData->Size, 16));
							return;
						}
					}
					else {
						if (stritem == QString::number(pSecondEntry[j].Id)) {
							PIMAGE_RESOURCE_DIRECTORY pThird = (PIMAGE_RESOURCE_DIRECTORY)((char*)pFirst + pSecondEntry[j].OffsetToDirectory);
							PIMAGE_RESOURCE_DIRECTORY_ENTRY pThirdEntry = (PIMAGE_RESOURCE_DIRECTORY_ENTRY)(pThird + 1);
							PIMAGE_RESOURCE_DATA_ENTRY pResData = (PIMAGE_RESOURCE_DATA_ENTRY)((char*)pFirst + pThirdEntry->OffsetToData);
							ui->lineEdit_5->setText(QString::number(pResData->OffsetToData, 16));
							ui->lineEdit_6->setText(QString::number(ppe->RvaToOffset(pResData->OffsetToData, ppe->bIsFile), 16));
							ui->lineEdit_7->setText(QString::number(pResData->Size, 16));
							return;
						}
					}
				}
				
			}
		}

	}
}
