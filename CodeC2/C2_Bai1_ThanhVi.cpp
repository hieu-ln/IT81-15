//#include <iostream>
//using namespace std;
//#define MAX 100
//int A[MAX];
//int n;
//void Nhap(int A[],int n);
//void Xuat(int A[],int n);
//int Tim(int A[],int n,int t);
//int ThemCuoi(int A[],int &n,int x);
//int XoaCuoi(int A[],int &n);
//int Xoa(int A[],int &n,int vti);
//int TimXoa(int A[],int &n, int x);
//int main()
//{
//	char tt;
//	int chon,x,t;
//	do
//	{
//		cout <<"Nhap vao gia tri nguyen: ";
//		cin >>n;
//		if(n<=0||n>MAX)
//			cout <<"Nhap sai.Nhap lai!\n";
//	}while(n<=0||n>MAX);
//	Nhap(A,n);
//	do
//	{
//		system("cls");
//		cout <<"===============MENU===============\n";
//		cout <<"1.Tim mot phan tu trong danh sach.\n";
//		cout <<"2.Them mot phan tu vao cuoi danh sach.\n";
//		cout <<"3.Xoa phan tu cuoi danh sach.\n";
//		cout <<"4.Xoa phan tu tai vi tri bat ki.\n";
//		cout <<"5.Tim mot phan tu trong danh sach va xoa phan tu do.\n";
//		cout <<"6.In danh sach ra man hinh.\n";
//		cout <<"7.Thoat chuong trinh.\n";
//		cout <<"==================================\n";
//		cout <<"Moi nhap lua chon cua ban: ";
//		cin >>chon;
//		switch(chon)
//		{
//		case 1:
//			cout <<"Nhap phan tu can tim: ";
//			cin >>x;
//			t=Tim(A,n,x);
//			if(t!=1)
//				cout <<"Gia tri "<<x<<" duoc tim thay tai vi tri "<<t<<"\n";
//			else
//				cout <<"Gia tri "<<x<<" khong ton tai trong mang!\n";
//			break;
//		case 2:
//			cout <<"Nhap phan tu can them: ";
//			cin >>x;
//			t=ThemCuoi(A,n,x);
//			if(t==1)
//				cout <<"Gia tri "<<x<<" duoc them thanh cong!\n";
//			else
//				cout <<"Gia tri "<<x<<" them khong thanh cong!\n";
//			break;
//		case 3:
//			t=XoaCuoi(A,n);
//			if(t==1)
//				cout <<"Gia tri cuoi duoc xoa thanh cong!\n";
//			else
//				cout <<"Gia tri cuoi xoa khong thanh cong!\n";
//			break;
//		case 4:
//			int vtx;
//			cout <<"Nhap vao vi tri can xoa: ";
//			cin >>vtx;
//			t=Xoa(A,n,vtx);
//			if(t==1)
//				cout <<"Gia tri "<<x<<" duoc xoa thanh cong!\n";
//			else
//				cout <<"Gia tri "<<x<<" xoa khong thanh cong!\n";
//			break;
//		case 5:
//			cout <<"Nhap gia tri can tim de xoa: ";
//			cin >>x;
//			t=TimXoa(A,n,x);
//			if(t==1)
//				cout <<"Gia tri "<<x<<" duoc xoa thanh cong!\n";
//			else
//				cout <<"Gia tri "<<x<<" xoa khong thanh cong!\n";
//			break;
//		case 6:
//			cout <<"Mang dang luu tru la: ";
//			Xuat(A,n);
//			break;
//		case 7:
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
//void Nhap(int A[],int n)
//{
//	for(int i=0;i<n;i++)
//		A[i]=rand()%100;
//}
//void Xuat(int A[], int n)
//{
//	for(int i=0;i<n;i++)
//		cout <<" "<<A[i];
//	cout <<endl;
//}
//int Tim(int A[],int n,int t)
//{
//	int i=0;
//	while((i<n)&&(A[i]!=t))
//		i++;
//	if(i==n)
//		return -1;
//	return i;
//}
//int ThemCuoi(int A[],int &n,int x)
//{
//	if((n>=0)&&(n<MAX-1))
//	{
//		A[n]=x;
//		n++;
//		return 1;
//	}
//}
//int XoaCuoi(int A[],int &n)
//{
//	if(n>0)
//	{
//		n--;
//		return 1;
//	}
//	return 0;
//}
//int Xoa(int A[], int &n,int vti)
//{
//	if(vti >=0 && vti <n)
//	{
//		for(int i=vti;i<n-1;i++)
//			A[i]=A[i+1];
//		n--;
//		return 1;
//	}
//	return 0;
//}
//int TimXoa(int A[], int &n,int x)
//{
//	if(Tim(A,n,x)==-1)
//		return 0;
//	if(Xoa(A,n,Tim(A,n,x)))
//		return 1;
//}
