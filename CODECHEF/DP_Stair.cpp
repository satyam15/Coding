#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
ll fun(ll arr[],ll m,ll n)
{
	if(arr[n]!=0)
		return arr[n];
	for(ll i=1;i<=m && n-i>=0;i++)
	{
		arr[n]+=fun(arr,m,n-i);
	}
	return arr[n];
}
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll m,n;
    cin>>m>>n;
    ll arr[n+1];
    memset(arr,0,sizeof(arr));
    arr[0]=1;
    cout<<fun(arr,m,n);
}