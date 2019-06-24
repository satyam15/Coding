#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long m,n,count=0;
		cin>>n>>m;
		long long arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]%m==0)
			count++;
		}
		cout<<pow(2,count)-1<<endl;
	}
	return 0;
}
