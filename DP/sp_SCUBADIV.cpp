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
	int t;
	cin>>t;
	while(t--)
	{
		int o,n;
		cin>>o>>n;
		int c;
		cin>>c;
		int arr[c][3];
		for(int i=0;i<c;i++)
			cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
		int dp[c+1][o+1][n+1];
			for(int j=0;j<=o;j++)
				{
					for(int k=0;k<=n;k++)
						dp[0][j][k]=0;
					dp[j][0][0]=0;
				}
		for(int i=1;i<=c;i++)
			for(int j=0;j<=o;j++)
				for(int k=0;k<=n;k++)
				{
					if(j>=arr[i-1][0]&&k>=arr[i-1][1]) dp[i][j][k]=max({dp[i-1][j][k],arr[i-1][2]+dp[i-1][j-arr[i-1][0]][k-arr[i-1][1]]});
					else dp[i][j][k]=dp[i-1][j][k];
				}
				int ans=INT_MAX;
		for(int i=0;i<=n;i++)
			ans=min(ans,dp[c][o][i]);
		for(int i=1;i<=c;i++)
			for(int j=0;j<=o;j++)
				for(int k=0;k<=n;k++)
					cout<<dp[i][j][k]<<" ";
		cout<<ans<<endl;
	}
	return 0;
}