//#include <iostream>
//using namespace std;
//struct Node
//{
//	int info;
//	Node *link;
//};
//Node *sp;
////Khoi tao Stack rong
//void init()
//{
//	sp=NULL;
//}
////Them phan tu vao Stack
//void Push(int x)
//{
//	Node *p;
//	p=new Node;
//	p->info=x;
//	p->link=sp;
//	sp=p;
//}
////Xoa mot phan tu trong Stack
//int Pop(int &x)
//{
//	if(sp!=NULL)
//	{
//		Node *p=sp;
//		x=p->info;
//		sp=p->link;
//		delete p;
//		return 1;
//	}
//	return 0;
//}
////Kiem tra Stack rong
//int isEmpty()
//{
//	if(sp==NULL)
//		return 1;
//	return 0;
//}
//////Chuyen doi gia tri thap phan sang nhi phan 
////int Convert(int so)
////{
////	init(A,sp);
////	int np=0;
////	while(so!=0)
////	{
////		int du=so%2;
////		if(Push(A,sp,du))
////			so/=2;
////		else
////			break;
////	}
////	while(!isEmpty(A,sp))
////	{
////		int x;
////		if(Pop(A,sp,x))
////			np=np*10+x;
////		else
////			break;
////	}
////	return np;
////}
//void Output()
//{
//	Node*p=new Node;
//	p=sp;
//	while(p!=NULL)
//	{
//		cout <<p->info<<endl;
//		p=p->link;
//	}
//	cout <<endl;
//}
//int Convert(int so)
//{
//	init();
//	int np=0;
//	while(so!=0)
//	{
//		int du=so%2;
//		Push(du);
//			so/=2;
//	}
//	while(!isEmpty())
//	{
//		int x;
//		if(Pop(x))
//			np=np*10+x;
//		else
//			break;
//	}
//	return np;
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
//			 <<"\t5.Doi mot so thap phan sang nhi phan\n"
//			 <<"\t6.Xuat danh sach\n"
//			  <<"----------------------------------\n"
//			 <<"Xin moi nhap lua chon cua ban: ";
//		cin >>chon;
//		switch(chon)
//		{
//		case 1:
//			init();
//			cout <<"Khoi tao dnah sach thanh cong!\n";
//			break;
//		case 2: 
//			if(isEmpty()==1)
//				cout <<"Stack rong!\n";
//			else
//				cout <<"Stack khong rong!\n";
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
//				cout <<"Stack rong!\n";
//			break;
//		case 5:
//			int tp;
//			cout <<"Nhap gia tri thap phan: ";
//			cin >>tp;
//			cout <<"Gia tri nhi phan tuong ung la: "<<Convert(tp)<<endl;
//			break;
//		case 6:
//			cout <<"Cac phan tu trong stack la: \n";
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