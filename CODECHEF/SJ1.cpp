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
ll gcd(ll a,ll b)
{
	if(a==0) return b;
	else return gcd(b%a,a);
}
vector< pair<ll,ll> > ans;
void dfs(vector<int> adj[],ll wt[],ll m[],ll gd[],int i,int p)
{
	gd[i]=gcd(wt[i],gd[p]);

	for(auto j : adj[i])
	{
			//cout<<j<<" ";
		if(j==p) continue;
		dfs(adj,wt,m,gd,j,i);
	}
	if(adj[i].size()==1)  {  ans.pb(mk(i,m[i]-gcd(m[i],gd[i])));}
}
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		ll n,a,b;
		cin>>n;
		ans.clear();
		vector<int> adj[n+1];
		ll gd[n+1],wt[n+1],m[n+1];
		for(int i=0;i<n-1;i++) {cin>>a>>b; adj[a].pb(b); adj[b].pb(a);}
		for(int i=1;i<=n;i++)  {cin>>a; wt[i]=a;}
		for(int i=1;i<=n;i++)  {cin>>a; m[i]=a;}	
		gd[1]=wt[1];	
		for(auto i: adj[1])	
		dfs(adj,wt,m,gd,i,1);
		sort(all(ans));
		//cout<<ans.size();
		for(auto i: ans) cout<<i.ss<<" ";
	}
}