#include <iostream>
#include <Windows.h>
using namespace std;
//#pragma comment(lib,"DllTest.lib")
typedef int(addDll)(int, int);
int main() {
	HINSTANCE HDll;
	HDll = LoadLibrary("D:\\SWCode\\DllTest\\Test\\Test\\DllTest.dll");
	if (HDll == nullptr) {
		cout<<"����dllʧ��"<<endl;
	}
	if (HDll != nullptr) {
		cout << "����dll�ɹ�" << endl;
	}
	addDll* p =(addDll*)GetProcAddress(HDll, "add");
	if (p == nullptr) {
		cout << "add������ȡʧ��" << endl;
	}
	if (p != nullptr) {
		cout << "add������ȡ�ɹ�" << endl;
	}

	cout << p(5, 3) << endl;

	FreeLibrary(HDll);
	return 0;
}