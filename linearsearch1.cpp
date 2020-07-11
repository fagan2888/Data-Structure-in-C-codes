#include<iostream>
using namespace std;

void linearsearch(int arr[],int num)
{
	int temp=-1;
	
	for(int i=0;i<5;i++)
	{
		if(arr[i]==num)
		{
			cout<<"the number location is:"<<i<<endl;
			
			temp=0;
		}
		
		
	}
	if(temp==-1)
	{
	
	cout<<"no such a number"<<endl;
	}
}


int main()
{
	
	int num;
	int arr[5];
	cout<<"Enter 5 element of the array"<<endl;
	
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter number to be searched:";
	cin>>num;
	
	linearsearch(arr,num);
	
	
	
	
	return 0;
}
