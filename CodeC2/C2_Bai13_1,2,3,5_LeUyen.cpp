//#include <iostream>
//using namespace std;
//# define MAX 100
//int a[MAX];
//int n;
//# define MAX 100
//int b[MAX];
//int m;
//void input (int a[], int n)
//{
//	cout << "Nhap cac he so da thuc bac " << n << " theo trat tu he so 0 tro di: ";
//	for (int i = 0; i < n+1; i++)
//		cin >> a[i];
//}
//int mu (int i)
//{
//	if (i != 1 && i != -1)
//		cout << i;
//	return i;
//}
//void output (int a[], int n)
//{
//	cout << "Da thuc vua nhap:";
//	for ( int i = n; i >= 0; i--)
//		if (a[i] > 0 && a[i] != 0)
//			if (i == 0)
//				cout << " + " << a[i];
//			else
//			{
//				if (i != n)
//				{
//					cout << " + "; mu(a[i]); cout << " x ";
//				}
//				else
//				{
//					cout << " "; mu(a[i]); cout << " x ";
//				}
//				if (i > 1)
//					cout << "^" << i;
//			}
//		else if (a[i] < 0 && a[i] != 0)
//			if (i == 0)
//				cout << " + " << a[i];
//			else
//			{
//				if (i != n)
//				{
//					cout << " - " << mu(-(a[i])) << " x ";
//				}
//				else
//				{
//					cout << " -" << mu(-(a[i])) << " x ";
//				}
//				if (i > 1)
//					cout << "^" << i;
//			}
//	cout << endl;
//}
//void tong (int a[], int b[], int c[])
//{
//	for (int i = n+1; i >= 0; i--)
//	{	for (int j = m+1; j >= 0; j--)
//		{
//			if (i = j)
//				mu(c[i]) = mu(a[i]) + mu(b[i])
//	}
//}
//int main()
//{
//	cout << "Nhap bac da thuc: ";
//	cin >> n;
//	input (a,n);
//	output(a, n);
//	cout << "Nhap bac da thuc: ";
//	cin >> m;
//	input (b,m);
//	output(b, m);
//	tong (a, b);
//	system("pause");
//	return 0;
//}