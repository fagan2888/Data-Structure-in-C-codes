#include<iostream>
using namespace std;

int sum(int num)
{
	if(num!=0)
	{
		return (num + sum(num-1));
	}
	else
	{
		return num;
	}
}

int main()
{
	int num;
	cout<<"Enter num:";
	cin>>num;
	
	int total=sum(num);
	
	cout<<"sum of natural number from 1 to "<<num<<"are:"<<total<<endl;
	
	return 0;
}
