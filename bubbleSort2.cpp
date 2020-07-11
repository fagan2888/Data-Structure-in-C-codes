#include<iostream>
using namespace std;

//declering a function with two arguments
int bubbleSort(int arr[],int n)
{

 int k,i,temp,flag;
 for(k=0;k<n;k++)
 {
 	flag=0;
 	for(i=0;i<n-k;i++)
 	{
 		if(arr[i]>arr[i+1])
 		{
 			temp=arr[i];//swapping the numbers in an array
 			arr[i]=arr[i+1];
 			arr[i+1]=temp;
 			flag=1;//array was not sorted
		 }
	 }
	 
	 flag==0;//after sorting has occured the code will terminate
	 break;
 }
}

int main()
{
	int n,i;
	int arr[n];
	//enter the length of an array
	cout<<"\nEnter the value of n:";
	cin>>n;
	//enter an array in any order
	cout<<"\nEnter an array in any order to be sorted:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//display elements of an array before sorting them
	cout<<"\n an array before bubble sorting was:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	
	bubbleSort(arr,n);//calling the function that perform bubble sorting
	//display an array after sorting them
	cout<<"an array After bubble sorting was:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
