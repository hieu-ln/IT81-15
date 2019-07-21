#include <iostream>
#include <conio.h>
using namespace std;

struct Node
{
	int info;
	Node *link;
};
Node *first;

void Init()
{
	first = NULL;
	cout<<"Khoi tao mang thanh cong!"<<endl;
}
int Input(int x)
{
	Node *q = new Node;
	q->info = x;
	q->link = NULL;
	if(first == NULL)
	{
		first = q;
		return 0;
	}else
	{
		if(first->info > q->info)
		{
			q->link = first;
			first = q;
			return 0;
		}
		Node *p = first;
		while(p->link != NULL)
		{
			if(p->info < q->info)
			{
				if((p->link)->info > q->info)
				{
					q->link = p->link;
					p->link = q;
					return 0;
				}
				if((p->link)->info < q->info)
					p = p->link;
			}
		}
		p->link = q;
		return 0;
	}
}
void Output()
{
	Node *p;
	p = first;
	cout<<"mang: ";
	while(p != NULL)
	{
		cout<<p->info<<"\t";
		p = p->link;
	}
	cout<<endl;
}
int Search(int x)
{
	Node *p = first;
	while(p->link != NULL)
	{
		if(p->info == x)
			return 0;
		p = p->link;
	}
	return 1;
}
int Searchdelete(int x)
{
	if(first == NULL)
		return 1;
	Node *p = first;
	Node *q = new Node;
	while(p->link != NULL && p->info != x)
	{
		q = p;
		p = p->link;
	}
	if(p->info != x)
		return 1;
	else
	{
		if(p == first)
		{
			if(p->link == NULL)
			{
				first = NULL;
			}else
			{
				first = p->link;
				delete p;
			}
		}
		else
		{
			q->link = p->link;
			delete p;
		}
	}
	return 0;
}
int main(){
	cout <<"--------BAI 4, CHUONG 2, DSLK--------" << endl;
	cout <<"1. Khoi tao danh sach rong" << endl;
	cout <<"2. Them 1 vao tu vao danh sach" << endl;
	cout <<"3. Xuat danh sach"<<endl;
	cout <<"4. Tim 1 phan tu trong danh sach" << endl;
	cout <<"5. Thoat" << endl;
	int Chon;
	do{
		cout <<"Nhap lenh ban can su dung: ";
		cin >> Chon;
		switch(Chon)
		{
		case 1:
			Init();
			break;
		case 2:
			int x;
			cout<<"Nhap phan tu can them: ";
			cin>>x;
			if(Input(x) == 0)
				cout <<"Da them phan tu thanh cong!" << endl;
			Output();
			break;
		case 3:
			Output();
			break;
		case 4:
			int y;
			cout <<"Nhap phan tu can tim: ";
			cin>>y;
			if(Search(y) == 0)
				cout<<"Da tim thay phan tu trong mang!" << endl;
			else
				cout<<"Khong tim thay phan tu trong mang!" << endl;
			break;
		case 5:
			int z;
			cout <<"Nhap phan tu can tim: ";
			cin>>z;
			if(Searchdelete(z) == 0)
				cout <<"Da xoa phan tu vua tim trong mang!"<<endl;
			else
				cout <<"Khong tim thay phan tu trong mang de xoa!"<<endl;
			Output();
			break;
		}
	}while(Chon != 6);
	return 0;
}
