#pragma once
#include <vector>
#include <unordered_map>
#include <map>
#include <string>
#include <windows.h>
#include <bitset>
#include <QString>
#include <iostream>
typedef struct _Imports {
	DWORD dwIAT;
	std::string szFunName;
}ImportsTab;
typedef struct _Exports {
	std::string szFunName;
	DWORD dwFunRva;
}ExportsTab;
typedef struct __TypeOffset {
	WORD Offset : 12;
	WORD Type : 4;
} *PTypeOffset, TypeOffset;

class axyPE {
public:
	axyPE();
	~axyPE();
	BOOL LoadFile(const char* szPath);
	BOOL LoadFile(QString qstrPath);
	BOOL LoadIMage(DWORD dwProcessId, LONG_PTR dwModuleBase, DWORD dwModuleSize);
	BOOL ParseHeader();
	BOOL ParseExportsTab();
	BOOL ParseImportsTab();
	BOOL ParseResouceTab();
	BOOL ParseRelocalTab();
	DWORD RvaToOffset(DWORD dwRva, bool bIsFile);
	std::string GetSectionName(DWORD dwRva);
public:
	DWORD dwSize;
	std::unordered_map<std::string, std::vector<ImportsTab>> mapImportsTab;
	std::map<DWORD/*RVA*/, DWORD/*Tpye*/> mapRelocalTab;
	std::map<WORD, ExportsTab> mapExportTab;
	std::bitset<16> bFileCharacteristics;
	std::bitset<16> bDllCharacteristics;
	DWORD dwImportNumber;
	bool bIs32;
	bool bIsFile;
	PIMAGE_DOS_HEADER pDosHeader;
	PIMAGE_NT_HEADERS32 pNtHeader32;
	PIMAGE_NT_HEADERS64 pNtHeader64;
	PIMAGE_FILE_HEADER pFileHeader;
	PIMAGE_OPTIONAL_HEADER32 pOptionHeader32;
	PIMAGE_OPTIONAL_HEADER64 pOptionHeader64;
	PIMAGE_SECTION_HEADER pSectionHeader;
	PIMAGE_DATA_DIRECTORY pDataDirectory;
	PIMAGE_DATA_DIRECTORY pExportDirectory;
	PIMAGE_DATA_DIRECTORY pImportDirectory;
	PIMAGE_DATA_DIRECTORY pResouceDirectory;
	PIMAGE_DATA_DIRECTORY pRelocalDirectory;
	PIMAGE_DATA_DIRECTORY pExceptionDirectory;
	PIMAGE_DATA_DIRECTORY pSecurityDirectory;
	PIMAGE_DATA_DIRECTORY pDebugDirectory;
	PIMAGE_DATA_DIRECTORY pArchitectureDirectory;
	PIMAGE_DATA_DIRECTORY pRVAofGPDirectory;
	PIMAGE_DATA_DIRECTORY pTLSDirectory;
	PIMAGE_DATA_DIRECTORY pLoadConfigurationDirectory;
	PIMAGE_DATA_DIRECTORY pBoundImportDirectory;
	PIMAGE_DATA_DIRECTORY pIATDirectory;
	PIMAGE_DATA_DIRECTORY pDelayImportDirectory;
	PIMAGE_DATA_DIRECTORY pCOMofGPDirectory;
	PIMAGE_IMPORT_DESCRIPTOR pImport;
	PIMAGE_EXPORT_DIRECTORY pExport;
	PIMAGE_BASE_RELOCATION pRelocal;
	unsigned char* szBuffer;
};

// #define IMAGE_DIRECTORY_ENTRY_EXPORT          0   // Export Directory
// #define IMAGE_DIRECTORY_ENTRY_IMPORT          1   // Import Directory
// #define IMAGE_DIRECTORY_ENTRY_RESOURCE        2   // Resource Directory
// #define IMAGE_DIRECTORY_ENTRY_EXCEPTION       3   // Exception Directory
// #define IMAGE_DIRECTORY_ENTRY_SECURITY        4   // Security Directory
// #define IMAGE_DIRECTORY_ENTRY_BASERELOC       5   // Base Relocation Table
// #define IMAGE_DIRECTORY_ENTRY_DEBUG           6   // Debug Directory
// //      IMAGE_DIRECTORY_ENTRY_COPYRIGHT       7   // (X86 usage)
// #define IMAGE_DIRECTORY_ENTRY_ARCHITECTURE    7   // Architecture Specific Data
// #define IMAGE_DIRECTORY_ENTRY_GLOBALPTR       8   // RVA of GP
// #define IMAGE_DIRECTORY_ENTRY_TLS             9   // TLS Directory
// #define IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG    10   // Load Configuration Directory
// #define IMAGE_DIRECTORY_ENTRY_BOUND_IMPORT   11   // Bound Import Directory in headers
// #define IMAGE_DIRECTORY_ENTRY_IAT            12   // Import Address Table
// #define IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT   13   // Delay Load Import Descriptors
// #define IMAGE_DIRECTORY_ENTRY_COM_DESCRIPTOR 14   // COM Runtime descriptor
