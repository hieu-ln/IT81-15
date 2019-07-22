//#include <iostream>
//using namespace std;
//struct Node
//{
//	int info;
//	Node *link;
//};
//Node * front, *rear;
//void init()
//{
//	front= NULL;
//	rear= NULL;
//}
//int isEmpty()
//{
//	if (front == NULL)
//		return 1;
//	return 0;
//}
//void Push(int x)
//{
//	Node *p;
//	p = new Node;
//	p->info = x;
//	p->link = NULL;
//	if (rear == NULL)
//		front =p;
//	else
//		rear->link = p;
//	rear = p;
//}//int Pop(int &x)
//{
//	if (front!= NULL)
//	{
//		Node *p = front;
//		x = p -> info;
//		front = front ->link;
//		if (front == NULL)
//			rear = NULL;
//		delete p;
//		return 1;
//	}
//	return 0;
//}//void Process_queue ()
//{
//	if (front != NULL)
//	{
//		Node *p = front;
//		cout << "<--   ";
//		do{
//			cout << p->info << " ";
//			p = p->link;
//		} while (p != NULL);
//		cout << "<--  " << endl;
//	}
//}
//int main()
//{
//	int chon;
//	char tt;
//	do{
//		cout << "1. Khai bao"
//			<< "\n2. Khoi tao queue rong"
//			<< "\n3. Kiem tra queue rong"
//			<< "\n4. Them 1 phan tu"
//			<< "\n5. Xoa 1 phan tu"
//			<< "\n6. Xuat queue"
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
//			Process_queue();
//			break;
//		case 5:
//			if (Pop(x) != 0)
//			{
//				cout << "Phan tu lay ra co gia tri " << x << "\n";
//				cout << "hang doi sau khi lay ra\n";
//				Process_queue();
//			}
//			else
//				cout << "Stack rong\n";
//			break;
//		case 6:
//			cout << "Hang doi\n";
//			Process_queue();
//		default:
//			break;
//		}
//		cout << "Ban co muon tiep tuc khong? (Y/N)";
//		cin >> tt;
//		} while (tt == 'Y' || tt == 'y');
//	system ("pause");
//	return 0;
//}