#include<iostream>
using namespace std;
#define max 100  
#define n 50  
#define m 50
int a[n],b[m],c[max],count1=0;
int front=rear=-1;
	
void fifthteen_one(int a[], int b[], int &rear , int &front )
{
	if (front == -1)
		front = 0;
	if (rear == max - 1)
	{
		for (int i = front; i <= rear; i++)\
			a[i - front] = a[i];
		rear = max-1-front;
		front = 0;
	}
	while(rear<max-1 || count1<n && count1<m)
	{
		c[rear] = a[count1];
		rear++;
		c[rear] = b[count1];
		rear++;
	}
	for (int i = front; i <= rear; i++)
		cout << c[i];
}
void fifthteen_two(int a[], int b[], int &rear, int &front)
{
	if (front == -1)
		front = 0;
	if (rear == max - 1)
	{
		for (int i = front; i <= rear; i++)\
			a[i - front] = a[i];
		rear = max - 1 - front;
		front = 0;
	}
	int i, j;
	if (rear < max - 1 )
	{
		if (n > m)
		{
			for (i = 0; i < n; i++)
				for ( j = 0; j < m; j++)
					if (a[i] == b[j] && rear <= max - 1)
					{
						c[rear] = b[i];
						rear++;
					}
		}
		else
		{
			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)
					if (b[i] == a[j] && rear <= max - 1)
					{
						c[rear] = b[i];
						rear++;
					}
		}

	}
	for (int i = front; i <= rear; i++)
		cout << c[i];
}
void fifthteen_three(int a[], int b[], int &rear, int &front)
{
	if (front == -1)
		front = 0;
	if (rear == max - 1)
	{
		for (int i = front; i <= rear; i++)\
			a[i - front] = a[i];
		rear = max - 1 - front;
		front = 0;
	}
	int i, j;
	if (rear < max - 1)
	{
		if (n > m)
		{
			for (i = 0; i < n; i++)
				for (j = 0; j < m; j++)
					if (a[i] != b[j] && rear <= max - 1)
					{
						c[rear] = b[i];
						rear++;
					}
		}
		else
		{
			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)
					if (b[i] != a[j] && rear <= max - 1)
					{
						c[rear] = b[i];
						rear++;
					}
		}

	}
	for (int i = front; i <= rear; i++)
		cout << c[i];
}