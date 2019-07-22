#include<iostream>
using namespace std;
struct node {
	int info;
	node *link;
};
node *sp=NULL;
void output()
{
	node *p=sp;
	while (p != NULL)
	{
		cout << p->info;
		p = p->link;
	}
}
void sixteen_one(int a[], int b[], int n , int m)
{
	int i=1, j=0;
	node *p;
	if (sp == NULL)
	{
		p->info = a[0];
		p->link = NULL;
		sp = p;
	}
	else {
		while (i < n)
		{
			node *q;
			q->info = a[i++];
			p -> link = q;
			p = q;
		}
		while (j < m)
		{
			node *q;
			q->info = a[j++];
			p->link = q;
			p = q;
		}
	}
	output();
}

void sixteen_two(int a[], int b[], int n, int m)
{
	node *p;
	if (n > m)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (a[i] == b[j])
				{
					node *q;
					q->info = a[i];
					p->link = q;
					p = q;
				}
	}
	else
	{
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (b[i] == a[j])
				{
					node *q;
					q->info = b[i];
					p->link = q;
					p = q;
				}
	}
	output();
}
void sixteen_three(int a[], int b[], int n, int m)
{
	int i = 1, j = 0;
	node *p,*p1,*p2;
	// them ca 2 danh sach vao stack
	if (sp == NULL)
	{
		p->info = a[0];
		p->link = NULL;
		sp = p;
	}
	else {
		while (i < n)
		{
			node *q;
			q->info = a[i++];
			p->link = q;
			p = q;
		}
		while (j < m)
		{
			node *q;
			q->info = a[j++];
			p->link = q;
			p = q;
		}
	}
	// loc phan tu bi trung va de lai phan bu`
	p1 = sp; // p1 dung de xet phan tu trung , p2 duyet va tim phan tu bi trung voi p1 de xoa
	p2 = p1->link;
	while (p1 != NULL)
	{
		while (p2 != NULL)
		{
			if (p1->info == p2->info)
			{
				node *p=sp;
				while (p->link != p2)// tro con tro p vao phan tu truoc phan tu p2
					p=p->link;
				p->link = p2->link;
				delete p;
			}
			p2 = p2->link;
		}
		p1 = p1->link;
		p2=p1->link;
	}
	output();
}

