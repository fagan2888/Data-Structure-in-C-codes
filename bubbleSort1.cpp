#include<iostream>
using namespace std;

int bubbleSort(int arr[],int n)
{
	int temp;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}


int main()
{
	
	int n,i;
	int arr[n];
	
	cout<<"\nEnter the value of n:";
	cin>>n;
	
	cout<<"\nEnter an array in any order to be sorted:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nan array before bubble sorting was:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	
	bubbleSort(arr,n);
	
	cout<<"an array After bubble sorting was:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	
	return 0;
}
