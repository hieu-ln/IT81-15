//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//struct Node
//{
//	int info;
//	Node *link;
//};
//Node *front, *rear;
//void Init()
//{
//	front = NULL;
//	rear = NULL;
//}
//int IsEmpty()
//{
//	if (front == NULL)
//		return 1;
//	return 0;
//}
//void Push(int x)
//{
//	Node *p = new Node;
//	p->info = x;
//	p->link = NULL;
//	if (rear == NULL)
//		front = p;
//	else
//		rear->link = p;
//	rear = p;
//}
//int Pop(int &x)
//{
//	if (front != NULL)
//	{
//		Node *p = front;
//		front = p->link;
//		x = p->info;
//		if (front == NULL)
//		{
//			rear = NULL;
//		}
//		delete p;
//		return 0;
//	}
//}
//void Process_queue()
//{
//	if (front != NULL)
//	{
//		Node *p = front;
//		cout << "\t";
//		do {
//			cout << p->info << "\t";
//			p = p->link;
//		} while (p != NULL);
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int choice, x, i;
//	system("cls");
//	cout << "--------BAI 11, CHUONG 2, QUEUE(DSLK)--------" << endl;
//	cout << "1. Khoi tao Queue rong\n";
//	cout << "2. Them phan tu vao Queue\n";
//	cout << "3. Lay phan tu ra khoi Queue\n";
//	cout << "4. Kiem tra Queue co rong hay khong\n";
//	cout << "5. Xuat Queue\n";
//	cout << "6. Thoat\n";
//
//	do
//	{
//		cout << "Vui long nhap so de thuc hien: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			Init();
//			cout << "Khoi tao Queue rong thanh cong\n";
//			break;
//		case 2:
//			cout << "Nhap gia tri can them: ";
//			cin >> x;
//			Push(x);
//			cout << "Queue sau khi them la: ";
//			Process_queue();
//			break;
//		case 3:
//			Pop(x);
//			cout << "Phan tu lay ra tu Queue la: " << x << endl;
//			cout << "Queue sau khi lay ra la: ";
//			Process_queue();
//			break;
//		case 4:
//			i = IsEmpty();
//			if (i == 0)
//			{
//				cout << "Queue khong rong\n";
//			}
//			else
//				cout << "Queue rong\n";
//			break;
//		case 5:
//			cout << "Queue hien tai la:\n";
//			Process_queue();
//			break;
//		case 6:
//			cout << "Ban chon thoat!\n";
//			break;
//		default:
//			break;
//		}
//	} while (choice != 6);
//	system("pause");
//	return 0;
//}