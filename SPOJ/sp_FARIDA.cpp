#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define mod 1000000007
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
ll fun(int arr[],int n)
{
	if(n==0) return 0;
	if(n==1) return arr[0];
	if(n==2) return max(arr[0],arr[1]);
	ll dp[n];
	dp[0]=arr[0];
	dp[1]=max(arr[0],arr[1]);
	for(int i=2;i<n;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
	}
	return dp[n-1];
}
int main(void)
{
	FIO
	int t;
	scanf("%d",&t);
	for(int i1=1;i1<=t;i1++)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)  scanf("%d",&arr[i]); 
		printf("Case %d: %lld\n",i1,fun(arr,n));
	}
	return 0;
}