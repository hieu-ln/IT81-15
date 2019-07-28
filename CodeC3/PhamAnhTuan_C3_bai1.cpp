//#include <iostream>
//#include <cstdlib>
//#include<time.h>
//using namespace std;
//#define max  500
//clock_t start ; 
//clock_t end1;
//double cpu_time_used;
//int a[max];
//int n;
//void input()
//{
//	for(int i = 0 ; i<n ;i++)
//	{
//		cout<<"\n Nhap phan tu " <<i+1;
//		cin>>a[i];
//	}
//}
//void input_rand()
//{
//	for(int i = 0 ; i<n ;i++)
//	{
//		a[i]=rand() %1000 + 1;
//	}
//
//}
//void output()
//{
//	for(int i = 0 ;i<n;i++)
//		cout<<a[i]<<"\t";
//}
//void insertion_sort()
//{
//	
//		int x ,i ,j;
//		for( i = 1 ; i<n;i++)
//		{
//			x=a[i];
//			j=i-1;
//			while(j>=0 && x<a[j])
//			{
//				a[j+1]=a[j];
//				j--;
//			}
//			a[j+1]=x;
//		}
//}
//void swap(int x, int y)
//{
//	int t=x;
//	a[x]=a[y];
//	a[y]=a[t];
//}
//void selection_sort()
//{
//	int min;
//	for(int i =0 ; i<n;i++)
//	{
//		min=i;
//		for(int j = 1 ; i<n;i++)
//			if(a[min]>a[j])
//				min=j;
//		swap(i,min);
//	}
//}
//void interchange_sort()
//{
//	for(int i = 0 ; i<n;i++)
//		for(int j =i+1 ; j<n;j++)
//			if(a[i]>a[j])
//				swap(i,j);
//}
//void bubble_sort()
//{
//	for(int i = 0;i<n-1;i++)
//		for(int j=n-1;j>i;j--)
//			if(a[j-1]>a[j])
//				swap(j,j-1);
//}
//void quick_sort(int l , int r)
//{
//	int pivot=a[l],left = l ,right = r ;
//	
//	{
//		while(left<right)
//		{
//			while(a[left]<pivot) left++;
//			while(a[right]>pivot) right--;
//			swap(l,r);
//			left++;
//			right--;
//		}
//		if(a[left]<pivot)
//			swap(left,l);
//		if(l<left) quick_sort(l,right-1);
//		if(right<r)quick_sort(right+1,r);
//	}
//}
//void find_heapmax(int i, int n)
//{
//	int j=2*i+1;
//	if(j>=n)
//		return;
//	if(j+1>n)
//		if(a[j]<a[j+1])
//			j++;
//	if(a[i]>=a[j])
//		return;
//	else
//	{
//		int x=a[i];
//		a[i]=a[j];
//		a[j]=x;
//		find_heapmax(j,n);
//	}
//
//}
//void heap_sort(int n)
//{
//	int i=n/2;
//	while(i>=0)
//	{
//		find_heapmax(i,n-1);
//		i--;
//	}
//	int right = n-1;
//	while(right>0)
//	{
//		swap(0,right);
//		right--;
//		if(right>0)
//			find_heapmax(0,right);
//	}
//}
//int find(int x)
//{
//	for(int i = 0 ; i<n;i++)
//		if(a[i]==x)
//			return a[i];
//	return 0;
//}
//
//int find_binary(int x)
//{
//	int left=0, right=n-1, mid;
//	while(left<=right)
//	{
//		mid=(left+right)/2;
//		if(a[mid]==x)
//			return mid;
//		if(x>a[mid])left=mid+1;
//		else right=mid-1;
//	}
//	return -1;
//}
//void main()
//{
//	int choise ; int b[max];
//	cout<<"\n Nhap n";
//	cin>>n;
//	
//	do
//	{
//			system("cls");
//			cout<<"\n nhap lua chon";
//			cout<<"\n 1:nhap gia tri bang tay";
//			cout<<"\n 2: nhap gia tri random";
//			cout<<"\n 1: Xuat danh sach";
//			cout<<"\n 3: xuat danh sach";
//			cout<<"\n 4 Sap xep mang theo giai thuat insection_sort";
//			cout<<"\n 5: Sap xep mang theo giai thuat selection_sort";
//			cout<<"\n 6: Sap xep mang theo giai thuat interchange_sort";
//			cout<<"\n 7: Sap xep mang theo giai thuat bubble_sort";
//			cout<<"\n 8: Sap xep mang theo giai thuat quick_sort";
//			cout<<"\n 9: Sap xep mang theo giai thuat heap_sort";
//			cout<<"\n 10: tim tuan tu";
//			cout<<"\n 11: tim nhi phan";
//			cin>>choise;
//		switch (choise)
//		{
//			case 1 : 
//				input();
//				break;
//			case 2:
//				input_rand();
//				break;
//			case 3:
//				output();
//				break;
//			case 4:
//				start=clock();
//				insertion_sort();
//				end1 = clock();
//				cpu_time_used=(double(end1-start))/CLOCKS_PER_SEC;
//				cout<<"\n thoi gian chay cua chuong trinh la"<<cpu_time_used;
//				break;
//			case 5:
//				start=clock();
//				selection_sort();
//				end1 = clock();
//				cpu_time_used=(double(end1-start))/CLOCKS_PER_SEC;
//				cout<<"\n thoi gian chay cua chuong trinh la"<<cpu_time_used;
//				break;
//			case 6:
//				start=clock();
//				interchange_sort();
//				end1 = clock();
//				cpu_time_used=(double(end1-start))/CLOCKS_PER_SEC;
//				cout<<"\n thoi gian chay cua chuong trinh la"<<cpu_time_used;
//				break;
//			case 7:
//				start=clock();
//				bubble_sort();
//				end1 = clock();
//				cpu_time_used=(double(end1-start))/CLOCKS_PER_SEC;
//				cout<<"\n thoi gian chay cua chuong trinh la"<<cpu_time_used;
//				break;
//			case 8:
//				start=clock();
//				quick_sort(0,n-1);
//				end1 = clock();
//				cpu_time_used=(double(end1-start))/CLOCKS_PER_SEC;
//				cout<<"\n thoi gian chay cua chuong trinh la"<<cpu_time_used;
//				break;
//			case 9:
//				start=clock();
//				heap_sort(n);
//				end1 = clock();
//				cpu_time_used=(double(end1-start))/CLOCKS_PER_SEC;
//				cout<<"\n thoi gian chay cua chuong trinh la"<<cpu_time_used;
//				break;
//			case 10:
//				int x1;
//				cout<<"\n NHap x";cin>>x1;
//				start=clock();
//				find(x1);
//				end1 = clock();
//				cpu_time_used=(double(end1-start))/CLOCKS_PER_SEC;
//				cout<<"\n thoi gian chay cua chuong trinh la"<<cpu_time_used;
//				break;
//			case 11:
//				int x2;
//				cout<<"\n NHap x";cin>>x2;
//				start=clock();
//				find_binary(x2);
//				end1 = clock();
//				cpu_time_used=(double(end1-start))/CLOCKS_PER_SEC;
//				cout<<"\n thoi gian chay cua chuong trinh la"<<cpu_time_used;
//				break;
//		}
//		cout<<" muon thoat khong , neu co chon 12";
//		cin>>choise;
//		system("pause");
//	}while(choise!=12);
//		
//
//}
