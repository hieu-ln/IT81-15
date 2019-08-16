#include <iostream>
using namespace std;
#define COUNT 10
struct Node
{
	int info;
	Node *left;
	Node *right;
};
Node *root;
//Khoi tao cay rong
void tree_empty()
{
	root=NULL;
}
//Them mot phan tu trong cay
void InsertNode(Node *&p,int x)
{
	if(p==NULL)
	{
		p=new Node;
		p->info=x;
		p->left=NULL;
		p->right=NULL;
	}
	else
	{
		if(p->info==x)
			return;
		else if(p->info >x)
			return InsertNode(p->left,x);
		else
			return InsertNode(p->right,x);
	}
}
//Tim mot phan tu trong cay
Node *search(Node *p,int x)
{
	while(p!=NULL)
	{
		if(p->info==x)
			return p;
		else
			if(p->info < x)
				return search(p->right,x);
			else
				return search(p->left,x);
	}
	return NULL;
}
//Xoa mot phan tu trong cay
void searchStandFor(Node *&p, Node *&q)
{
	if(q->left==NULL)
	{
		p->info=q->info;
		p=q;
		q=q->right;
	}
	else
		searchStandFor(p,q->left);
}
int Delete(Node*&T, int x)
{
	if(T==NULL)
		return 0;
	if(T->info==x)
	{
		Node *p=T;
		if(T->left==NULL)
			T=T->right;
		else
			if(T->right==NULL)
				T=T->left;
			else
				searchStandFor(p,T->right);
		delete p;
		return 1;
	}
	if(T->info<x)
		return Delete(T->right,x);
	if(T->info>x)
		return Delete(T->left,x);
}
//Xuat cay nhi phan
void print(Node *p,int space)
{
	if(p==NULL)
		return ;
	space +=COUNT;
	print(p->right,space);
	cout <<endl;
	for(int i=COUNT;i<space;i++)
		cout <<" ";
	cout <<p->info<<endl;
	print(p->left,space);
}
void Process_print()
{
	print(root,0);
}
void DuyetLNR(Node *p)
{
	if(p!=NULL)
	{
		DuyetLNR(p->left);
		cout <<p->info<<" ";
		DuyetLNR(p->right);
	}
}
void DuyetNLR(Node *p)
{
	if(p!=NULL)
	{
		cout <<p->info<<" ";
		DuyetNLR(p->left);
		DuyetNLR(p->right);
	}
}
void DuyetLRN(Node *p)
{
	if(p!=NULL)
	{
		DuyetLRN(p->left);
		DuyetLRN(p->right);
		cout <<p->info<<" ";
	}
}
//Dem so node
int countNode(Node *p)
{
	if(p==NULL)
		return 0;
	else
		return 1+countNode(p->left)+countNode(p->right);
}
//Tim GTNN
int timMIN(Node *p)
{
	if(p==NULL)
		return INT_MIN;

	else
	{
		while(p->left!=NULL)
			p=p->left;
		return p->info;
	}
}
//Tim GTLN
int timMAX(Node *p)
{
	if(p==NULL)
		return INT_MIN;
	else
	{
		while(p->right!=NULL)
			p=p->right;
		return p->info;
	}
}
//Dem so Node cay ben trai
int countNodeLeft(Node *p)
{
	if(p==NULL||p->left==NULL)
		return 0;
	else
		return countNode(p->left);
}
//Dem so Node cay ben phai
int countNodeRight(Node *p)
{
	if(p==NULL||p->right==NULL)
		return 0;
	else
		return countNode(p->right);
}
int main()
{
	int chon,x,t;
	char tt;
	do
	{
		system("cls");
		cout <<"===============MENU===============\n";
		cout <<"1. Khoi tao cay rong\n";
		cout <<"2. Them mot phan tu vao cay\n";
		cout <<"3. Tim mot phan tu trong cay\n";
		cout <<"4. Xoa mot phan tu trong cay\n";
		cout <<"5. Duyet cay theo thu tu NLR\n";
		cout <<"6. Duyet cay theo thu tu LNR\n";
		cout <<"7. Duyet cay theo thu tu LRN\n";
		cout <<"8. Tim gia tri lon nhat trong cay nhi phan\n";
		cout <<"9. Tim gia tri nho nhat trong cay nhi phan\n";
		cout <<"10. Dem so node trong cay nhi phan\n";
		cout <<"11.Dem so node cua nhanh con ben trai cay nhi phan\n";
		cout <<"12.Dem so node cua nhanh con ben phai cay nhi phan\n";
		cout <<"13.Xuat cay nhi phan\n";
		cout <<"==================================\n";
		cout <<"Nhap lua chon cua ban(1->11):";
		cin >>chon;
		switch(chon)
		{
		case 1:
			tree_empty();
			cout <<"Khoi tao thanh cong!\n";
			break;
		case 2:
			cout <<"Nhap gia tri can them vao cay: ";
			cin >>x;
			InsertNode(root,x);
			break;
		case 3:
			cout <<"Nhap gia tri can tim: ";
			cin >>x;
			if(search(root,x)==NULL)
				cout <<"Khong tim thay gia tri "<<x<<"\n";
			else
				cout <<"Tim thay gia tri "<<x<<" tai dia chi:"<<search(root,x)<<endl;
			break;
		case 4:
			cout <<"Nhap gia tri can xoa: ";
			cin >>x;
			t=Delete(root,x);
			if(t==1)
				cout <<"Xoa thanh cong!\n";
			else
				cout <<"Xoa khong thanh cong!\n";
			break;
		case 5:
			cout <<"Duyet danh sach NLR: ";
			DuyetNLR(root);
			cout <<endl;
			break;
		case 6:
			cout <<"Duyet danh sach LNR: ";
			DuyetLNR(root);
			cout <<endl;
			break;
		case 7:
			cout <<"Duyet danh sach LRN: ";
			DuyetLRN(root);
			cout <<endl;
			break;
		case 8:
			if(timMAX(root)==INT_MIN)
				cout <<"Cay rong!Khong co gia tri !\n";
			else
				cout <<"Gia tri lon nhat trong cay la: "<<timMAX(root)<<endl;
			break;
		case 9:
			if(timMIN(root)==INT_MIN)
				cout <<"Cay rong!Khong co gia tri !\n";
			else
				cout <<"Gia tri nho nhat trong cay la: "<<timMIN(root)<<endl;
			break;
		case 10:
			cout <<"So node trong cay nhi phan la: "<<countNode(root)<<endl;
			break;
		case 11:
			cout <<"So node con nhanh ben trai cay nhi phan la: "<<countNodeLeft(root)<<endl;
			break;
		case 12:
			cout <<"So node con nhanh ben phai cay nhi phan la: "<<countNodeRight(root)<<endl;
			break;
		case 13:
			Process_print();
			break;
		default:
			cout <<"Gia tri chon khong hop le!\n";
			break;
		}
		cout <<"ban co muon tiep tuc khong(Y/N): ";
		cin >>tt;
	}while(tt=='y'||tt=='Y');
	system("pause");
	return 0;
}