#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


int Search(int arr[], int i, int x,int n) 
{ 
	int j;
   for(j=0;j<n;j++) 
   if(arr[j]==n&&j!=i)
   break;
   return j;
} 


long long getsum(int arr[],int n)
{
	long long x=0;
	for(int i=0;i<n;i++)
	x+=arr[i];
	return x;
}


int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int index1=0,min,index2=0;
		long long int sum1=0;
		int n,k,x;
		cin>>n>>k;
		int arr[n],arr1[n];
		for(int i=0;i<n;i++)
		{
			cin>>x;
			arr[i]=x;
			arr1[i]=x;
			sum1+=x;
		}
		sort(arr1,arr1+n);	
		bool flag=true;
		while(flag)
		{
			int i;
			for(i=0;i<n-1;i++)
			{
				if(arr1[i]>=k)				
				{
					break;
				}
			}
			if(i==n-1&&arr[i]>k&&arr[i+1]>k)
			{
				sum1=getsum(arr,n);
				cout<<sum1<<endl;
				flag=false;
			}
			else
			{
				index1=Search(arr,-1,n,arr1[i]);
				index2=Search(arr,index1,n,arr1[i+1]);
				min=arr[index1]<arr[index2]?arr[index1]:arr[index2];
				if(min>k)
				{
					arr[index1]--;
					arr[index2]--;
					for(int z=0;z<n;z++)
						arr1[z]=arr[z];
					sort(arr1,arr1+n);
				}	
			}
		}
	}
return 0;
}
