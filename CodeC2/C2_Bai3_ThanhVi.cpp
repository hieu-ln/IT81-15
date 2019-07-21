//#include <iostream>
//using namespace std;
//struct Node 
//{
//	int info;
//	Node *link;
//};
//Node *first;
//
//void init()
//{
//	first=NULL;
//}
//void Process_list()
//{
//	Node *p;
//	p=first;
//	while(p!=NULL)
//	{
//		cout <<p->info<<" ";
//		p=p->link;
//	}
//}
//Node * Search(int x)
//{
//	Node *p=first;
//	while((p!=NULL)&&(p->info !=x))
//		p=p->link;
//	return p;
//}
//int Insert_first(int x)
//{
//	Node *p;
//	p=new Node;
//	p->info=x;
//	p->link=first;
//	first=p;
//	return 1;
//}
//int Delete_first()
//{
//	if(first!=NULL)
//	{
//		Node *p=first;
//		first=first->link;
//		delete p;
//		return 1;
//	}
//	return 0;
//}
//int Insert_last(int x)
//{
//	Node *p;
//	p=new Node;
//	p->info=x;
//	p->link=NULL;
//	if(first==NULL)
//		first=p;
//	else
//	{
//		Node *q=first;
//		while(q->link!=NULL)
//			q=q->link;
//		q->link=p;
//	}
//	return 1;
//}
//int Delete_last()
//{
//	if(first!=NULL)
//	{
//		Node *p,*q;
//		p=first;
//		q=NULL;
//		if(p!=NULL)
//			while(p->link !=NULL)
//			{
//				q=p;
//				p=p->link;
//			}
//		if(p!=first)
//			q->link=NULL;
//		else
//			first=NULL;
//		delete p;
//		return 1;
//	}
//	return 0;
//}
//int Search_Delete(int x)
//{
//	if(first !=NULL)
//	{
//		Node *p, *q;
//		p=first;
//		q=first;
//		while(p->info!=x && p->link!=NULL)
//		{
//			q=p;
//			p=p->link;
//		}
//		if(p!=first && p->link !=NULL)
//		{
//			if(p->link !=NULL)
//				q->link=p->link;
//			else
//				q->link =NULL;
//			delete p;
//			return 1;
//		}
//		else
//			if(p==first)
//			{
//				first=p->link;
//				delete p;
//				return 1;
//			}
//			else
//				if(p->link==NULL && p->info==x)
//				{
//					q->link=NULL;
//					delete p;
//					return 1;
//				}
//				else
//					return 0;
//	}
//	return 0;
//}
//void SortDecs()
//{
//	Node *p=first,*q;
//	while(p->link !=NULL)
//	{
//		q=p->link;
//		while(q!=NULL)
//		{
//			if(p->info >q->info)
//			{
//				int tam=p->info;
//				p->info=q->info;
//				q->info=tam;
//			}
//			q=q->link;
//		}
//		p=p->link;
//	}
//}
//int main()
//{
//	int x;
//	int k,n;
//	Node *t;
//	char tt;
//	int chon;
//	do
//	{
//		system("cls");
//		cout <<"===============MENU===============\n";
//		cout <<"1.Khoi tao danh sach.\n";
//		cout <<"2.Tim mot phan tu trong danh sach.\n";
//		cout <<"3.Them phan tu vao dau danh sach.\n";
//		cout <<"4.Them phan tu vao cuoi danh sach.\n";
//		cout <<"5.Xoa mot phan tu dau danh sach.\n";
//		cout <<"6.Xoa mot phan tu cuoi danh sach.\n";
//		cout <<"7.Tim mot phan tu trong danh sach va xoa.\n";
//		cout <<"8.Sap xep danh sach.\n";
//		cout <<"9.Danh sach dang luu tru la.\n";
//		cout <<"10.Thoat chuong trinh.\n";
//		cout <<"==================================\n";
//		cout <<"Moi nhap lua chon cua ban: ";
//		cin >>chon;
//		switch(chon)
//		{
//		case 1:
//			init();
//			cout <<"Nhap vao so luong Node can su dung: ";
//			cin >>n;
//			for(int i=0;i<n;i++)
//			{
//				cout <<"Nhap vao gia tri thu "<<i+1<<":  ";
//				cin >> x;
//				if(i==0)
//					Insert_first(x);
//				else
//					Insert_last(x);
//			}
//			break;
//		case 2:
//			cout <<"Nhap phan tu can tim: ";
//			cin >>x;
//			t=Search(x);
//			if(t!=NULL)
//				cout <<"Tim thay phan tu co gia tri x="<<x<<endl;
//			else
//				cout <<"Khong tim thay phan tu co gia tri x = "<<x<<endl;
//			break;
//		case 3:
//			cout <<"Nhap phan tu can them dau danh sach: ";
//			cin>>x;
//			k=Insert_first(x);
//			if(k==1)
//				cout <<"Them thanh cong!\n";
//			else
//				cout <<"Them khong thanh cong!\n";
//			break;
//		case 4:
//			cout <<"Nhap phan tu can them cuoi danh sach: ";
//			cin>>x;
//			k=Insert_last(x);
//			if(k==1)
//				cout <<"Them thanh cong!\n";
//			else
//				cout <<"Them khong thanh cong!\n";
//			break;
//		case 5:
//			k=Delete_first();
//			if(k==0)
//				cout <<"Danh sach rong, khong the xoa!\n";
//			else
//				cout <<"Xoa thanh cong phan tu dau!";
//			break;
//		case 6:
//			k=Delete_last();
//			if(k==0)
//				cout <<"Danh sach rong, khong the xoa!\n";
//			else
//				cout <<"Xoa thanh cong phan tu cuoi!";
//			break;
//		case 7:
//			cout <<"Nhap vao phan tu can tim xoa: ";
//			cin >>x;
//			k=Search_Delete(x);
//			if(k==1)
//				cout <<"Tim thay "<<x<<" va da xoa thanh cong!\n";
//			else 
//				cout <<"Khong tim thay "<<x<<"!\n";
//			break;
//		case 8:
//			SortDecs();
//			cout <<"Xep tang thanh cong!\n";
//			break;
//		case 9:
//			cout <<"Danh sach cac gia tri: \n";
//				Process_list();
//				break;
//		case 10:
//			cout <<"Ban chon thoat!Goodbye!\n";
//			break;
//		default:
//			cout <<"Lua chon sai!\n";
//			break;
//		}
//		cout <<"Ban co muon tiep tuc khong(Y/N): ";
//		cin >>tt;
//	}while(tt=='y'||tt=='Y');
//	system("pause");
//	return 0;
//}