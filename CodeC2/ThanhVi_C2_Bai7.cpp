//#include <iostream>
//using namespace std;
//#define MAX 100
//int A[MAX];
//int front,rear;
////Khoi tao Queue rong
//void init(int A[],int &front,int &rear)
//{
//	front=-1;
//	rear=-1;
//}
////Them 1 phan tu bang phuong phap tinh tien
//int Push1(int A[], int &front, int &rear, int x)
//{
//	if(rear-front==MAX-1)
//		return 0;
//	else
//	{
//		if(front==-1)
//			front=0;
//		if(rear==MAX-1)
//		{
//			for(int i=front;i<=rear;i++)
//				A[i-front]=A[i];
//			rear=MAX-1-front;
//			front=0;
//		}
//		A[++rear]=x;
//		return 1;
//	}
//}
////Lay 1 phan tu bang phuong phap vong
//int Pop(int A[],int &front,int &rear, int &x)
//{
//	if(front==-1)
//		return 0;
//	else
//	{
//		x=A[front++];
//		if(front >rear)
//		{
//			front=-1;
//			rear=-1;
//		}
//		return 1;
//	}
//}
////Kiem tra Queue day
//int isFull(int A[], int front, int rear)
//{
//	if(rear-front==MAX-1)
//		return 1;
//	return 0;
//}
////Kiem tra Queue rong
//int isEmpty(int A[],int front)
//{
//	if(front==-1)
//		return 1;
//	return 0;
//}
//void Output(int A[], int &front,int &rear)
//{
//	for(int i=front;i<=rear;i++)
//		cout <<A[i]<<endl;
//}
//int main()
//{
//	int x,t,chon;
//	init(A,front,rear);
//	char tt;
//	do
//	{
//		system("cls");
//		cout <<"\t\tMENU\n"
//			 <<"\t1.Khoi tao\n"
//			 <<"\t2.Kiem tra rong\n"
//			 <<"\t3.Kiem tra day\n"
//			 <<"\t4.Them mot phan tu\n"
//			 <<"\t5.Xoa mot phan tu\n"
//			 <<"\t6.Xuat danh sach\n"
//			  <<"----------------------------------\n"
//			 <<"Xin moi nhap lua chon cua ban: ";
//		cin >>chon;
//		switch(chon)
//		{
//		case 1:
//			init(A,front,rear);
//			cout <<"Khoi tao danh sach thanh cong!\n";
//			break;
//		case 2: 
//			if(isEmpty(A,front)==1)
//				cout <<"Queue rong!\n";
//			else
//				cout <<"Queue khong rong!\n";
//			break;
//		case 3:
//			if(isFull(A,front,rear)==1)
//				cout <<"Queue day!\n";
//			else
//				cout <<"Queue chua day!\n";
//			break;
//		case 4:
//			cout <<"Nhap gia tri muon them: ";
//			cin >>x;
//			t=Push1(A,front,rear,x);
//			if(t==1)
//				cout <<"Them vao danh sach thanh cong!\n";
//			else
//				cout <<"Queue day, khong the them!\n";
//			break;
//		case 5:
//			t=Pop(A,front,rear,x);
//			if(t==1)
//				cout <<"Xoa phan tu "<<x<<" thanh cong!\n";
//			else
//				cout <<"Queue rong!\n";
//			break;
//		case 6:
//			cout <<"Cac phan tu trong queue la: \n";
//			Output(A,front,rear);
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