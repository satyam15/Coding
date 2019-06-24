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
int main(void)
{
	FIO
	int n,w;
	cin>>n>>w;
	int price[n],weight[n];
	for(int i=0;i<n;i++)
		cin>>price[i]>>weight[i];
	int dp[n+1][w+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(i==0||j==0) dp[i][j]=0;
			else if(weight[i-1]>w) dp[i][j]=dp[i-1][j];
			else dp[i][j]=max(price[i-1]+dp[i-1][j-weight[i-1]],dp[i-1][j]);
		}
	}
	cout<<dp[n][w]<<endl;
	return 0;
}