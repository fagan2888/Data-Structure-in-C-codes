#include<iostream>
using namespace std;

//merge function

void merge(int A[], int l,int m, int r)
{
	int i=l;// starting index for left subArray
	int j=m+1;// starting index for right subarray
	int k =l; //starting index for temporary

	int temp[5];// create a temporary array
	
	while(i<=m && j<=r)
	{
		if(A[i]<=A[j])
		{
			temp[k]=A[i]; //arr[i] is smaller than arr[j]
			i++;
			k++;
		}
		else
		{
		temp[k]=A[j]; //arr[j] is smaller than arr[i]
		j++;
		k++;
			
		}
	}
	while(i<=m)  
	{
		temp[k]=A[i]; //copying all elements from left subArray to temp as it is
		i++;
		k++;
		
	}
	
		while(j<=r)
	{
		temp[k]=A[j];  //copying all elements from right subArray to temp as it is
		j++;
		k++;
		
	}
	
	for(int s=l;s<=r;s++)
	{
		A[s] = temp[s];
	}
}

//mergeSort array

void mergeSort(int arr[], int l, int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		
		merge(arr,l,m,r);
	}
}


int main()
{

	
	int myarr[5];
	cout<<"Enter an array of 5 elements to be merged:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>myarr[i];
	}
	
	cout<<"An array before merge sort is:"<<endl;
	for(int i=0;i<=5;i++)
	{
		cout<<myarr[i]<<" ";
	}
	
	//calling a merge sort function
	mergeSort(myarr,0,5);
	 
	cout<<endl<<"An array After merge sort is:"<<endl;
	for(int i=0;i<=5;i++)
	{
		cout<<myarr[i]<<" ";
	}
	
	
	return 0;
}
