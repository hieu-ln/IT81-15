//# include <iostream>
//using namespace std;
//# define MAX 100
//int a[MAX];
//int n;
//void input (int a[], int n)
//{
//	for (int i=0; i<n; i++)
//	{
//		cout<<"nhap a["<<i<<"] = ";
//		cin>>a[i];
//	}
//}
//void output (int a[], int n)
//{
//	for (int i=0; i<n; i++)
//	cout<<a[i]<<endl;
//}
//int search (int a[], int n, int x)
//{
//	int i = 0;
//	while ( (i<n) && (a[i] != x) )
//		i++;
//	if (i==n)
//		return -1; 
//	return i; 
//}
//int insert_last (int a[], int &n, int x)
//{
//	if (n < MAX)
//	{	a[n] = x;
//		n++;
//		return 1;
//	}
//	return 0;
//}
//int delete_last (int a[], int &n)
//{
//	if (n > 0)
//	{	n--;
//		return 1;
//	}
//	return 0;
//}
//int Delete(int a[], int &n, int i)
//{
//	if (i>=0 && i < n)
//	{
//		for (int j=i; j<n-1; j++)
//			a[j] = a[j+1];
//		n--;
//		return 1;
//	}
//	return 0;
//}
//int SearchAndDelete (int a[], int &n, int x)
//{
//	for (int i = 0; i < n; i++)
//	{	if ( a[i] == x)
//		{
//			Delete (a, n, i);
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int chon;
//	char tt;
//	do{
//		cout << "1. Khai bao"
//			<< "\n2. Nhap danh sach"
//			<< "\n3. Xuat danh sach"
//			<< "\n4. Tim kiem phan tu"
//			<< "\n5. Them cuoi danh sach"
//			<< "\n6. Xoa cuoi danh sach"
//			<< "\n7. Xoa tai vi tri bat ki"
//			<< "\n8. Tim va xoa"
//			<< "\nNhap chon: ";
//		cin >> chon;
//		switch(chon)
//		{
//		case 1:
//			cout << "Khai bao cau truc danh sach thanh cong! ";
//			break;
//		case 2:
//			cout << "Nhap n = ";
//			cin >> n;
//			cout << "Nhap danh sach:";
//			input (a,n);
//			break;
//		case 3:
//			cout << "Danh sach da nhap\n";
//			output(a,n);
//			break;
//		case 4:
//			int y;
//			cout << "Nhap phan tu muon tim: ";
//			cin >> y;
//			if (search (a, n, y) == 0)
//				cout << "Khong tim thay phan tu " << y << "\n";
//			else
//				cout << "Tim thay phan tu co gia tri " << y << endl;
//			break;
//		case 5:
//			int x;
//			cout << "Nhap phan tu muon them vao: ";
//			cin >> x;
//			if (insert_last (a, n, x) == 0)
//				cout << "Danh sach da day khong the them\n";
//			else
//			{
//				cout << "Da them vao danh sach phan tu " << x << endl;
//				cout << "Danh sach sau khi them : ";
//				output (a, n);
//			}
//			break;
//		case 6:
//			if (delete_last (a, n) == 1)
//			{
//				cout << "Da xoa phan tu " << x << endl;
//				cout << "Danh sach sau khi xoa : ";
//				output (a, n);
//			}
//			else
//				cout << "Danh sach rong\n";
//			break;
//		case 7:
//			int i;
//			cout << "Nhap vi tri phan tu muon xoa: ";
//			cin >> i;
//			if (Delete (a, n, i) == 1)
//			{
//				cout << "Da xoa phan tu " << x << endl;
//				cout << "Danh sach sau khi xoa : ";
//				output (a, n);
//			}
//			else
//				cout << "Danh sach rong\n";
//			break;
//		case 8:
//			cout << "Nhap phan tu muon tim: ";
//			cin >> x;
//			if (SearchAndDelete (a, n, i) == 1)
//			{
//				cout << "Da xoa phan tu " << x << endl;
//				cout << "Danh sach sau khi xoa : ";
//				output (a, n);
//			}
//			else
//				cout << "Danh sach rong\n";
//			break;
//		default:
//			break;
//		}
//		cout << "Ban co muon tiep tuc khong? (Y/N)";
//		cin >> tt;
//		system ("cls");
//	} while (tt == 'Y' || tt == 'y');
//	system ("pause");
//	return 0;
//}