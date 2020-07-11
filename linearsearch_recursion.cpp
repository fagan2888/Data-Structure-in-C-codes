#include<iostream>
using namespace std;

int linearsearch(int A[],int l,int x)
{
    for(int i=l;i>=0;i--)
    {
    
	 if(A[i] == x)
	{
	 return i;	
	}
	
	}
		return -1;
		
	
}


int main()
{
	
	int A[] = {23,45,65,67,89};
	int x;
	
	cout<<"Enter the number to be searched:";
	cin>>x;
	
	int result= linearsearch(A,5,x);
	
	if(result>=0)
	{
		cout<<"the number"<<x<<"was found at"<<result<<endl;
	}
	else
	{
		cout<<"The number"<<x<<"was not found"<<endl;
	}
	
	return 0;
	
}
