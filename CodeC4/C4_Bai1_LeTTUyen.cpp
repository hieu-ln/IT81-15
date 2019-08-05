//#include <iostream>
//using namespace std;
//struct Node
//{
//	int info;
//	Node *left;
//	Node *right;
//};
//Node *root;
//void init()
//{
//	root = NULL;
//}
//Node *search (Node *p, int x)
//{
//	if (p != NULL)
//	{
//		if (p->info == x)
//			return p;
//		else
//			if (x > p->info)
//				return search(p->right, x);
//			else
//				return search (p->left, x);
//	}
//	return NULL;
//}
//void InsertNode (Node *&p, int x)
//{
//	if (p == NULL)
//	{
//		p = new Node;
//		p->info = x;
//		p->left = NULL;
//		p->right = NULL;
//	}
//	else
//	{
//		if (p->info == x)
//			return;
//		else
//			if (p->info > x)
//				return InsertNode(p->left, x);
//			else
//				return InsertNode(p->right, x);
//	}
//}
//void duyetLNR (Node *p)
//{
//	if (p != NULL)
//	{
//		duyetLNR (p->left);
//		cout << p ->info << " ";
//		duyetLNR (p->right);
//	}
//}
//void duyetNLR (Node *p)
//{
//	if (p != NULL)
//	{
//		cout << p ->info << " ";
//		duyetNLR (p->left);
//		duyetNLR (p->right);
//	}
//}
//void duyetLRN (Node *p)
//{
//	if (p != NULL)
//	{
//		duyetLRN (p->left);
//		duyetLRN (p->right);
//		cout << p ->info << " ";
//	}
//}
//void searchStandFor (Node *&p, Node *&q)
//{
//	if (q->left == NULL)
//	{
//		p->info = q->info;
//		p = q;
//		q = q->right;
//	}
//	else
//		searchStandFor(p, q->left);
//}
//int Delete (Node *&t, int x)
//{
//	if (t == NULL)
//		return 0;
//	if (t->info == x)
//	{
//		Node *p = t;
//		if (t->left == NULL)
//			t = t->right;
//		else
//			if (t->right == NULL)
//				t = t->left;
//			else
//				searchStandFor(p, t->right);
//		delete p;
//		return 1;
//	}
//	if (t->info < x)
//		return Delete(t->right, x);
//	if (t->info > x)
//		return Delete(t->left, x);
//}
//void print (Node *p, int space)
//{
//	int COUNT = 10;
//	if (p == NULL)
//		return;
//	space += COUNT;
//	print (p->right, space);
//	cout <<endl;
//	for (int i = COUNT; i < space; i++)
//		cout << " ";
//	cout << p->info << endl;
//	print (p->left, space);
//}
//void Process_print()
//{
//	print (root, 0);
//}
//int main()
//{
//	int chon;
//	char tt;
//	Node *p;
//	do{
//		system("cls");
//		cout << "1. Khoi tao cay rong"
//			<< "\n2. Them phan tu vao cay"
//			<< "\n3. Tim phan tu trong cay"
//			<< "\n4. Xoa node trong cay"
//			<< "\n5. Duyet NLR"
//			<< "\n6. Duyet LNR"
//			<< "\n7. Duyet LRN"
//			<< "\nNhap chon: ";
//		cin >> chon;
//		switch (chon)
//		{
//		case 1:
//			init();
//			cout << "Khoi tao thanh cong\n";
//			break;
//		case 2:
//			int x;
//			cout << "Nhap gia tri muon them vao: ";
//			cin >> x;
//			InsertNode(root, x);
//			cout << "Cay sau khi them \n";
//			Process_print();
//			break;
//		case 3:
//			int y;
//			cout << "Nhap gia tri muon tim: ";
//			cin >> y;
//			if (search (root, y) != NULL)
//				cout << "Tim thay " << y << endl;
//			else
//				cout << "Khong tim thay " << y << "trong cay" << endl;
//			break;
//		case 4:
//			int a;
//			cout << "Nhap gia tri muon xoa: ";
//			cin >> a;
//			if (Delete (root, a) == NULL)
//				cout << "Khong co gia tri " << a << " can xoa\n";
//			else
//				cout << "Da xoa gia tri " << a << endl;
//			cout << "Cay sau khi them \n";
//			Process_print();
//			break;
//		case 5:
//			cout << "Duyet cay theo thu tu NLR: \n";
//			duyetNLR(root);
//			cout << endl;
//			break;
//		case 6:
//			cout << "Duyet cay theo thu tu LNR: \n";
//			duyetLNR(root);
//			cout << endl;
//			break;
//		case 7:
//			cout << "Duyet cay theo thu tu LRN: \n";
//			duyetLRN(root);
//			cout << endl;
//			break;
//		}
//		cout << "Ban co muon tiep tuc khong? (y/n)";
//		cin >> tt;
//	} while (tt == 'y' || tt == 'Y');
//	system("pause");
//	return 0;
//}