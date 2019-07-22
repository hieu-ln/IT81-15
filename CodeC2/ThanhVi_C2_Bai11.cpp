//#include <iostream>
//using namespace std;
//struct Node
//{
//	int info;
//	Node *link;
//};
//Node *front,*rear;
//void init()
//{
//	front=NULL;
//	rear=NULL;
//}
//int isEmpty()
//{
//	if(front==NULL)
//		return 1;
//	return 0;
//}
//void Push(int x)
//{
//	Node *p;
//	p=new Node;
//	p->info=x;
//	p->link=rear;
//	rear=p;
//}
//int Pop(int &x)
//{
//	if(front!=NULL)
//	{
//		Node *p=front;
//		x=p->info;
//		front=front->link;
//		if(front==NULL)
//			rear=NULL;
//		delete p;
//		return 1;
//	}
//	return 0;
//}
//void Output()
//{
//	Node*p=new Node;
//	p=rear;
//	while(p!=NULL)
//	{
//		cout <<p->info<<endl;
//		p=p->link;
//	}
//	cout <<endl;
//}
//int main()
//{
//	int x,t,chon;
//	init();
//	char tt;
//	do
//	{
//		system("cls");
//		cout <<"\t\tMENU\n"
//			 <<"\t1.Khoi tao\n"
//			 <<"\t2.Kiem tra rong\n"
//			 <<"\t3.Them mot phan tu\n"
//			 <<"\t4.Xoa mot phan tu\n"
//			 <<"\t5.Xuat danh sach\n"
//			  <<"----------------------------------\n"
//			 <<"Xin moi nhap lua chon cua ban: ";
//		cin >>chon;
//		switch(chon)
//		{
//		case 1:
//			init();
//			cout <<"Khoi tao danh sach thanh cong!\n";
//			break;
//		case 2: 
//			if(isEmpty()==1)
//				cout <<"Queue rong!\n";
//			else
//				cout <<"Queue khong rong!\n";
//			break;
//		case 3:
//			cout <<"Nhap gia tri muon them: ";
//			cin >>x;
//			Push(x);
//			break;
//		case 4:
//			t=Pop(x);
//			if(t==1)
//				cout <<"Xoa phan tu "<<x<<" thanh cong!\n";
//			else
//				cout <<"Queue rong!\n";
//			break;
//		case 5:
//			cout <<"Cac phan tu trong queue la: \n";
//			Output();
//			break;
//		default:
//			cout <<"Gia tri chon khong hop le!\n";
//			break;
//		}
//		cout <<"ban co muon tiep tuc khong(Y/N): ";
//		cin >>tt;
//	}while(tt=='y'||tt=='Y');
//	return 0;
//}
