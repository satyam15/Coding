#include<stdio.h>
#include<stdlib.h>
int partition(int arr[],int l,int u)
{
	int temp,i=l;
	int j=u+1;
	int v=arr[l];
	do
	{
		do
		{
			i++;
		}while(i<=u&&arr[i]<v);
		
		do
		{
			j--;
		}while(arr[j]>v);
		
		if(i<j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	
		}
	}while(i<j);
	
	arr[l]=arr[j];
	arr[j]=v;
	return j;
}
void quicksort(int arr[],int l,int u)
{
	int k;
	if(l<u)
	{
		k=partition(arr,l,u);
		quicksort(arr,l,k-1);
		quicksort(arr,k+1,u);
	}
}
int main(void)
{
	int n,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter values of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
