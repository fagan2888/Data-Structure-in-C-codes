#include<iostream>
using namespace std;

int binarysearch(int array[],int size,int searchvalue)
{
		int low=0;
		int high=size-1;
		int mid;
		
	while(low <= high)
	{
	
		mid=(low+high)/2;
		
		if(searchvalue == array[mid])
		{
			return mid;
		}
		else if(searchvalue > array[mid])
		{
			low=mid+1;
		}
		
		else
		{
			high=mid-1;
		}
	}
	
	return -1;
}



int main()
{
	
	int array[]={12,20,24,26,32,38,48,78,79,98};
	int searchvalue;
	
	cout<<"enter a number to be serched:";
	cin>>searchvalue;
	
	int result = binarysearch(array,10,searchvalue);

if(result >= 0)
{
	cout<<"the value "<<searchvalue<< "was found at index:"<<result<<endl;
	
	
	
}
else
{
	cout<<"the value "<<searchvalue<< "was not found at index:"<<endl;
		
}
	
	
	return 0;
}
