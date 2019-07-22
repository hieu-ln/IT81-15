#include<iostream>
using namespace std;
#define max 100
int a[max];
int front, rear;
void init(int &front, int &rear)
{
	front = rear = -1;
}
int push(int a[], int &front, int &rear, int x)
{
	if (front == -1)
		front = 0;
	if (rear == max - 1)
		for (int i = front; i <= rear, i++)
			a[i - front] = a[i];
	rear = max - 1 - front;
	front = 0;
	a[++rear] = x;
	return 1;
}
int pop(int a[], int&rear, int &front, int &x)
{
	if (front == -1)
		return 0;
	else
	{
		x = a[front++];
		if (front > rear)
			front = rear = -1;
		return 1;
	}
}
int isFull(int a[], int rear, int front)
{
	if (rear == max - 1 && front == 0)
		return 0;
	return 1;

}
int convert_binary(int x)
{
	int c,n=0,y;
	while (x != 0)
	{
		push(a,front,rear,x%2);
		x /= 2;
	}
	while(rear==-1)
		n = n * 10 + pop(a, rear, front, y);
	return n;
}
int isEmpty(int a[], int rear, int front)
{
	if (front == -1)
		return 0;
	else
		return 1;
}
