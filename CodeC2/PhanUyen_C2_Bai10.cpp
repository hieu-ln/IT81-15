//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//struct Node
//{
//	int info;
//	Node *link;
//};
//
//Node *sp;
//
//void Init()
//{
//	sp = NULL;
//}
//
//int IsEmpty()
//{
//	if (sp == NULL)
//		return 1;
//	return 0;
//}
//
//void Push(int x)
//{
//	Node *p = new Node;
//	p->info = x;
//	p->link = sp;
//	sp = p;
//}
//
//int Pop(int&x)
//{
//	if (sp != NULL)
//	{
//		Node *p = sp;
//		x = p->info;
//		sp = p->link;
//		delete p;
//		return 1;
//	}
//	return 0;
//}
//
//void Output()
//{
//	Node *p = new Node;
//	p = sp;
//	while (p != NULL)
//	{
//		cout << p->info << endl;
//		p = p->link;
//	}
//	cout << endl;
//}
//
//int Convert(int tp)
//{
//	Init();
//	while (tp != 0)
//	{
//		int d = tp % 2;
//		Push(d);
//		tp /= 2;
//	}
//	int np = 0;
//	while (!IsEmpty())
//	{
//		int so;
//		if (Pop(so))
//			np = np * 10 + so;
//	}
//	return np;
//}
//
//void HNtower(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		cout << "\t" << a << "-------" << c << endl;
//		return;
//	}
//	HNtower(n - 1, a, c, b);
//	HNtower(1, a, b, c);
//	HNtower(n - 1, b, a, c);
//	return;
//}
//
//int main()
//{
//	int choice;
//	char cont;
//	char a = 'A', b = 'B', c = 'C';
//	do {
//		system("cls");
//		cout << "--------CHUONG 2, BAI 10, STACK(DSLK)--------" << endl;
//		cout << "1. Khoi tao STACK rong\n";
//		cout << "2. Kiem tra\n";
//		cout << "3. Them 1 phan tu vào STACK\n";
//		cout << "4. Xoa 1 phan tu ra khoi STACK\n";
//		cout << "5. Doi 1 so he thap phan sang he nhi phan\n";
//		cout << "6. Giai bai toan thap Ha Noi\n";
//		cout << "7. Xuat STACK\n";
//		cout << "Vui long chon so thuc hien: \n";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			Init();
//			cout << "Ban vua khoi tao STACK rong thanh cong!" << endl;
//			break;
//		case 2:
//			if (!IsEmpty())
//				cout << "STACK khong rong!" << endl;
//			else
//				cout << "STACK rong!" << endl;
//			break;
//		case 3:
//			int x;
//			cout << "Nhap phan tu can them: ";
//			cin >> x;
//			Push(x);
//			break;
//		case 4:
//			int y;
//			Pop(y);
//			cout << "Phan tu can lay ra la: " << y << endl;
//			break;
//		case 5:
//			int tp;
//			cout << "Nhap gia tri thap phan can doi sang nhi phan: ";
//			cin >> tp;
//			cout << tp << "Co dang nhi phan la: " << Convert(tp) << endl;
//			break;
//		case 6:
//
//			int n;
//			cout << "Nhap so dia: ";
//			cin >> n;
//			HNtower(n, a, b, c);
//			break;
//		case 7:
//			cout << "STACK hien tai: " << endl;
//			Output();
//			break;
//		}
//		cout << "Ban co muon tiep tuc(Y/N)" << endl;
//		cin >> cont;
//	} while (cont == 'Y' || cont == 'y');
//	system("pause");
//	return 0;
//}