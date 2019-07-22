#include<iostream>
using namespace std;

struct Node
{
	double bac;
	double heso;
	Node *link;
};

void Nhan(Node *a, Node *b, Node *kq)
{
	Node *b1, *kq1, *kq2;
	kq = new Node;
	kq1 = new Node;
	kq2 = new Node;
	b1 = new Node;
	b1 = b;
	kq1 = kq;
	while (a != NULL)
	{
		while (b1 != NULL)
		{
			kq1->bac = 0;
			kq1->heso = 0;
			kq1->bac = a->bac * b1->bac;
			kq1->heso = a->heso * b1->heso;
			b1->link;
			kq1->link;
		}
		b1 = b;
		a->link;
	}
	kq1 = kq;
	kq2 = kq;
	while (kq1 != NULL)
	{
		while (kq2 != NULL)
		{
			if (kq1->bac == kq2->bac)
			{
				kq1->heso += kq2->heso;
				kq2 = kq2->link;
			}
			kq2->link;
		}
		kq1->link;
	}
}

void Chia(Node *a, Node *b, Node *kq)
{
	Node *b1, *kq1, *kq2;
	kq = new Node;
	kq1 = new Node;
	kq2 = new Node;
	b1 = new Node;
	b1 = b;
	kq1 = kq;
	while (a != NULL)
	{
		while (b1 != NULL)
		{
			kq1->bac = 0;
			kq1->heso = 0;
			if (a->bac != b1->bac && a->bac > b1->bac)
			{
				kq1->bac = a->bac - b1->bac;
				kq1->heso = a->heso / b1->heso;
			}
			else
			{
				kq1->bac = 1;
				kq1->heso = a->heso / b1->heso;
			}
			b1->link;
			kq1->link;
		}
		b1 = b;
		a->link;
	}
	kq1 = kq;
	kq2 = kq;
	while (kq1 != NULL)
	{
		while (kq2 != NULL)
		{
			if (kq1->bac == kq2->bac)
			{
				kq1->heso += kq2->heso;
				kq2 = kq2->link;
			}
			kq2->link;
		}
		kq1->link;
	}
}