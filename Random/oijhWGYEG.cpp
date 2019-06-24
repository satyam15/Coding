#include<bits/stdc++.h>
using namespace std;
#define long long ll
int main(void)
{
	int t;
	cin>>t;
	ll arr[12];
	for(int k=1;k<=t;k++)
	{
		int n;
		cin>>n;
		ll x=pow(2,n);
		arr[2*k-1]=1;
		arr[2*k]=n;
	}
	for(int i=1;i<=2*t;i++)
	cout<<arr[i]<<" ";
	return 0;
}
