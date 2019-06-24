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
vector<int>adj[100001];
int ans[100001];
int n,k;
void dfs(int i,int p)
{
	if(p==1)
	{
		if(adj[p].size()>=k)
			ans[i]^=p;
	}
	else if(adj[p].size()-1>=k)
		ans[i]^=p;
	ans[i]^=ans[p];
	for(auto j : adj[i])
	{
		if(j!=p) dfs(j,i);
	}
	
}
int main(void)
{
	FIO
	int a,b;
	cin>>n>>k;
	memset(ans,0,sizeof(ans));
	for(int i=0;i<n-1;i++)
	{
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	ans[1]=0;
	for(auto j : adj[1])
		dfs(j,1);
	for(int i=1;i<=n;i++) cout<<ans[i]<<endl;
	return 0;
}