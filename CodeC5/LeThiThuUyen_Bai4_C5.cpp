
#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

#define MAX 20
int A[MAX][MAX];
int n;
char vertex[MAX];

struct Node
{
	int info;
	Node *link;
};
Node *front, *rear;
Node *sp;

 //stack
void initStack()
{
	sp = NULL;
}
int isEmptyS()
{
	if (sp == NULL)
		return 1;
	return 0;
}
void pushS(int x)
{
	Node *p;
	p = new Node;
	p->info = x;
	p->link = sp;
	sp = p;
}
int popS(int &x)
{
	if (sp != NULL)
	{
		Node *p = sp;
		x = p->info;
		sp = p->link;
		delete p;
		return 1;
	}
	return 0;
}

	//Queue
void initQ()
{
	front = NULL;
	rear = NULL;
}
int isEmptyQ()
{
	if (front == NULL)
		return 1;
	return 0;
}
void pushQ (int x)
{
	Node *p;
	p = new Node;
	p->info = x;
	p->link = NULL;
	if (rear == NULL)
		front = p;
	else
		rear->link = p;
	rear = p;
}
int popQ (int &x)
{
	if (front != NULL)
	{
		Node *p = front;
		front = p ->link;
		x = p->info;
		if (front == NULL)
			rear = NULL;
		delete p;
		return 1;
	}
	return 0;
}

void initGraph()
{
	n = 0;
}
void inputGraphFromText()
{
	string line;
	ifstream myfile ("ma tran ke1.txt");
	if (myfile.is_open())
	{
		myfile >> n;
		for (int i = 0; i < n; i++)
			myfile >> vertex[i];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				myfile >> A[i][j];
		}
	}
}

	//Nhap ma tran ke
void inputGraph()
{
	cout << "Nhap so dinh do thi n: ";
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cout << "Nhap vao dong thu " << i+1 << ": ";
		for (int j=0; j<n; j++)
			cin >> A[i][j];
	}
}
	//Xuat ma tran ke
void outputGraph()
{
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
}
void output (int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << vertex [a[i]] << " ";
}

	//Duyet do thi theo chieu rong
int C[100], bfs[100];
int nbfs = 0;
void initC()
{
	for (int i=0; i<n; i++)
		C[i] = 1;
}
void BFS(int v)
{
	int w, p;
	pushQ(v);
	C[v] = 0;
	while(front != NULL)
	{
		popQ(p);
		bfs[nbfs] = p;
		nbfs++;
		for (w=0; w<n; w++)
			if (C[w] && A[p][w] == 1)
			{
				pushQ(w);
				C[w] = 0;
			}
	}
}
	//Duyet do thi theo chieu sau
int dfs[100];
int ndfs = 0;
void DFS (int s)
{
	pushS(s);
	dfs[ndfs] = s;
	ndfs++;
	C[s] = 0;
	int v = -1, u = s;
	while (isEmptyS() == 0)
	{
		if (v == n)
			popS(u);
		for (v=0; v < n; v++)
			if (A[u][v] != 0 && C[v] == 1)
			{
				pushS(u);
				pushS(v);
				dfs[ndfs] = v;
				ndfs++;
				C[v] = 0;
				u=v;
				break;
			}
	}
}
	//Dung BFS tim X tren do thi
void Search_by_BFS (int x, int v)
{
	int w, p;
	pushQ(v);
	C[v] = 0;
	while (front != NULL)
	{
		popQ(p);
		if (x == p)
		{
			cout << x << "ton tai";
			return;
		}
		for (w = 0; w < n; w++)
			if (C[w] && A[p][w] == 1)
			{
				pushQ(w);
				C[w] = 0;
			}
	}
}
int main()
{
	int a[MAX];
	int b[MAX];
	int choice, sp, sp_b, x, i, y;
	system("cls");
	cout << "0. Nhap ma tran ke tu file"
		<< "\n1. Nhap ma tran ke"
		<< "\n2. Xuat ma tran ke"
		<< "\n3. Duyet do thi theo chieu rong"
		<< "\n4. Duyet do thi theo chieu sau"
		<< "\n5. Kiem tra x co ton tai trong do thi khong"
		<< "\n6. Thoat"
		<< "\nBan chon: ";
	cin >> choice;
	switch (choice)
	{
	case 0:
		inputGraphFromText();
		cout << "Ban vua nhap ma tran ke tu file: \n";
		outputGraph();
		break;
	case 1:
		inputGraph();
		break;
	case 2:
		cout << "\nXuat ma tran: ";
		outputGraph();
		break;
	case 3:
		initQ();
		initC();
		cout << "Nhap dinh xuat phat: ";
		cin >> x;
		nbfs = 0;
		BFS(x);
		cout << "Thu tu dinh sau khi duyet BFS:\n";
		break;
	case 4:
		initStack();
		initC();
		cout << "Nhap dinh xuat phat: ";
		cin >> y;
		ndfs = 0;
		BFS(y);
		cout << "Thu tu dinh sau khi duyet DFS:\n";
		break;
	case 5:
		cout << "Nhap vao dinh X";
		cin >> x;
		Search_by_BFS(x, 0);
		break;
	case 6:
		cout << "Tam biet\n";
		break;
	default:
		break;
	system("pause");
	return 0;
}