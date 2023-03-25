#include "axyPE.h"
#include<QFile>
#include <QFileDialog>

axyPE::axyPE() {
	szBuffer = nullptr;
	pOptionHeader32 = nullptr;
	pOptionHeader64 = nullptr;
	pNtHeader32 = nullptr;
	pNtHeader64 = nullptr;
	pDosHeader = nullptr;
	pFileHeader = nullptr;
	bIs32 = false;
	pSectionHeader = nullptr;
	pDataDirectory = nullptr;
	pImport = nullptr;
	pImportDirectory = nullptr;
	pExportDirectory = nullptr;
	dwImportNumber = 0;
	bIsFile = false;
}

axyPE::~axyPE() {
	if (szBuffer != nullptr) {
		delete[]szBuffer;
		szBuffer = nullptr;
	}
}

BOOL axyPE::LoadFile(const char* szPath) {

	HANDLE hFile = CreateFileA(szPath, \
		GENERIC_READ, \
		0, NULL, \
		OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE) {
		return FALSE;
	}
	DWORD dwRealRead;
	DWORD dwLength = GetFileSize(hFile, NULL);
	if (szBuffer != nullptr) {
		delete[]szBuffer;
		szBuffer = new unsigned char[dwLength] { 0 };
	}
	else {
		szBuffer = new unsigned char[dwLength] { 0 };
	}
	dwSize = dwLength;
	BOOL bRet = ::ReadFile(hFile, szBuffer, dwLength, &dwRealRead, NULL);
	CloseHandle(hFile);
	bIsFile = true;
	return bRet;
}

BOOL axyPE::LoadFile(QString qstrPath) {
	QFile PEFile(qstrPath);
	BOOL bRet = PEFile.open(QIODevice::ReadOnly);
	if (bRet) {
		QByteArray qbyteBuffer = PEFile.readAll();
		DWORD dwLength = qbyteBuffer.size();
		if (szBuffer != nullptr) {
			delete[]szBuffer;
			szBuffer = new unsigned char[dwLength] { 0 };
		}
		else {
			szBuffer = new unsigned char[dwLength] { 0 };
		}
		dwSize = dwLength;
		memcpy(szBuffer, qbyteBuffer.data(), qbyteBuffer.size());
		PEFile.close();
	}
	bIsFile = true;
	return bRet;
}

BOOL axyPE::LoadIMage(DWORD dwProcessId, LONG_PTR dwModuleBase, DWORD dwModuleSize) {
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwProcessId);
	if (hProcess == INVALID_HANDLE_VALUE) {
		return FALSE;
	}
	szBuffer = new unsigned char[dwModuleSize];
	dwSize = dwModuleSize;
	BOOL bRet = ReadProcessMemory(hProcess, (LPVOID)dwModuleBase, szBuffer, dwSize, NULL);
	CloseHandle(hProcess);
	return bRet;
}

BOOL axyPE::ParseHeader() {
	if (szBuffer != nullptr) {
		pDosHeader = (PIMAGE_DOS_HEADER)szBuffer;
		pNtHeader32 = (PIMAGE_NT_HEADERS32)(szBuffer + pDosHeader->e_lfanew);
		pFileHeader = &pNtHeader32->FileHeader;
		WORD wCharacteristics = pFileHeader->Characteristics;
		for (int i = 0; i < 16; i++) {
			bFileCharacteristics[i] = wCharacteristics % 2;
			wCharacteristics >>= 1;
		}

		if (pFileHeader->SizeOfOptionalHeader == sizeof(IMAGE_OPTIONAL_HEADER32)) {
			pOptionHeader32 = &pNtHeader32->OptionalHeader;
			pOptionHeader64 = nullptr;
			bIs32 = true;
			WORD wDllCharacteristics = pOptionHeader32->DllCharacteristics;
			for (int i = 0; i < 16; i++) {
				bDllCharacteristics[i] = wDllCharacteristics % 2;
				wDllCharacteristics >>= 1;
			}
		}
		else {
			pNtHeader64 = (PIMAGE_NT_HEADERS64)pNtHeader32;
			pNtHeader32 = nullptr;
			pOptionHeader64 = &pNtHeader64->OptionalHeader;
			pOptionHeader32 = nullptr;
			bIs32 = false;
			WORD wDllCharacteristics = pOptionHeader64->DllCharacteristics;
			for (int i = 0; i < 16; i++) {
				bDllCharacteristics[i] = wDllCharacteristics % 2;
				wDllCharacteristics >>= 1;
			}
		}
		if (bIs32) {
			pSectionHeader = (PIMAGE_SECTION_HEADER)((char*)pNtHeader32 + sizeof(IMAGE_NT_HEADERS32));
		}
		else {
			pSectionHeader = (PIMAGE_SECTION_HEADER)((char*)pNtHeader64 + sizeof(IMAGE_NT_HEADERS64));
		}
		DWORD dwSectionNumber = pFileHeader->NumberOfSections;
		for (DWORD i = 0; i < dwSectionNumber; i++) {
			std::cout << pSectionHeader[i].Name << std::endl;
		}
		if (bIs32) {
			pExportDirectory = pOptionHeader32->DataDirectory + IMAGE_DIRECTORY_ENTRY_EXPORT;
			pImportDirectory = pOptionHeader32->DataDirectory + IMAGE_DIRECTORY_ENTRY_IMPORT;
			pResouceDirectory = pOptionHeader32->DataDirectory + IMAGE_DIRECTORY_ENTRY_RESOURCE;
			pExceptionDirectory = pOptionHeader32->DataDirectory + IMAGE_DIRECTORY_ENTRY_EXCEPTION;
			pSecurityDirectory = pOptionHeader32->DataDirectory + 4;
			pRelocalDirectory = pOptionHeader32->DataDirectory + IMAGE_DIRECTORY_ENTRY_BASERELOC;
			pDebugDirectory = pOptionHeader32->DataDirectory + 6;
			pArchitectureDirectory = pOptionHeader32->DataDirectory + 7;
			pRVAofGPDirectory = pOptionHeader32->DataDirectory + 8;
			pTLSDirectory = pOptionHeader32->DataDirectory + 9;
			pLoadConfigurationDirectory = pOptionHeader32->DataDirectory + 10;
			pBoundImportDirectory = pOptionHeader32->DataDirectory + 11;
			pIATDirectory = pOptionHeader32->DataDirectory + 12;
			pDelayImportDirectory = pOptionHeader32->DataDirectory + 13;
			pCOMofGPDirectory = pOptionHeader32->DataDirectory + 14;
		}
		else {
			pExportDirectory = pOptionHeader64->DataDirectory + IMAGE_DIRECTORY_ENTRY_EXPORT;
			pImportDirectory = pOptionHeader64->DataDirectory + IMAGE_DIRECTORY_ENTRY_IMPORT;
			pResouceDirectory = pOptionHeader64->DataDirectory + IMAGE_DIRECTORY_ENTRY_RESOURCE;
			pExceptionDirectory = pOptionHeader64->DataDirectory + IMAGE_DIRECTORY_ENTRY_EXCEPTION;
			pSecurityDirectory = pOptionHeader64->DataDirectory + 4;
			pRelocalDirectory = pOptionHeader64->DataDirectory + IMAGE_DIRECTORY_ENTRY_BASERELOC;
			pDebugDirectory = pOptionHeader64->DataDirectory + 6;
			pArchitectureDirectory = pOptionHeader64->DataDirectory + 7;
			pRVAofGPDirectory = pOptionHeader64->DataDirectory + 8;
			pTLSDirectory = pOptionHeader64->DataDirectory + 9;
			pLoadConfigurationDirectory = pOptionHeader64->DataDirectory + 10;
			pBoundImportDirectory = pOptionHeader64->DataDirectory + 11;
			pIATDirectory = pOptionHeader64->DataDirectory + 12;
			pDelayImportDirectory = pOptionHeader64->DataDirectory + 13;
			pCOMofGPDirectory = pOptionHeader64->DataDirectory + 14;
		}
		return TRUE;
	}
	else {
		return FALSE;
	}
}


BOOL axyPE::ParseExportsTab() {
	pExport = (PIMAGE_EXPORT_DIRECTORY)(szBuffer + RvaToOffset(pExportDirectory->VirtualAddress, bIsFile));
	char* szName = (char*)(RvaToOffset(pExport->Name, bIsFile) + szBuffer);
	if (pExport->NumberOfFunctions == 0) {
		std::cout << "没有导出表\n";
	}
	else {
		PDWORD pEat = (PDWORD)(szBuffer + RvaToOffset(pExport->AddressOfFunctions, bIsFile));
		PWORD pEot = (PWORD)(szBuffer + RvaToOffset(pExport->AddressOfNameOrdinals, bIsFile));
		PDWORD pEnt = (PDWORD)(szBuffer + RvaToOffset(pExport->AddressOfNames, bIsFile));
		for (int i = 0; i < pExport->NumberOfFunctions; i++) {
			ExportsTab ExportTabInfo;
			ExportTabInfo.dwFunRva = pEat[pEot[i]];
			ExportTabInfo.szFunName = (char*)(szBuffer + RvaToOffset(pEnt[i], bIsFile));
			mapExportTab.insert(std::make_pair(pEot[i] + pExport->Base, ExportTabInfo));
		}
	}
	return TRUE;
}

BOOL axyPE::ParseImportsTab() {
	pImport = (PIMAGE_IMPORT_DESCRIPTOR)(RvaToOffset(pImportDirectory->VirtualAddress, bIsFile) + szBuffer);
	while (pImport->Name != NULL) {
		std::string szDllName = (char*)(RvaToOffset(pImport->Name, bIsFile) + szBuffer);
		std::vector<ImportsTab> vecFun;
		std::cout << szDllName << std::endl;
		if (bIs32) {
			PIMAGE_THUNK_DATA32 pINT = (PIMAGE_THUNK_DATA32)(RvaToOffset(pImport->OriginalFirstThunk, bIsFile) + szBuffer);
			PIMAGE_THUNK_DATA32 pIAT = (PIMAGE_THUNK_DATA32)pImport->FirstThunk;
			while (pINT->u1.Ordinal != 0) {
				if (!(pINT->u1.Ordinal & 0x80000000)) {
					PIMAGE_IMPORT_BY_NAME pName = (PIMAGE_IMPORT_BY_NAME)(RvaToOffset(pINT->u1.AddressOfData, bIsFile) + szBuffer);
					ImportsTab Import32;
					Import32.dwIAT = (DWORD)pIAT;
					Import32.szFunName = (char*)pName->Name;
					vecFun.push_back(Import32);
				}
				pINT++;
				pIAT++;
			}
		}
		else {
			PIMAGE_THUNK_DATA64 pINT = (PIMAGE_THUNK_DATA64)(RvaToOffset(pImport->OriginalFirstThunk, bIsFile) + szBuffer);
			PIMAGE_THUNK_DATA64 pIAT = (PIMAGE_THUNK_DATA64)pImport->FirstThunk;
			while (pINT->u1.Ordinal != 0) {
				if (!(pINT->u1.Ordinal & 0x8000000000000000)) {
					PIMAGE_IMPORT_BY_NAME pName = (PIMAGE_IMPORT_BY_NAME)(RvaToOffset(pINT->u1.AddressOfData, bIsFile) + szBuffer);
					ImportsTab Import32;
					Import32.dwIAT = (DWORD)pIAT;
					Import32.szFunName = (char*)pName->Name;
					vecFun.push_back(Import32);
				}
				pINT++;
				pIAT++;
			}
		}
		mapImportsTab.insert(std::make_pair(szDllName, vecFun));
		pImport++;
		dwImportNumber++;
	}
	return TRUE;
}



BOOL axyPE::ParseResouceTab() {
	const char* szResType[0x11] = {
		"NULL",
		"鼠标指针",
		"位图",
		"图标",
		"菜单",
		"对话框",
		"字符串列表",
		"字体目录",
		"字体",
		"快捷键",
		"非格式化资源",
		"消息列表",
		"鼠标指针组",
		"NULL",
		"图标组",
		"NULL",
		"版本信息",
	};
	PIMAGE_RESOURCE_DIRECTORY pFirst = (PIMAGE_RESOURCE_DIRECTORY)(szBuffer + RvaToOffset(pResouceDirectory->VirtualAddress, bIsFile));
	DWORD dwResNum = pFirst->NumberOfIdEntries + pFirst->NumberOfNamedEntries;
	int a = sizeof(PIMAGE_RESOURCE_DIRECTORY_ENTRY);
	PIMAGE_RESOURCE_DIRECTORY_ENTRY pFirstEntry = (PIMAGE_RESOURCE_DIRECTORY_ENTRY)(pFirst + 1);
	std::cout << "根目录名称条目：" << pFirst->NumberOfNamedEntries << std::endl;
	std::cout << "根目录ID条目：" << pFirst->NumberOfIdEntries << std::endl;
	for (int i = 0; i < dwResNum; i++) {
		if (pFirstEntry[i].NameIsString) {
			PIMAGE_RESOURCE_DIR_STRING_U ResFirstName = (PIMAGE_RESOURCE_DIR_STRING_U)((char*)pFirst + pFirstEntry[i].NameOffset);
			WCHAR* wcsName = new WCHAR[ResFirstName->Length + 1]{ 0 };
			memcpy(wcsName, ResFirstName->NameString, 2 * ResFirstName->Length);
			std::cout << "根目录名称：";
			std::wcout << wcsName << std::endl;
			delete[] wcsName;
		}
		else {
			if (pFirstEntry[i].Id < 0x11) {
				std::cout << "根目录的资源类型" << szResType[pFirstEntry[i].Id] << std::endl;
			}
			else {
				std::cout << "根目录ID：" << pFirstEntry[i].Id << std::endl;
			}
		}
		if (pFirstEntry[i].DataIsDirectory) {
			PIMAGE_RESOURCE_DIRECTORY pSecond = (PIMAGE_RESOURCE_DIRECTORY)((char*)pFirst + pFirstEntry[i].OffsetToDirectory);
			DWORD dwSecondCount = pSecond->NumberOfIdEntries + pSecond->NumberOfNamedEntries;
			PIMAGE_RESOURCE_DIRECTORY_ENTRY pSecondEntry = (PIMAGE_RESOURCE_DIRECTORY_ENTRY)(pSecond + 1);
			std::cout << "子目录名称条目：" << pSecond->NumberOfNamedEntries << std::endl;
			std::cout << "子目录ID条目：" << pSecond->NumberOfIdEntries << std::endl;
			for (int j = 0; j < dwSecondCount; j++) {
				if (pSecondEntry[j].NameIsString) {
					PIMAGE_RESOURCE_DIR_STRING_U ResSecondName = (PIMAGE_RESOURCE_DIR_STRING_U)((char*)pSecond + pSecondEntry[i].NameOffset);
					WCHAR* wcsName = new WCHAR[ResSecondName->Length + 1]{ 0 };
					memcpy(wcsName, ResSecondName->NameString, 2 * ResSecondName->Length);
					std::cout << "子目录名称：";
					std::wcout << wcsName << std::endl;
					delete[] wcsName;
				}
				else {
					if (pSecondEntry[j].Id < 0x11) {
						std::cout << "子目录的资源类型:" << szResType[pSecondEntry[j].Id] << std::endl;
					}
					else {
						std::cout << "子目录ID：" << pSecondEntry[j].Id << std::endl;
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
							std::cout << "资源Rva:" << std::hex << pResData->OffsetToData << std::endl;
							std::cout << "大小:" << std::dec << pResData->Size << std::endl;
						}

					}
				}
			}
		}

	}
	return TRUE;
}

BOOL axyPE::ParseRelocalTab() {
	pRelocal = (PIMAGE_BASE_RELOCATION)(szBuffer + RvaToOffset(pRelocalDirectory->VirtualAddress, bIsFile));
	while (pRelocal->SizeOfBlock != 0) {
		DWORD dwItemCount = (pRelocal->SizeOfBlock - sizeof(PIMAGE_BASE_RELOCATION)) / sizeof(DWORD);
		PTypeOffset pTypeoffset = (PTypeOffset)(pRelocal + 1);
		for (int i = 0; i < dwItemCount; i++) {
			DWORD dwRva = pRelocal->VirtualAddress + pTypeoffset[i].Offset;
			DWORD dwType = pTypeoffset[i].Type;
			mapRelocalTab.insert(std::make_pair(dwRva, dwType));
		}
		pRelocal = (PIMAGE_BASE_RELOCATION)((char*)pRelocal + pRelocal->SizeOfBlock);
	}
	return TRUE;
}

DWORD axyPE::RvaToOffset(DWORD dwRva, bool bIsFile) {
	//ParseHeader();
	if (bIsFile)
		for (int i = 0; i < pFileHeader->NumberOfSections; i++)
			if (dwRva >= pSectionHeader[i].VirtualAddress && dwRva <= pSectionHeader[i].VirtualAddress + pSectionHeader[i].Misc.VirtualSize)
				return dwRva - pSectionHeader[i].VirtualAddress + pSectionHeader[i].PointerToRawData;
	return dwRva;
}

std::string axyPE::GetSectionName(DWORD dwRva) {
	for (int i = 0; i < pFileHeader->NumberOfSections; i++)
		if (dwRva >= pSectionHeader[i].VirtualAddress && dwRva <= pSectionHeader[i].VirtualAddress + pSectionHeader[i].Misc.VirtualSize) {
			char szName[9]{ 0 };
			memcpy(szName, pSectionHeader[i].Name, 8);
			return szName;
		}
}

