//# include <iostream>
//using namespace std;
//# define MAX 100
//int a[MAX];
//int front, rear;
//void init(int a[], int &front, int &rear)
//{
//	front = -1;
//	rear = -1;
//}
//int isEmpty(int a[], int &front, int rear)
//{
//	if (front == -1)
//		return 1;
//	return 0;
//}//int isFull(int a[], int front, int rear)
//{
//	if ((front == 0 && rear== MAX -1) || front - rear == 1)
//		return 1;
//	else
//		return 0;
//}//int Push(int a[], int &front, int &rear, int x)
//{
//	if (rear - front == MAX - 1) 
//		return 0;
//	else
//	{
//		if (front == -1) 
//			front = 0;
//		if (rear == MAX - 1) 
//		{
//		for(int i = front; i<=rear; i++)
//		{	
//			a[i-front]=a[i];
//		}
//			rear = MAX -1-front;
//			front = 0; 
//		}
//		a[++rear] = x;
//		return 1;
//	}
//}
//int Pop(int a[], int &front, int &rear, int &x)
//{
//	if (front == -1) 
//		return 0;
//	else
//	{
//		x = a[front++];
//		if (front > rear)
//		{
//			front = - 1;
//			rear = -1;
//		}
//		return 1;
//	}
//}
//void output (int a[], int front, int rear)
//{
//	if (front <= rear && front != -1)
//	{
//		for (int i = front; i <= rear+1; i ++)
//			cout << a[i] << "\t";;
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
//			<< "\n4. Kiem tra queue day"
//			<< "\n5. Them 1 phan tu"
//			<< "\n6. Xoa 1 phan tu"
//			<< "\n7. Xuat danh sach"
//			<< "\nNhap chon: ";
//		cin >> chon;
//		switch(chon)
//		{
//		case 1:
//			cout << "Khai bao cau truc danh sach thanh cong! ";
//			break;
//		case 2:
//			init(a, front, rear);
//			cout << "Khoi tao stack rong thanh cong\n";
//			break;
//		case 3:
//			if (isEmpty(a, front, rear) == 1)
//				cout << "Queue rong\n";
//			else
//				cout << "Queue khong rong\n";
//			break;
//		case 4:
//			if (isFull(a, front, rear) == 1)
//				cout << "Queue day\n";
//			else
//				cout << "Queue chua day\n";
//			break;
//		case 5:
//			int x;
//			cout << "Nhap gia tri muon them ";
//			cin >> x;
//			if (Push(a, front, rear, x) != 0)
//			{
//				cout << "Them thanh cong!\n";
//				output(a, front, rear);
//			}
//			else
//				cout << "Stack day khong the them vao\n";
//			break;
//		case 6:
//			if (Pop(a, front, rear, x) != 0)
//			{
//				cout << "Phan tu lay ra co gia tri " << x << "\n";
//				output(a, front, rear);
//			}
//			else
//				cout << "Stack rong\n";
//			break;
//		default:
//			break;
//		}
//		cout << "Ban co muon tiep tuc khong? (Y/N)";
//		cin >> tt;
//		} while (tt == 'Y' || tt == 'y');
//	system ("pause");
//	return 0;
//}