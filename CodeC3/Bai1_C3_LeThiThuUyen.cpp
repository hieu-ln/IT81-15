//#include <iostream>
//using namespace std;
//#define MAX 100
//int a[MAX];
//int n;
//void input (int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//}
//void output (int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << a[i] << "\t";
//}
//void InsertionSort( int a[], int n)
//{
//	int x,i, j;
//	for (int i = 1; i < n; i++)
//	{
//		x = a[i];
//		j = i-1;
//		while ( j >= 0 && x < a[j])
//		{
//			a[j+1] = a[j];
//			j--;
//		}
//		a[j+1] = x;
//	}
//}
//void SelectionSort (int a[], int n)
//{
//	int min_pos, i , j;
//	for (int i = 0; i< n-1; i++)
//	{
//		min_pos = i;
//		for (j = i+1; j < n; j++)
//			if (a[j] < a[min_pos])
//				min_pos = j;
//		swap(a[min_pos], a[i]);
//	}
//}
//void BubbleSort( int a[], int n)
//{
//	for (int i = 0; i < n-1; i++)
//		for (int j = n-1; j > i; j--)
//			if (a[j-1] > a[j])
//				swap (a[j], a[j-1]);
//}
//void InterchangeSort( int a[], int n)
//{
//	for (int i = 0; i < n-1; i++)
//		for (int j = i+1; j < n; j++)
//			if (a[i] > a[j])
//				swap (a[i], a[j]);
//}
//void QuickSort(int a[], int l, int r)
//{
//	int x = a[(l+r)/2];
//	int i = l;
//	int j = r;
//	while (i < j)
//	{
//		while (a[i] < x) i++;
//		while ( a[j] > x) j--;
//		if (i <= j)
//		{
//			swap(a[i], a[j]);
//			i++;
//			j--;
//		}
//	}
//	if (l < i)
//		QuickSort(a,l, j);
//	if (i < r)
//		QuickSort(a, i, r);
//}
//void shift(int a[], int i, int n)
//{
//	int j = 2*i + 1;
//	if (j >= n)
//		return;
//	if (j+1 < n)
//		if (a[j] < a[j+1])
//			j++;
//	if (a[i] >= a[j])
//		return;
//	else
//	{
//		int x = a[i];
//		a[i] = a[j];
//		a[j] = x;
//		shift(a, j, n);
//	}
//}
//void HeapSort (int a[], int n)
//{
//	int i = n/2;
//	while (i >= 0)
//	{
//		shift(a, i, n-1);
//	}
//	int r = n-1;
//	while (r > 0)
//	{
//		swap(a[0], a[r]);
//		r--;
//		if (r > 0)
//			shift(a, 0 , r);
//	}
//}
//int Search (int a[], int n, int x)
//{
//	int i = 0;
//	while (i < n && a[i] != x)
//		i++;
//	if (i < n)
//		return i;
//	return -1;
//}
//int BinarySearch (int a[], int n, int x)
//{
//	int l = 0, r = n-1, mid;
//	while (l <= r)
//	{
//		mid = (l+r)/2;
//		if (a[mid] == x)
//			return mid;
//		if (x > a[mid])
//			l = mid+1;
//		else
//			r = mid-1;
//	}
//	return -1;
//}
//int main()
//{
//	int chon;
//	char tt;
//	do{
//		cout << "1. Khai bao cau truc"
//			<< "\n2. Nhap danh sach"
//			<< "\n3. Xuat danh sach"
//			<< "\n4. Sap xep tang dan bang thuat toan InsertionSort"
//			<< "\n5.  Sap xep tang dan bang thuat toan SelectionSort"
//			<< "\n6. Sap xep tang dan bang thuat toan InterchangeSort"
//			<< "\n7. Sap xep tang dan bang thuat toan BubbleSort"
//			<< "\n8. Sap xep tang dan bang thuat toan QuickSort"
//			<< "\n9. Sap xep tang dan bang thuat toan HeapSort"
//			<< "\n10. Tim kiem phan tu bang pp tim kiem tuan tu"
//			<< "\n11. Tim kiem phan tu bang pp tim kiem nhi phan"	
//			<< "\nNhap chon: ";
//		cin >> chon;
//		switch (chon)
//		{
//		case 1:
//			cout << "Khai bao cau truc danh sach thanh cong!\n";
//		case 2:
//			cout << "Nhap n = " ;
//			cin >> n;
//			cout << "Nhap danh sach: \n";
//			input(a, n);
//		case 3:
//			cout << "Danh sach: ";
//			output(a, n);
//		case 4:
//			InsertionSort (a, n);
//			cout << "Danh sach sau khi sap xep tang dan bang thuat toan InsertionSort: ";
//			output(a, n);
//		case 5:
//			SelectionSort (a, n);
//			cout << "Danh sach sau khi sap xep tang dan bang thuat toan SelectionSort: ";
//			output(a, n);
//		case 6:
//			InterchangeSort (a, n);
//			cout << "Danh sach sau khi sap xep tang dan bang thuat toan InterchangeSort: ";
//			output(a, n);
//		case 7:
//			BubbleSort (a, n);
//			cout << "Danh sach sau khi sap xep tang dan bang thuat toan BubbleSort: ";
//			output(a, n);
//		case 8:
//			QuickSort (a, n);
//			cout << "Danh sach sau khi sap xep tang dan bang thuat toan QuickSort: ";
//			output(a, n);
//		case 9:
//			HeapSort (a, n);
//			cout << "Danh sach sau khi sap xep tang dan bang thuat toan HeapSort: ";
//			output(a, n);
//		case 10:
//			cout << "Nhap gia tri phan tu ban muon tim: ";
//			int x;
//			cin >> x;
//			if (Search (a, n, x) == -1)
//				cout << "Khong tim thay phan tu co gia tri " << x << " trong danh sach\n";
//			else
//				cout << "Tim thay phan tu co gia tri " << x << " trong danh sach\n";
//		case 11:
//			cout << "Nhap gia tri phan tu ban muon tim: ";
//			int x;
//			cin >> x;
//			if (BinarySearch (a, n, x) == -1)
//				cout << "Khong tim thay phan tu co gia tri " << x << " trong danh sach\n";
//			else
//				cout << "Tim thay phan tu co gia tri " << x << " trong danh sach\n";
//		}
//		system("clr");
//		cout << "Ban co muon tiep tuc khong? (y/n)";
//		cin >> tt;
//	} while (tt == 'Y' || tt == 'y');
//	system ("pause");
//	return 0;
//}