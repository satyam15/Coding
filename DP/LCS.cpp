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
	string s1,s2;
	cin>>s1;
	cin.clear();
	cin>>s2;
	int m=s1.size(),n=s2.size();
	int dp[m+1][n+1];
	dp[0][0]=0;
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0) dp[i][j]=0;
			else if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	cout<<dp[m][n]<<endl;
	return 0;	
}