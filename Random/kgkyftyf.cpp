#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		int arr[n+1];
		long long int dp[n+3];
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		memset(dp,0,sizeof(dp));
		dp[n]=0;
		dp[n+1]=0;
		dp[n+2]=0;
		dp[n-1]=arr[n-1];
		dp[n-2]=dp[1]+arr[n-2];
		dp[n-3]=dp[2]+arr[n-3];
		for(i=n-4;i>=0;i--)
		{
			dp[i]=max(arr[i]+dp[i+2],max(arr[i]+arr[i+1]+dp[i+4],arr[i]+arr[i+1]+arr[i+2]+dp[i+6]));
		}
		cout<<dp[0]<<endl; 
	}
}
