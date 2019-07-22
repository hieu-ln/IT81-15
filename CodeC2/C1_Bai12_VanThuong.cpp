//#include<iostream>
//using namespace std;
//
//struct Node
//{
//	int info;
//	Node *next, *previous;
//};
//
//Node *first, *last;
//
//void init()
//{
//	first = NULL;
//	last = NULL;
//}
//
//void output()
//{
//	Node *p;
//	p = first;
//	while (p != NULL)
//	{
//		cout << p->info << "\t";
//		p->next;
//	}
//}
//
//void add_first(int x)
//{
//	Node *p;
//	p = new Node;
//	p->info = x;
//	p->next = first;
//	p->previous = NULL;
//	if (p != NULL)
//		first->previous = p;
//	else
//		last = p;
//	first = p;
//}
//
//void add_last(int x)
//{
//	Node *p, *q;
//	p = new Node;
//	p->info = x;
//	p->previous = last;
//	p->next = NULL;
//	q = first;
//	if (q != NULL)
//		last->next = p;
//	else
//		first = p;
//	last = p;
//}
//
//int delete_first()
//{
//	if (first != NULL)
//	{
//		Node *p = first;
//		first = first->next;
//		delete p;
//		if (first != NULL)
//			first->previous = NULL;
//		else
//			last = NULL;
//		return 1;
//	}
//	return 0;
//}
//
//int delete_last()
//{
//	if (last != NULL)
//	{
//		Node *p = last;
//		last = last->previous;
//		if (last != NULL)
//			last->next = NULL;
//		else
//			first = NULL;
//		delete p;
//		return 1;
//	}
//	return 0;
//}
//
//int search_x(int x)
//{
//	Node *p;
//	p = first;
//	if (p != NULL)
//	{
//		while ((p->info != x) && (p != NULL))
//		{
//			p = p->next;
//		}
//		if (p != NULL)
//		{
//			delete_first();
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int search_x_near(int x, int ip)
//{
//	Node *p, *q;
//	q = new Node;
//	p = first;
//	if (p != NULL)
//	{
//		while ((p->info != x) && (p != NULL))
//		{
//			p = p->next;
//		}
//		if (p != NULL)
//		{
//			p = p->previous;
//			add_first(ip);
//			return 1;
//		}
//		else
//		{
//			p = first;
//			while (p != NULL)
//			{
//				int n = 0;
//				if (n = 0)
//				{
//					if (p->info > x)
//					{
//						n = p->info;
//						q = p;
//					}
//				}
//				else
//				{
//					if ((p->info > x) && (p->info < n))
//						q = p;
//				}
//				p = p->next;
//			}
//			q = q->previous;
//			add_first(ip);
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int x, ip, choose, y;
//	system("cls");
//	cout << "~~~~ BAI TAP CHUONG 2 - BAI 12 - NGUYEN VAN THUONG ~~~~\n";
//	cout << "1.Tao danh sach rong !\n";
//	cout << "2.Xuat danh sach !\n";
//	cout << "3.Them mot phan tu vao dau danh sach !\n";
//	cout << "4.Them mot phan tu vao cuoi danh sach !\n";
//	cout << "5.Xoa phan tu dau danh sach !\n";
//	cout << "6.Xoa phan tu cuoi danh sach !\n";
//	cout << "7.Tim va xoa phan tu trong danh sach !\n";
//	cout << "8.Chen phan tu vao truoc phan tu co gia tri x hoac lon hon gan bang x !\n";
//	cout << "9.Thoat !\n";
//	do {
//		cout << "Nhap vao lua chon cua ban : \n";
//		cin >> choose;
//		switch (choose)
//		{
//		case 1:
//			init();
//			cout << "Tao thanh cong !\n";
//			break;
//		case 2:
//			cout << "Danh sach la : \n";
//			output();
//			break;
//		case 3:
//			cout << "Nhap vao phan tu x can them : ";
//			cin >> x;
//			add_first(x);
//			cout << "Them thanh cong !\n";
//			break;
//		case 4:
//			cout << "Nhap vao phan tu x can them : ";
//			cin >> x;
//			add_last(x);
//			cout << "Them thanh cong !\n";
//			break;
//		case 5:
//			y = delete_first();
//			if (y == 1)
//			{
//				cout << "Xoa thanh cong !\n";
//				cout << "Danh sach sau khi xoa la : \n";
//				output();
//			}
//			else
//				cout << "Xoa that bai !\n";
//			break;
//		case 6:
//			y = delete_last();
//			if (y == 1)
//			{
//				cout << "Xoa thanh cong !\n";
//				cout << "Danh sach sau khi xoa la : \n";
//				output();
//			}
//			else
//				cout << "Xoa that bai !\n";
//			break;
//		case 7:
//			cout << "Nhap vao phan tu can tim va xoa : ";
//			cin >> x;
//			y = search_x(x);
//			if (y == 1)
//			{
//				cout << "Xoa thanh cong !\n";
//				cout << "Danh sach sau khi xoa la : \n";
//				output();
//			}
//			else
//				cout << "Khong tim thay !\n";
//			break;
//		case 8:
//			cout << "Nhap vao phan tu can chen : ";
//			cin >> ip;
//			cout << "Nhap vao phan tu x can tim : ";
//			cin >> x;
//			y = search_x_near(x, ip);
//			if (y == 1)
//			{
//				cout << "Them thanh cong !\n";
//				cout << "Danh sach sau khi them la : \n";
//				output();
//			}
//			else
//				cout << "Them phan tu that bai !\n";
//			break;
//		case 9:
//			cout << "Cam on da su dung dich vu !\n Tam biet va hen gap lai !\n";
//			break;
//		}
//	} while (choose != 8);
//	system("pause");
//	return 0;
//}