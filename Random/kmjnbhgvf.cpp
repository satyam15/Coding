#include<stdlib.h>
#include<stdio.h>
void merge(int arr[],int l,int m,int r)
{
	int i,j,n1,n2,k;
	n1=m-l+1;
	n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<=n1;i++)
	{
		L[i]=arr[i+l];
	}
	for(i=0;i<n2;i++)
	{
		R[i]=arr[m+1+i];
	}
	i=0;
	j=0;
	k=l;
	while(i<n1&&j<n2)
	{
		if(L[i]<R[j])
		{arr[k]=L[i];
		i++;}
		else {
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		k++;
		j++;
	}
}void mergesort(int arr[],int l,int r)
{
	int m;
	if(l<r){
	m=l+(r-l)/2;
	mergesort(arr,l,m);
	mergesort(arr,m+1,r);
	merge(arr,l,m,r);}
}
int main(void)
{
	int arr[10];
	int i;
	for(i=0;i<10;i++)
	{
		arr[i]=rand();
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	mergesort(arr,0,10);
	for(i=0;i<10;i++)
	printf("%d ",arr[i]);
	return 0;
}







