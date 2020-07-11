#include<iostream>
using namespace std;

int binary_search(int A[],int x,int a,int b)
{
	int n;
	 a=0;
	b=n-1;
	int c;
	
	
	while(a<b)
	{
		c=(a+b)/2;
		if(A[c]<=x)
		{
		 b=c-1;
		}
		else if(A[c]>=x)
		{
			a=c+1;
		}
		else
		{
			return c;
		}
		
	}
	return -1;
	
}



int main()
{
	
	int x,a,b,c,n;
	int arr[]={23,45,56,57,58,68,78,90};
	
	
	
	cout<<"Enter number to be searched:";
	cin>>x;
	
	int result = binary_search(arr,x,0,n-1);
	
	if(result == -1)
	{
		cout<<"the number "<<x<<" was not found";
	}
	else
	{
		cout<<"the number "<<x<<" was found at index:"<<result+1;
	}
	
	
	
	
	return 0;
}
