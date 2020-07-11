#include<iostream>
using namespace std;

int linearsearch(int array[],int size,int searchvalue)
{
	for(int i=0;i<size;i++)
	{
		if(searchvalue == array[i])
		{
			return i;
		}
		
	}
	
	return -1;
}


int main()
{
	int a[]={23,34,65,34,56,78,9};
	
	int searchvalue;
	cout<<"Enter the number to be searched:";
	cin>>searchvalue;
	
	int result = linearsearch(a,7,searchvalue);
	
	if(result>0)
	{
	  cout<<"the number"<<searchvalue<<"was found at:"<<result<<endl;	
	}
	else
	{
		cout<<"the number"<<searchvalue<<"was not found"<<endl;
	}
	
	
	return 0;
}
