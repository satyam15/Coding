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

// int fun(string s,int l,int i,int j,int ans)
// {
// 	//cout<<i<<" "<<j<<endl;
// 	if(((ans+l)%2==0&&i==j-1&&(s[i]==s[j]))||i==j)
// 		return ans;
// 	if(s[i]!=s[j])
// 	{
// 		return min(fun(s,l,i+1,j,ans+1),fun(s,l,i,j-1,ans+1));
// 	}
// 	return fun(s,l,i+1,j+1,ans);
// }
int lcs(string s1)
{
	int m=s1.size(),n;
	n=m;
	string s2=s1;
	reverse(all(s2));
	int dp[m+1][n+1];
	dp[0][0]=0;
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0||j==0) dp[i][j]=0;
			else if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[m][m];
}

int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		cin.clear();
		string s;
		cin>>s;
		int i=0,j;
		j=s.size();
		cout<<j-lcs(s)<<endl;
	}
	return 0;
}