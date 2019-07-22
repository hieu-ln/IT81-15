//#include <iostream>
//using namespace std;
//struct Node
//{
//	int info;
//	Node *link;
//};
//Node * first;
//void init()
//{
//	first = NULL;
//}
//void Process_list ()
//{
//	Node *p;
//	p = first;
//	while (p!=NULL)
//	{
//		cout << p->info << endl;
//		p = p->link;
//	}
//}
//Node *Search (int x)
//{
//	Node *p = first;
//	while ((p!= NULL) && (p->info != x))
//		p = p-> link;
//	return p;
//}
//void Insert_first (int x)
//{
//	Node *p;
//	p = new Node;
//	p->info = x;
//	p->link = first;
//	first = p;
//}
//int Delete_first ()
//{
//	if (first != NULL)
//	{
//		Node *p = first;
//		first = first->link;
//		delete p;
//		return 1;
//	}
//	return 0;
//}
//void Insert_last(int x)
//{
//	Node *p = new Node;
//	p->info = x;
//	p->link = NULL;
//	if (first = NULL)
//		first = p;
//	else
//	{	
//		Node *q = first;
//		while (q -> link != NULL)
//			q = q -> link;
//		q -> link = p;
//	}
//}
//int Delete_last ()
//{
//	if (first != NULL)
//	{
//		Node *p = first;
//		Node *q = NULL;
//		while (p ->link != NULL)
//		{
//			q = p;
//			p = p->link;
//		}
//		if (p != first)
//			q ->link = NULL;
//		else
//			first = NULL;
//		delete p;
//		return 1;
//	}
//	return 0;
//}
//int SearchAndDelete( int x)
//{
//	if (first != NULL)
//	{
//		Node *q, *p;
//		q = first;
//		p = first;
//		while (p ->info != x && p->link != NULL)
//		{
//			q = p;
//			p = p ->link;
//		}
//		if ( p == first)
//		{
//			first = p ->link;
//			delete p;
//			return 1;
//		}
//		else if (p ->link == NULL && p ->info == x)
//		{
//			q ->link = NULL;
//			delete p;
//			return 1;
//		}
//		else if (p ->link != NULL && p != first)
//		{
//			if (p ->link != NULL)
//				q ->link = p ->link;
//			else
//				q ->link = NULL;
//			delete p;
//			return 1;
//		}
//	return 0;
//	}
//}
//void swap (Node *a, Node *b)
//{
//	int x = a->info;
//	a->info = b->info;
//	b->info = x;
//}
//void Sort()
//{
//	Node *p, *q, *min;
//	p = first;
//	while (p != NULL)
//	{
//		min = p;
//		q = p ->link;
//		while (q != NULL)
//		{
//			if (q->info < min->info)
//				min = q;
//			q = q->link;
//		}
//		swap(min, p);
//		p = p->link;
//	}
//}
//void SortDesc()
//{
//	Node *q, *p, *min;
//	p = first;
//	while (p != NULL)
//	{
//		min = p;
//		q = q->link;
//		while (q != NULL)
//		{
//			if (q ->info > min ->info)
//				min = q;
//			q = q ->link;
//		}
//		swap(min, p);
//		p = p ->link;
//	}
//}
//int main()
//{
//	int chon;
//	char tt;
//	Node *p;
//	do{
//		cout << "1. Khai bao"
//			<< "\n2. Khoi tao"
//			<< "\n3. Xuat danh sach"
//			<< "\n4. Tim kiem phan tu"
//			<< "\n5. Them dau danh sach"
//			<< "\n6. Xoa dau danh sach"
//			<< "\n7. Them cuoi danh sach"
//			<< "\n8. Xoa cuoi danh sach"
//			<< "\n9. Tim va xoa"
//			<< "\n10. Sap xep tang dan"
//			<< "\n11. Sap xep giam dan";
//		cout << "\nNhap chon: ";
//		cin >> chon;
//		switch(chon)
//		{
//		case 1:
//			cout << "Khai bao cau truc danh sach thanh cong! ";
//			break;
//		case 2:
//			init();
//			cout << "Khoi tao danh sach thanh cong!";
//			break;
//		case 3:
//			cout << "Danh sach: \n";
//			Process_list();
//			break;
//		case 4:
//			int x;
//			cout << "Nhap phan tu can tim: ";
//			cin >> x;
//			if (Search (x) != NULL)
//				cout << "Tim thay phan tu co gia tri " << x << endl;
//			else
//				cout << "Khong tim thay phan tu co gia tri " << x << endl;
//			break;
//		case 5:
//			int y;
//			cout << "Nhap gia tri muon them vao: ";
//			cin >> y;
//			Insert_first(y);
//			cout << "Danh sach sau khi them\n";
//			Process_list();
//			break;
//		case 6:
//			if (Delete_first() != NULL)
//			{
//				cout << "Xoa thanh cong phan tu dau danh sach\n";
//				cout << "Danh sach sau khi them\n";
//				Process_list();
//			}
//			else
//				cout << "Danh sach rong\n";
//			break;
//		case 7:
//			int a;
//			cout << "Nhap gia tri muon them vao: ";
//			cin >> a;
//			Insert_last(a);
//			cout << "Danh sach sau khi them\n";
//			Process_list();
//			break;
//		case 8:
//			if (Delete_last() != NULL)
//			{
//				cout << "Xoa thanh cong phan tu cuoi danh sach\n";
//				cout << "Danh sach sau khi them\n";
//				Process_list();
//			}
//			else
//				cout << "Danh sach rong\n";
//			break;
//		case 9:
//			int t;
//			cout << "Nhap gia tri can tim: ";
//			cin >> t;
//			if (SearchAndDelete(t) == 1)
//			{
//				cout << "Tim thay phan tu co gia tri " << x << " va da xoa thanh cong " << endl;
//				cout << "Danh sach sau khi xoa: ";
//				Process_list();
//			}
//			else
//				cout << "Khong tim thay phan tu co gia tri " << x << endl;
//			break;
//		case 10:
//			Sort();
//			cout << "Danh sach sau khi sap xep tang dan:";
//			Process_list();
//			break;
//		case 11:
//			SortDesc();
//			cout << "Danh sach sau khi sap xep giam dan:";
//			Process_list();
//			break;
//		}
//	cout << "Ban co muon tiep tuc khong?(Y/N)";
//	cin >> tt;
//	} while (tt == 'y' || tt == 'Y');
//	system("pause");
//	return 0;
//}