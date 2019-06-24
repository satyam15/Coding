#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[10001];
ll fun(int n,ll arr[])
{
	ll a=0,b=0;
	if(n<=0)
	return 0;
	if(dp[n]!=-1)
	return dp[n];
	if(n-1>=0)	a=arr[n]+fun(n-2,arr);
	if(n>=1)	b=fun(n-1,arr);
	return dp[n]=max(a,b);
	
}
int main(void)
{
	
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		memset(dp,-1,sizeof(dp));
		int n;
		scanf("%d",&n);
		ll arr[n+1];		
		for(int j=1;j<=n;j++)
		{
			scanf("%lld",&arr[j]);
		}
		printf("Case %lld: %lld\n",i,fun(n,arr));
		
	}
	return 0;
}
