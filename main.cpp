#include <iostream>
#include <afxwin.h>

using namespace std;

//#define  IN
//#define  OUT 
//
//int sum(IN const int a, IN const int b);
//int sum(const int a, const int b);
//
//void sum(IN const int a, IN const int b, OUT int* result);
//void sum(const int a, const int b, int* result);

//�ܼ� �������α׷� 
//int main(int argc, char** argv) {
//
//	return 0;
//}

//������ �������α׷� -> C style
//BOOL WinMain(...) {
//
//	return 0;
//}

//������ �������α׷� Ŭ������ ����ϴ� ��� 
//CWinApp : �������α׷��� ����ϴ� Ŭ���� 
class CMyApp : public CWinApp {
public:
	virtual BOOL InitInstance() override {
		//������ : ���� �Լ� 
		//cout << "hello world" << endl;
		//printf("hello world\n");
		//���� : F5  
		//���� : ctrl+F5
		TRACE("hello world\n");//�����ø� ������ : 
		TRACE("InitInstance() ȣ��� \n");

//		wchar_t p[] = L"asdasdsada";
#ifdef _UNICODE
	#define TCHAR wchar_t
	#define _T(str) L(str)
#else 
	#define TCHAR char
	#define _T(str) str
#endif 
		//����
		//TCHAR p1 = _T("Hello World"); L"Hello World";
		//char* p1 = _T("Hello World"); "Hello World";
		//wchar_t
		//���ڿ�
		//char* str
		//char str[];  -> LPSTR  //l long  p : pointer  str : string 
		//	const char* -> LPCSTR
		//	
		//	wchar_t* wstr1;
		//wchar_t wstr2[]; LPWSTR
		//const wchar_t* wstr1; , LPCWSTR

		//LPCTSTR  -> const char* , const wchar_t*
		//LPTSTR -> char*, wchar_t*
		//long 
		//LONG 
		//short SHORT 
		//unsigned short WORD
		//unsigned int DWORD 

		//AfxMessageBox(L"Hello World");
		//AfxMessageBox("Hello World");
		AfxMessageBox(_T("Hello World")); //MFC �Լ� 
		//::MessageBox(NULL, _T("Hello World"), _T("step1"), MB_OK); //Win32API template 
		//::MessageBoxW(); //Win32API -> unicode
		//::MessageBoxA(); //Win32API -> ansi code

		return TRUE;
	}

	virtual int ExitInstance() override {
		TRACE("ExitInstance() ȣ��� \n");
		return 0;
	}
};

CMyApp theApp;

/*
������ ������ �ؾ���

*/