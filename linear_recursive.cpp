#include<iostream>
using namespace std;

int linearSearch(int A[],int n,int x)
{
	//for(int i=0;i<n;i++)
	//{
	
	if(n<0)
	{
		return -1;
	}
	if(A[n]==x)
	{
		return n;
		//cout<<i;
	}
	//return linearSearch(A,7,x);
//}
}

int main()
{
		int A[]={23,34,65,34,56,78,9};
	
	int x;
	cout<<"Enter the number to be searched:";
	cin>>x;
	
	int result = linearSearch(A,7,x);
	
	if(result>0)
	{
	  cout<<"the number"<<x<<"was found at:"<<result<<endl;	
	}
	else
	{
		cout<<"the number"<<x<<"was not found"<<endl;
	}
	
	
	return 0;
	
}
