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

//콘솔 응용프로그램 
//int main(int argc, char** argv) {
//
//	return 0;
//}

//윈도우 응용프로그램 -> C style
//BOOL WinMain(...) {
//
//	return 0;
//}

//윈도우 응용프로그램 클래스로 사용하는 경우 
//CWinApp : 응용프로그램을 담당하는 클래스 
class CMyApp : public CWinApp {
public:
	virtual BOOL InitInstance() override {
		//진입점 : 시작 함수 
		//cout << "hello world" << endl;
		//printf("hello world\n");
		//실행 : F5  
		//실행 : ctrl+F5
		TRACE("hello world\n");//디버깅시만 동작함 : 
		TRACE("InitInstance() 호출됨 \n");

//		wchar_t p[] = L"asdasdsada";
#ifdef _UNICODE
	#define TCHAR wchar_t
	#define _T(str) L(str)
#else 
	#define TCHAR char
	#define _T(str) str
#endif 
		//문자
		//TCHAR p1 = _T("Hello World"); L"Hello World";
		//char* p1 = _T("Hello World"); "Hello World";
		//wchar_t
		//문자열
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
		AfxMessageBox(_T("Hello World")); //MFC 함수 
		//::MessageBox(NULL, _T("Hello World"), _T("step1"), MB_OK); //Win32API template 
		//::MessageBoxW(); //Win32API -> unicode
		//::MessageBoxA(); //Win32API -> ansi code

		return TRUE;
	}

	virtual int ExitInstance() override {
		TRACE("ExitInstance() 호출됨 \n");
		return 0;
	}
};

CMyApp theApp;

/*
설정을 별도로 해야함

*/