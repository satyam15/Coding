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
	int n,l;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int dp[n+1][n+1];
	for(int i=0;i<=n;i++) dp[0][i]=i*arr[0];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i+1<=j)
			{
				dp[i][j]=max(dp[i-1][j],arr[i]+dp[i][j-i-1]);
			}
			else dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[n][n]<<endl;
	return 0;
}