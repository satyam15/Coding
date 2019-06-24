#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long arr[n],count =0;
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		 for(int i=n-1;i>=1;i--)
		 {
		 	if(arr[i]==arr[i-1])
		 	{
		 		
		 		int temp=arr[i];
		 		int I=i-1;
		 		while(arr[i]==temp&&i!=0)
		 		{
		 			count++;
		 			i--;
				 }
				 i=I;
				 count%=mod;
			 }
			 if(arr[i]!=arr[i-1])
			 {
			 	i--;
			 	int I=i;
			 	
			 	int temp=arr[i];
		 		while(arr[i]==temp&&i!=-1)
		 		{
		 			count++;
		 			i--;
				 }
				 count%=mod;
				 i=I;
			 }
			 
	 		}
	 		count--;
		cout<<count<<endl;
	}
		 return 0;
}
