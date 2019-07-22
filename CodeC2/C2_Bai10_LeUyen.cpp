//#include <iostream>
//using namespace std;
//struct Node
//{
//	int info;
//	Node *link;
//};
//Node * sp;
//void init()
//{
//	sp = NULL;
//}
//int isEmpty()
//{
//	if (sp == NULL)
//		return 1;
//	return 0;
//}
//void Push(int x)
//{
//	Node *p;
//	p = new Node;
//	p->info = x;
//	p->link = sp;
//	sp = p;
//}//int Pop(int &x)
//{
//	if (sp!= NULL)
//	{
//		Node *p = sp;
//		x = p -> info;
//		sp = p ->link;
//		delete p;
//		return 1;
//	}
//	return 0;
//}//void Process_stack ()
//{
//	if (sp != NULL)
//	{
//		Node *p = sp;
//		do{
//			cout << p->info << " ";
//			p = p->link;
//		} while (p != NULL);
//		cout << endl;
//	}
//}
//int Convert (int tp)
//{
//	init();
//	while (tp != 0)
//	{
//		int d = tp % 2;
//		Push(d);
//		tp /= 2;
//	}
//	int np = 0;
//	while (!isEmpty())
//	{
//		int x;
//		if (Pop(x))
//			np = np * 10 + x;
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
//			<< "\n4. Them 1 phan tu"
//			<< "\n5. Xoa 1 phan tu"
//			<< "\n6. Xuat queue"
//			<< "\n7. Doi tu thap phan sang nhi phan"
//			<< "\nNhap chon: ";
//		cin >> chon;
//		switch(chon)
//		{
//		case 1:
//			cout << "Khai bao cau truc danh sach thanh cong! ";
//			break;
//		case 2:
//			init();
//			cout << "Khoi tao stack rong thanh cong\n";
//			break;
//		case 3:
//			if (isEmpty() == 1)
//				cout << "Queue rong\n";
//			else
//				cout << "Queue khong rong\n";
//			break;
//		case 4:
//			int x;
//			cout << "Nhap gia tri muon them ";
//			cin >> x;
//			Push(x);
//			cout << "Hang doi sau khi them vao\n";
//			Process_stack();
//			break;
//		case 5:
//			if (Pop(x) != 0)
//			{
//				cout << "Phan tu lay ra co gia tri " << x << "\n";
//				cout << "Stack sau khi lay ra\n";
//				Process_stack();
//			}
//			else
//				cout << "Stack rong\n";
//			break;
//		case 6:
//			cout << "Stack:\n";
//			Process_stack();
//		case 7:
//			cout << "Nhap so muon doi tu thap phan sang nhi phan:";
//			int so;
//			cin >> so;
//			cout << "Ket qua: " << Convert(so) << endl;
//		default:
//			break;
//		}
//		cout << "Ban co muon tiep tuc khong? (Y/N)";
//		cin >> tt;
//		} while (tt == 'Y' || tt == 'y');
//	system ("pause");
//	return 0;
//}