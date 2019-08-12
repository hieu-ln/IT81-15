#include<iostream>
#include<fstream>
#define max 100
int a[max][max];
int n;
using namespace std;
void inputfromtext()
{
	ifstream ifile;
	ifile.open("C:/Users/Anh Tuan/Desktop/do_thi.txt", ios::in);
	if (ifile.is_open())
	{
		ifile >> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				ifile >> a[i][j];
		ifile.close();
	}
}
void output()
{
	
	cout << endl << "  ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << "  ";
		cout << endl << "  ";
	}
}
// queue
struct node {
	int info;
	node *link;
};
node *front = NULL, *rear = NULL;
void pushq(int x)
{
	node *p;
	p = new node;
	p->info = x;
	p->link = NULL;
	if (rear == NULL)
		front = p;
	else
		rear->link = p;
	rear = p;
}
void pop(int &x)
{
	if (front != NULL)
	{
		node *p;
		p = front;
		x = p->info;
		front = front->link;
		if (front == NULL)
			rear = NULL;
		delete p;

	}
}
int is_empty()
{
	if (front != NULL)
		return 0;
	else return 1;
}
// các hàm và mảng cần cho BFS
int c[100];
int bfs[100];
int nbfs = 0;
void create()
{
	for (int i = 0; i < n; i++)
		c[i] = 1;
}
void BFS(int v)
{
	create();
	int u = v, b;
	pushq(u);
	bfs[nbfs] = u;
	c[u] = 0;
	nbfs++;
	while (front != NULL)
	{
		
		pop(u);
		bfs[nbfs] = u;
		nbfs++;
		for(b= 0 ; b<n;b++)
			if (a[u][b] != 0 && c[b] != 1)
			{
				pushq(b);
				c[b] = 0;

			}
	}
}
// stack
node *sp = NULL;
void pops(int &x)
{
	if (sp != NULL)
	{
		node *p = sp;
		x = p->info;
		sp = sp->link;
		delete p;
	}
}
void pushs(int x)
{
	node *p;
	p = new node;
	p->info = x;
	p->link = sp;
	sp = p;
}
// các  mảng cần cho DFS
int dfs[100];
int ndfs = 0;
void DFS(int s)
{
	create();
	int u = s,w;
	pushs(u);
	dfs[ndfs] = u;
	ndfs++;
	c[u] = 0;
	w=-1;
	while (sp != NULL)
	{
		if (w == n)
			pops(u);
		for(w=0;w<n;w++)
			if (a[u][w] != 0 && c[w] != 1)
			{
				pushs(u);
				pushs(w);
				c[w] = 0;
				dfs[ndfs] = w;
				ndfs++;
				u = w;
				break;
			}
	}
}
//DFS de quy
void DFS_dequy(int s)
{
	int u = s, w;
	pushs(u);
	c[u] = 0;
	dfs[ndfs] = u;
	ndfs++; w = -1;
	if (sp==NULL)
		return;
	else
	{
		int u = s, w;
		pushs(u);
		dfs[ndfs] = u;
		ndfs++;
		c[u] = 0;
		w = -1;
		if (w == n)
			pops(u);
		for (w = 0; w < n; w++)
			if (a[u][w] != 0 && c[w] != 1)
			{
				pushs(w);
				u = w;
				break;
			}
		DFS_dequy(u);
	}

}
int find_x(int x)
{
	BFS(x);
	for (int i = 0; i < nbfs; i++)
		if (bfs[i] == x)
			return 1;
	return 0;
}
void main()
{
	inputfromtext();
	output();
	BFS(2);
	for (int i = 0; i < nbfs; i++)
		cout<<bfs[i];
	DFS(2);
	for (int i = 0; i < ndfs; i++)
		cout<<dfs[i];
	system("pause");
}