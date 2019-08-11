//#include <iostream>
//#include <fstream>
//using namespace std;
//#define max 20
//int a[max][max];
//int n;
//char vertex[max];
// tap etemp
//int e1[max];
//int e2[max];
//int we[max];
//int ne = 0;
// tap t chua ket qua 
//int t1[max];
//int t2[max];
//int wt[max];
//int nt = 0;
//void inputfromtext()
//{
//	ifstream ifile;
//	ifile.open("C:/Users/Admin/Desktop/dothi.txt", ios::in);
//	if (ifile.is_open())
//	{
//		ifile >> n;
//		for (int i = 0; i < n; i++)
//			ifile >> vertex[i];
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//				ifile >> a[i][j];
//		ifile.close();
//	}
//}
//void output()
//{
//	cout << "\n  ";
//	for (int i = 0; i < n; i++)
//		cout << vertex[i] << "  ";
//	cout << "\n  ";
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << a[i][j];
//			if (a[i][j] >= 10)
//				cout << " ";
//			else
//				cout << "  ";
//		}
//		cout << endl << "  ";
//	}
//
//}
//void create_array()
//{
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			if (a[i][j] != 0)
//			{
//				e1[ne] = i;
//				e2[ne] = j;
//				we[ne] = a[i][j];
//				ne++;
//				a[i][j] = a[j][i] = 0;
//			}
//}
//int existed(int t, int d[], int nd)
//{
//	for (int i = 0; i < nd; i++)
//		if (d[i] == t)
//			return 1;
//	return 0;
//}
//void swap(int i, int j)
//{
//	int trung = j;
//	i = j;
//	j = trung;
//}
//void sapxep()
//{
//	for(int i = 0 ; i<n ;i++)
//		for (int j = i + 1; j < n; j++)
//		{
//			swap(we[i], we[j]);
//			swap(e1[i], e1[j]);
//			swap(e2[i], e2[j]);
//		}
//}
//void krusal()
//{
//	for (int i = 0; i < ne; i++)
//	{
//		if (existed(e1[i], t1, nt) == 1 && existed(e2[i], t2, nt) == 1)
//		{
//			continue;
//		}
//		if (existed(e1[i], t2, nt) == 1 && existed(e2[i], t1, nt) == 1)
//		{
//			continue;
//		}
//		t1[nt] = e1[i];
//		t2[nt] = e2[i];
//		wt[nt] = we[i];
//		nt++;
//		if (nt == n - 1)
//			break;
//	}
//
//
//}
//void main()
//{
//	inputfromtext();
//	output();
//	create_array();
//	sapxep();
//	krusal();
//	for (int i = 0; i < nt; i++)
//		cout << wt[i];
//	system("pause");
//}