//#include <iostream>
//#define MAX 100
//using namespace std;
//int A[MAX];
//int sp;
////Khoi tao stack rong
//void init(int A[], int &sp)
//{
//	sp=-1;
//}
////Them mot phan tu vao stack
//int Push(int A[],int &sp,int x)
//{
//	if(sp<MAX-1)
//	{
//		A[++sp]=x;
//		return 1;
//	}
//	return 0;
//}
////Xoa mot phan tu trong stack
//int Pop(int A[],int &sp, int &x)
//{
//	if(sp!=-1)
//	{
//		x=A[sp--];
//		return 1;
//	}
//	return 0;
//}
////Kiem tra stack rong
//int isEmpty(int A[],int sp)
//{
//	if(sp==-1)
//		return 1;
//	return 0;
//}
////Kiem tra Stack day
//int isFull(int A[], int sp)
//{
//	if(sp==MAX-1)
//		return 1;
//	return 0;
//}
////Xuat Danh Sach
//void Output(int A[],int sp)
//{
//	for(int i=sp;i>=0;i--)
//		cout <<A[i]<<endl;
//}
//int main()
//{
//	int x,t,chon;
//	init(A,sp);
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
//			init(A,sp);
//			cout <<"Khoi tao dnah sach thanh cong!\n";
//			break;
//		case 2: 
//			if(isEmpty(A,sp)==1)
//				cout <<"Stack rong!\n";
//			else
//				cout <<"Stack khong rong!\n";
//			break;
//		case 3:
//			if(isFull(A,sp)==1)
//				cout <<"Stack chua day!\n";
//			else
//				cout <<"Stack da day!\n";
//			break;
//		case 4:
//			cout <<"Nhap gia tri muon them: ";
//			cin >>x;
//			t=Push(A,sp,x);
//			if(t==1)
//				cout <<"Them vao danh sach thanh cong!\n";
//			else
//				cout <<"Stack day, khong the them!\n";
//			break;
//		case 5:
//			t=Pop(A,sp,x);
//			if(t==1)
//				cout <<"Xoa phan tu "<<x<<" thanh cong!\n";
//			else
//				cout <<"Stack rong!\n";
//			break;
//		case 6:
//			cout <<"Cac phan tu trong stack la: \n";
//			Output(A,sp);
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