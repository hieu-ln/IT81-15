//# include <iostream>
//using namespace std;
//# define MAX 100
//int a[MAX];
//int sp;
//void init(int a[], int &sp)
//{
//	sp = -1;
//}
//int isEmpty(int a[], int sp)
//{
//	if (sp==-1)
//		return 1;
//	return 0;
//}//
//int isFull(int a[], int sp)
//{
//	if (sp== MAX -1)
//		return 1;
//	return 0;
//}//int Push(int a[], int &sp, int x)
//{
//	if (sp< MAX -1)
//	{
//		a[++sp] = x;
//		return 1;
//	}
//	return 0;
//}//int Pop(int a[], int &sp, int &x)
//{
//	if (sp!=-1) 
//	{
//		x = a[sp--];
//		return 1;
//	}
//	return 0;
//}
//void output (int a[], int sp)
//{
//	for (int i = 0; i < sp+1; i++)
//		cout << a[i] << "\t";
//	cout << endl;
//}
//int Convert(int tp)
//{
//	init(a, sp);
//	int np = 0;
//	while (tp!= 0)
//	{
//		int d = tp % 2;
//		if (Push(a, sp, d))
//			tp /= 2;
//		else
//			break;
//	}
//	while (!isEmpty(a, sp))
//	{
//		int x;
//		if (Pop(a, sp, x))
//			np = np * 10 + x;
//		else
//			break;
//	}
//	return np;
//}
//int main()
//{
//	int chon;
//	char tt;
//	do{
//		cout << "1. Khai bao"
//			<< "\n2. Khoi tao stack rong"
//			<< "\n3. Kiem tra stack rong"
//			<< "\n4. Kiem tra stack day"
//			<< "\n5. Them 1 phan tu"
//			<< "\n6. Xoa 1 phan tu"
//			<< "\n7. Xuat danh sach"
//			<< "\n8. Chuyen tu thap phan sang nhi phan"
//			<< "\nNhap chon: ";
//		cin >> chon;
//		switch(chon)
//		{
//		case 1:
//			cout << "Khai bao cau truc danh sach thanh cong! ";
//			break;
//		case 2:
//			init(a, sp);
//			cout << "Khoi tao stack rong thanh cong\n";
//			break;
//		case 3:
//			if (isEmpty(a, sp) == 1)
//				cout << "Stack rong\n";
//			else
//				cout << "Stack khong rong\n";
//			break;
//		case 4:
//			if (isFull(a, sp) == 1)
//				cout << "Stack day\n";
//			else
//				cout << "Stack chua day\n";
//			break;
//		case 5:
//			int x;
//			cout << "Nhap gia tri muon them ";
//			cin >> x;
//			if (Push(a, sp, x) != 0)
//				cout << "Them thanh cong!\n";
//			else
//				cout << "Stack day khong the them vao\n";
//			break;
//		case 6:
//			if (Pop(a, sp, x) != 0)
//				cout << "Phan tu lay ra co gia tri " << x << "\n";
//			else
//				cout << "Stack rong\n";
//			break;
//		case 7:
//			cout << "Danh sach:\n";
//			output(a, sp);
//			break;
//		case 8:
//			cout << "Nhap so muon chuyen tu thap phan sang nhi phan:";
//			int so;
//			cin >> so;
//			cout << "Ket qua: " << Convert(so) << endl;;
//		default:
//			break;
//		}
//		cout << "Ban co muon tiep tuc khong? (Y/N)";
//		cin >> tt;
//		} while (tt == 'Y' || tt == 'y');
//	system ("pause");
//	return 0;
//}