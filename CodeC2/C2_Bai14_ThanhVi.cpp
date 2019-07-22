#include <iostream>
using namespace std;

struct Node{
	int sm;
	int hs;
	Node *next;
};

struct List{
	Node *head, *tail;
};

void Init(List &l ){
	l.head = l.tail = NULL;
}

Node *creatNode( int h, int s )
{
	Node *p = new Node;
	if( p == NULL ) exit(1);
	p->sm = s;
	p->hs= h;
	p->next = NULL;
	return p;
}

void addTail(List &l, Node *p ){
	if(l.head == NULL ) 
		l.head = l.tail = p;
	else
	{
		l.tail->next = p;
		l.tail = p; 
	}
}

void nhap(List &l){
	int x, n;
	cout<<"\nNhap bac cua da thuc: "; 
	cin>> n;
	for(int i = n; i>= 0; i-- ){
		cout<<"\nNhap he so cua x^" <<i <<": "; cin>> x;
		Node *p = creatNode( x, i );
		addTail(l, p );
	}
}

void cong( List &l, List l1, List l2 )
{
	Node *p = new Node;
	Node *q = new Node;
	if(l1.head->sm > l2.head->sm )
	{
		l = l1;
		p = l2.head;
	}
	else
	{
		l = l2;
		p = l1.head;
	}
	
	q= l.head;
	while( q->sm > p->sm ) q = q->next; // tim dc q sao cho q->sm == p->sm
	while( q != NULL ){
		q->hs += p->hs;
		p = p->next; q =q->next;
	}
}
void tru( List &l, List l1, List l2 )
{
	Node *p = new Node;
	Node *q = new Node;
	if(l1.head->sm > l2.head->sm )
	{
		l = l1;
		p = l2.head;
	}
	else
	{
		l = l2;
		p = l1.head;
	}
	
	q= l.head;
	while( q->sm > p->sm ) q = q->next; // tim dc q sao cho q->sm == p->sm
	while( q != NULL ){
		q->hs -= p->hs;
		p = p->next; q =q->next;
	}
}
void xuatcong( List l ){
	Node *p = l.head;
	while( p!= l.tail )
	{
		if(p->hs) 
			cout<<p->hs <<"x^"<< p->sm;
		p = p->next;
		if(p->sm)
		{
			if(p->sm >0  ) 
				cout<<" + ";
			else 
				cout<<" ";
		}
	}
}
void xuattru( List l ){
	Node *p = l.head;
	while( p!= l.tail )
	{
		if(p->hs) 
			cout<<p->hs <<"x^"<< p->sm;
		p = p->next;
		if(p->sm)
		{
			if(p->sm > 0 ) 
				cout<<" - ";
			else 
				cout<<" ";
		}
	}
}
int main(){
	List l, l1, l2;
	Init(l); Init(l1); Init(l2);
	cout<<"\nNhap P(x): "; nhap(l1);
	cout<<"\nNhap Q(x): "; nhap(l2);
	int chon;
	char tt;
	do
	{
		system("cls");
		cout <<"\t\tMENU\n"
			 <<"\t1.Cong hai da thuc\n"
			 <<"\t2.Tru hai da thuc \n"
			 <<"----------------------------------\n"
			 <<"Xin moi nhap lua chon cua ban: ";
		cin >>chon;
		switch(chon)
		{
		case 1:
			xuatcong(l);
			cong(l,l1,l2);
			cout <<"Ket qua cua phep cong hai da thuc la: ";
			xuatcong(l);
			cout <<endl; 
			break;
		case 2: 
			tru(l,l1,l2);
			cout <<"Ket qua cua phep tru hai da thuc la: ";
			xuattru(l);
			cout <<endl; 
			break;
	default:
			cout <<"Gia tri chon khong hop le!\n";
			break;
		}
		cout <<"ban co muon tiep tuc khong(Y/N): ";
		cin >>tt;
	}while(tt=='y'||tt=='Y');
	return 0;
}
