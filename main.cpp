#include <iostream>
#include <windows.h>
#pragma hdrstop
#pragma argsused
using namespace std;
typedef BOOL (WINAPI *SETCONSOLEFONT)(HANDLE, DWORD);
SETCONSOLEFONT SetConsoleFont;
int main(){
	int a, b, c, d, p ;
	system("mode con cols=50 lines=15");
	HMODULE hmod = GetModuleHandleA("KERNEL32.DLL");
	SetConsoleFont = (SETCONSOLEFONT)GetProcAddress(hmod, "SetConsoleFont");
	if (!SetConsoleFont) { cout << "error\n"; exit(1); }
	SetConsoleFont(GetStdHandle(STD_OUTPUT_HANDLE),9);
	system("cls");
	const int color = system("color 1f");
	setlocale(LC_ALL, "RUS");
	system("title ����������� �� C++");
	cout << "����� ���������� � ������� ����������� �� C++" << endl;
	cout << "�������� �������:" << endl;
	cout << "1 - ��������" << endl;
	cout << "2 - ���������" << endl;
	cout << "3 - ���������" << endl;
	cout << "4 - �������" << endl;
	cout << "5 - ���������� � �������" << endl;
	cout << "6 - ���������� ������" << endl;
	cout << "7 - �������� � ����������" << endl;
	cout << "8 - �����" << endl;
	cout << " " << endl;
	cout << "������� ����� �������: " << ends;
	cin >> d;
	if (d == 1) {
		system("cls");
		cout << "�� ������� ��������" << endl;
		cout << "������� ����� � �������� ����� ��������� ��������" << endl;
		cout << " " << endl;
		double a, b;
		cout << "������ �����: ";
		cin >> a;
		cout << "������ �����: ";
		cin >> b;
		cout << "�����: " << (a + b) << endl;
		system("pause");
		main();
	}
	if (d == 2) {
		system("cls");
		cout << "�� ������� ���������" << endl;
		cout << "������� ����� � �������� ����� ��������� ��������" << endl;
		cout << " " << endl;
		double a, b;
		cout << "������ �����: ";
		cin >> a;
		cout << "������ �����: ";
		cin >> b;
		cout << "�����: " << (a - b) << endl;
		system("pause");
		main();
	}
	if (d == 3) {
		system("cls");
		cout << "�� ������� ���������" << endl;
		cout << "������� ����� � �������� ����� ��������� ��������" << endl;
		cout << " " << endl;
		double a, b;
		cout << "������ �����: ";
		cin >> a;
		cout << "������ �����: ";
		cin >> b;
		cout << "�����: " << (a * b) << endl;
		system("pause");
		main();
	}
	if (d == 4) {
		system("cls");
		cout << "�� ������� �������" << endl;
		cout << "������� ����� � �������� ����� ��������� ��������" << endl;
		cout << " " << endl;
		double a, b;
		cout << "������ �����: ";
		cin >> a;
		cout << "������ �����: ";
		cin >> b;
		if (b == 0) {
			system("cls");
			cout << "�� ���� ������ ������!" << endl;
			system("pause");
			main();
		}
		else {
			cout << "�����: " << (a / b) << endl;
			system("pause");
			main();
		}
	}
	if (d == 5) {
		system("cls");
		cout << "�� ������� ���������� � �������" << endl;
		cout << "������� ����� � �������� ����� ��������� ��������" << endl;
		cout << " " << endl;
		double a, b;
		cout << "�����: ";
		cin >> a;
		cout << "�������: ";
		cin >> b;
		cout << "�����: " << pow(a, b) << endl;
		system("pause");
		main();
	}
	if (d == 6) {
		system("cls");
		cout << "�� ������� ���������� ������" << endl;
		cout << "������� ����� � �������� ����� ��������� ��������" << endl;
		cout << " " << endl;
		double a, b;
		cout << "�������� �����: ";
		cin >> a;
		cout << "�����: " << sqrt(a) << endl;
		system("pause");
		main();
	}
	if (d == 7) {
		system("cls");
		cout << "�� ������� ������� � ����������" << endl;
		cout << "������� ����� �������" << endl;
		cout << "1 - ��������" << endl;
		cout << "2 - ���������" << endl;
		cout << "������� ����� �������: " << ends;
		cin >> p;
		if (p == 1) {
			system("cls");
			cout << "�� ������� ������� � ����������: ��������" << endl;
			cout << "������� ����� � �������� ����� ��������� ��������" << endl;
			cout << " " << endl;
			double a, b;
			cout << "�����: ";
			cin >> a;
			cout << "��������: ";
			cin >> b;
			cout << "�����: " << (a + (a / 100 * b)) << endl;
			system("pause");
			system("cls");
			main();
		}
		if (p == 2) {
			system("cls");
			cout << "�� ������� ������� � ����������: ���������" << endl;
			cout << "������� ����� � �������� ����� ��������� ��������" << endl;
			cout << " " << endl;
			cout << " " << endl;
			double a, b;
			cout << "�����: ";
			cin >> a;
			cout << "��������: ";
			cin >> b;
			cout << "�����: " << (a - (a / 100 * b)) << endl;
			system("pause");
			system("cls");
			main();
		}
	}
	if (d == 8) {
		exit(0);
	}
	else {
		system("cls");
		cout << "����� ������� �� ����������!" << endl;
		system("pause");
		main();
	}
	system("cls");
	return 0;

}