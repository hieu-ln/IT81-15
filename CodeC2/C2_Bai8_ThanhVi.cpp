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
////Cuyen doi so thap phan sang he bat ki
//void Convert(int so,int cosocandoi)
//{
//	init(A,sp);
//	int np=0;
//	while(so!=0)
//	{
//		int du=so%cosocandoi;
//		if(Push(A,sp,du))
//			so=so/cosocandoi;
//		else
//			break;
//	}
//	while (!isEmpty(A,sp) )
//	{
//		int np;
//		int x;
//		Pop(A,sp,x);
//		if (x < 10)
//		{
//			cout <<x;
//
//		}
//		else
//		{
//			if (x == 10)
//			{
//				cout << "A";
//			}
//			else if (x == 11)
//			{
//				cout << "B";
//			}
//			else if (x == 12)
//			{
//				cout << "C";
//			}
//			else if (x == 13)
//			{
//				cout << "D";
//			}
//			else if (x == 14)
//			{
//				cout << "E";
//			}
//			else if (x == 15)
//			{
//				cout << "F";
//			}
//			
//		}
//	}
//}
//int main()
//{
//	int x,t,chon;
//	init(A,sp);
//	char tt;
//	int hethapphan;
//	int cosocandoi;
//	do
//	{
//		system("cls");
//		cout << "Nhap gia tri he thap phan(10)can chuyen: ";
//		cin >> hethapphan;
//		cout << "Nhap co so can chuyen:  ";
//		cin >> cosocandoi;
//		cout << "Gia tri tuong ung he "<<cosocandoi<<" cua he 10 la:";
//		Convert(hethapphan,cosocandoi);
//		cout << endl;
//		cout <<"Ban co muon tiep tuc: ";
//		cin >>tt;
//	}while(tt=='y'||tt=='Y');
//	cout << endl;
//	system("pause");
//	return 0;
//}