#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		memset(arr,0,sizeof(arr));
		arr[0]=1;
		for(int i=0;i<n;i++)
		{
			for(int j=1;j<n;j++)
			{
				if(j>=i)
				{
					arr[j]+=arr[j-i];
				}
			}
		}
		cout<<arr[n-1];
	}
	return 0;
}
