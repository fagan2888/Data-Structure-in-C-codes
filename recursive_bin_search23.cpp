#include<iostream>
using namespace std;

int binarysearch(int arr[],int x,int a,int b)
{
	int c;
	if(a>b)
	{
		return -1;
	}
	else
	{
		c=(a+b)/2;
		if(x<arr[c])
		{
			binarysearch(arr,a,c-1,x);
		}
		else if(x>arr[c])
		{
			binarysearch(arr,x,c+1,b);
		}
		else
		{
			return c;
		}
	}
}
int main()
{
	int x,a,b,c,n;
	int arr[]={23,45,56,57,58,68,78,90};
	
	
	
	cout<<"Enter number to be searched:";
	cin>>x;
	
	int result = binarysearch(arr,x,0,n-1);
	
	if(result == -1)
	{
		cout<<"the number "<<x<<" was not found";
	}
	else
	{
		cout<<"the number "<<x<<" was found at index:"<<result+1;
	}
}
