#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define mod 100000007
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
int main(void)
{
	FIO
	int t,n,k,x,y,sz;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		vector<pair<int,int> >v;
		for(int i=1;i<=k;i++)
		{
			cin>>x;
			if(x!=-1) v.pb(mk(i,x));
		}
		sz=v.size();
		int dp[sz][k+1];
		for(int i=0;i<=k;i++)
		{
			if(v[0].ff>i) dp[0][i]=mod;
			else 
			{
				if(i%v[0].ff==0)
				dp[0][i]=v[0].ss*(i/v[0].ff);
				else dp[0][i]=mod;
			}
			dp[i%sz-1][0]=0;
		}
		for(int i=1;i<sz;i++)
		{
			for(int j=0;j<=k;j++)
			{
				if(v[i].ff<=j) dp[i][j]=min(dp[i-1][j],v[i].ss+dp[i][j-v[i].ff]);
				else dp[i][j]=dp[i-1][j];
			}
		}
		// for(int i=0;i<sz;i++)
		// {
		// 	for(int j=0;j<=k;j++)
		// 		cout<<dp[i][j]<<" ";
		// 	cout<<endl;
		// }
		if(dp[sz-1][k]==mod) dp[sz-1][k]=-1;
		cout<<dp[sz-1][k]<<endl;

	}
	return 0;
}