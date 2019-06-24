#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>n>>k;
		long long arr[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		int i;
		sort(arr+1,arr+n+1);
		for( i=1;i<=n;i++)
		{
			if(arr[i]>=arr[n-k+1])
			break;
		}
		
		cout<<n-i+1<<endl;
	}
	return 0;
}
