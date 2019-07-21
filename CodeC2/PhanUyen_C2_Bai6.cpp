#include <iostream>
#include <conio.h>
using namespace std;


//Khai bao cau truc stack
#define max 100
int a[max];
int sp;
//Khoi tao stack rong
void Init(int a[], int &sp)
{
	sp = -1;
}
//Kiem tra stack rong
int Isempty(int a[], int &sp)
{
	if (sp == -1)
		return 1;
	else
		return 0;
}
// kiem tra stack day
int Isfull(int a[], int &sp)
{
	if (sp == max - 1)
		return 1;
	else
		return 0;
}
//Them 1 phan tu vao stack
int Push(int a[], int &sp, int n)
{
	if (sp < max - 1)
	{
		a[++sp] = n;
		return 1;
	}
	return 0;
}
//Xoa 1 phan tu trong stack
int Pop(int a[], int &sp, int n)
{
	if (sp != -1)
	{
		n = a[sp--];
		return 1;
	}
	return 0;
}
void Output(int a[], int &sp)
{
	for (int i = 0; i < sp + 1; i++)
		cout << a[i] << "\t";
	cout << endl;
}
int Nhiphan(int x)
{
	int a;
	if (x == 0)
		return 0;
	else
	{
		a = x % 2;
		return Nhiphan(x / 2) * 10 + a;
	}
}
int main()
{
	int a[max];
	int choose, sp, kq, n;
	system("cls");
  cout << "-------- BAI 6, CHUONG 2, DSLK --------" << endl;
	cout << "1. Khoi tao danh sach rong\n";
	cout << "2. Kiem tra stack rong\n";
	cout << "3. Kiem tra stack day\n";
	cout << "4. Them 1 phan tu vao stack\n";
	cout << "5. Xoa 1 phan tu trong stack\n";
	cout << "6. Xuat stack ra man hinh\n";
	cout << "7. Doi 1 gia tri trong stack sang he nhi phan\n";
	cout << "8. Thoat\n";
	do {
		cout << "Nhap so thu tu thao tac muon thuc hien: ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			init(a, sp);
			cout << "Nhoi tao danh sach thanh cong!\n";
			break;
		case 2:
			if (Isempty(a, sp) == 1)
				cout << "Stack rong\n";
			else
				cout << "Stack khong rong\n";
			break;
		case 3:
			if (Isfull(a, sp) == 1)
				cout << "Stack da day\n";
			else
				cout << "Stack hien tai chua day\n";
			break;
		case 4:
			cout << "nhap gia tri can them: ";
			cin >> n;
			kq = Push(a, sp, n);
			cout << "stack sau khi them la: ";
			Output(a, sp);
			break;
		case 5:
			cout << "Nhap gia tri can xoa: ";
			cin >> n;
			kq = Pop(a, sp, n);
			cout << "Stack sau khi lay " << n << " ra: ";
			Output(a, sp);
			break;
		case 6:
			if (Isempty(a, sp) == 1)
				cout << "Stack khong co\n";
			else
				Output(a, sp);
			break;
		case 7:
			cout << "Mhap gia tri can chuyen doi trong stack: ";
			cin >> n;
			cout << "Gia tri " << n << " trong stack sang he nhi phan la: " << Nhiphan(n) << endl;
			break;
		case 8:
			cout << "Ban chon thoat!\n";
			break;
		default:
			break;
		}
	} while (choose != 8);
	system("pause");
	return 0;
}