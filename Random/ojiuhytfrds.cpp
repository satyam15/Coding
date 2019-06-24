#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
	ll arr[11];
	memset(arr,0,sizeof(arr));
	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		int n;
		cin>>n;
		ll x=pow(2,n);
		arr[2*j-1]=1;
		arr[2*j]=x;
	
	}
	for(int i=1;i<=2*t;i++)
	cout<<arr[i]<<" ";
	return 0;
}
