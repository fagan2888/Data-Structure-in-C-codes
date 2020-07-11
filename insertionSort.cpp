#include<iostream>
using namespace std;

void InsertSorting(int a[])
{
	int key;
	int j= 0;
	for(int i=1;i<5;i++)
	{
		key = a[i];
		j=i-1;
		
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		
		a[j+1]=key;
	}
}

int main()
{
	int arr[5];
	
	cout<<"enter an array with 5 elements:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"before sorting:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	InsertSorting(arr);
	
	cout<<"after sorting:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
