#include <iostream>
#include <fstream>
using namespace std;
#define MAX 20
int a[MAX][MAX];
int n;
char vertex[MAX];
void init()
{
	n = 0;
}
void input()
{
	cout << "Nhap so dinh cua do thi: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ten dinh:";
		cin >> vertex[i];
		cout << "Nhap vao dong thu " << i+1 << ":"; 
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
}

void InputGraphFromFile()
{
	ifstream inFile;
	inFile.open("MT.txt");
	if (inFile.is_open())
	{
		inFile >> n;
		for (int i = 0; i < n; i++)
			inFile >> vertex[i];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				inFile >> a[i][j];
		cout << "Doc file thanh cong!\n";
		inFile.close();
	}
	else
		cout << "Mo file that bai!\n";
}
void output()
{
	cout << "Ma tran trong so: " << endl;
	cout << " | ";
	for (int i = 0; i < n; i++)
		cout << vertex[i] << " ";
	cout << endl;
	for (int i = 1; i <= 3 + n + n; i++)
		cout << "-";
	cout << endl;
	for (int i = 0; i < n; i++)
	{	
		cout << vertex[i] << "| ";
		for (int j = 0; j < n; j++)	
			cout << a[i][j] << " ";
		cout << endl;
	}
}

	//Thuat giai prim
int E1[MAX];
int E2[MAX];
int wE[MAX];
int nE = 0;

int T1[MAX];
int T2[MAX];
int wT[MAX];
int nT = 0;

int TonTai (int d, int D[], int nD)
{
	for (int i = 0; i < nD; i++)
		if (D[i] == d)
			return 1;
	return 0;
}

void xoaViTri (int i)
{
	for (int j = i; j < nE; j++)
	{
		E1[j] = E1[j+1];
		E2[j] = E2[j+1];
		wE[j] = wE[j+1];
	}
	nE--;
}

void xoaCanh (int u, int v)
{
	for (int i = 0; i < nE; i++)
		if (E1[i] == u && E2[i] == v)
		{
			xoaViTri(i);
			break;
		}
}
void prim (int s)
{
	int u = s, min, i, d1, d2;
	while (nT < n-1)
	{
		for (int v = 0; v < n; v++)
			if (a[u][v] != 0)
				if (TonTai( v, T2, nT) == 0)
				{
					E1[nE] = u;
					E2[nE] = v;
					wE[nE] = a[u][v];
					nE++;
				}
		for ( i = 0; i < nE; i++)
			if (TonTai(E2[i], T2, nT) == 0)
			{
				min = wE[i];
				d1 = E1[i];
				d2 = E2[i];
				break;
			}
		for (i = 0; i < nE; i++)
			if (TonTai(E2[i], T2, nT) == 0)
				if (min > wE[i])
				{
					min = wE[i];
					d1 = E1[i];
					d2 = E2[i];
				}
		T1[nT] = d1;
		T2[nT] = d2;
		wT[nT] = a[d1][d2];
		a[d1][d2] = 0;
		a[d2][d1] = 0;
		nT++;
		xoaCanh(d1, d2);
		u = d2;
	}
}

void outputTS()
{
	int tong = 0;
	for (int i = 0; i < nT; i++)
	{
		cout << endl << "(" << T1[i] << "," << T2[i] << ") = " << wT[i];
		tong += wT[i];
	}
	cout << "\nTong = " << tong << endl;
}  

	//Thuat giai kruskal
void kruskal()
{
	for (int i = 0; i < nE; i++)
	{
		if (TonTai(E1[i], T1, nT) == 1 && TonTai(E2[i], T2, nT) == 1)
			continue;
		if (TonTai(E1[i], T1, nT) == 1 && TonTai(E2[i], T1, nT) == 1)
			continue;
		T1[nT] = E1[i];
		T2[nT] = E2[i];
		wT[nT] = wE[i];
		nT++;
		if (nT == n-1)
			break;
	}
}

void taoE()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] != 0)
			{
				E1[nE] = i;
				E2[nE] = j;
				wE[nE] = a[i][j];
				a[i][j] = 0;
				a[j][i] =0;
				nE++;
			}
}

void sapxepE()
{
	for (int i = 0; i < nE; i++)
		for (int j = i+1; j < nE; j++)
			if (wE[i] > wE[j])
			{
				swap(wE[i], wE[j]);
				swap(E1[i], E2[j]);
				swap(E2[i], E2[j]);
			}
}

	//Thuat giai Kruskal cai tien

int main()
{
	int chon;
	char tt;
	do{
		system("cls");
		cout << "1. Khoi tao ma tran"
			<< "\n2. Nhap ma tran"
			<< "\n3. Xuat ma tran"
			<< "\n4. Tim cay khung toi thieu bang thuat giai Prim"
			<< "\n5. Tim cay khung toi thieu bang thuat giai Krusal"
			<< "\n6. Tim cay khung toi thieu bang thuat giai Krusal cai tien"
			<< "\nNhap chon: ";
		cin >> chon;
		switch(chon)
		{
		case 1:
			cout << "Khoi tao thanh cong!\n";
			init();
			break;
		case 2:
			/*input();*/
			InputGraphFromFile();
			break;
		case 3:
			output();
			break;
		case 4:
			int s;
			cout << "Nhap dinh bat dau: ";
			cin >> s;
			prim(s);
			outputTS();
			break;
		case 5:
			taoE();
			kruskal();
			outputTS();
			break;
		case 6:
			sapxepE();
			taoE();
			kruskal();
			outputTS();
			break;
		}
		cout << "ban co muon tiep tuc khong?(y/n)";
		cin >> tt;
	} while (tt == 'y' || tt == 'Y');
	system("pause");
	return 0;
}