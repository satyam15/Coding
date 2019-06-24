#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		ll dp[n+10];
		dp[n]=0;
        dp[n+1]=0;
        dp[n+2]=0;
        dp[n+3]=0;
        dp[n-1]=arr[n-1];
        dp[n-2]=arr[n-2]+dp[n-1];
        dp[n-3]=arr[n-3]+dp[n-2];
        for(int i=n-4;i>=0;i--)
        {
        	dp[i]=max({arr[i]+dp[i+2],arr[i]+arr[i+1]+dp[i+4],arr[i]+arr[i+1]+arr[i+2]+dp[i+6]});
        }
		printf("%lld\n",dp[0]);
	}
	return 0;
}