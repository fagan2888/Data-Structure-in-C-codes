#include<iostream>
using namespace std;

int partition(int A[], int lb ,int ub)
{
	int pivot = A[lb];
	 int start =lb;
	 int end = ub;
	
	while(start<end)
	{
		while(A[start]<=pivot)
		{
			start++;
		}
		while(A[end]>pivot)
		{
			end--;
		}
		
		if(start>end)
		{
			int temp=A[start];
			A[start]=A[end];
			A[end]=temp;
			
			
		}
	}
	
    int nood = A[lb];
    A[lb]=A[end];
    A[end]=nood;
    
    return end;
	
}

void quickSort(int A[], int lb ,int ub)
{
	if(lb<ub)
	{
		int loc=partition(A, lb ,ub);
		quickSort(A,lb,loc-1);
		quickSort(A,loc+1,ub);
	}
	
	
}




int main()
{
	
	int n,i,lb,ub;
	int A[n];
	
	cout<<"\nEnter the value of n:";
	cin>>n;
	
	cout<<"\nEnter an array in any order to be sorted:";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	cout<<"\nan array before quickSort was:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<" "<<endl;
	}
	
	quickSort(A,lb,ub);
	
	cout<<"an array After quickSort was:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	
	
	
	return 0;
}
