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
ll mx,vt,vt1;
void dfs(vector<ll> adj[],ll wt[],ll vo[],ll v,ll q)
{
	if(vt>=wt[v]) {
		if(vt==wt[v]) 
		{
			if(mx<wt[v]^q) 
			{
				mx=wt[v]^q;
				vt1=v;
			}
		}
		else {
			vt1=v;
			vt=wt[v];
			mx=wt[v]^q;}
	}
	for(auto j: adj[v])
	{
		dfs(adj,wt,vo,j,vo[j]);
	}

}

int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		ll n,q,a,b;
		cin>>n>>q;
		vector<ll> adj[n+1];
		ll wt[n+1];
		ll v[n+1];
		vector<pair<ll,ll>> v1;
		for(int i=1;i<=n;i++) cin>>wt[i];
		for(int i=0;i<n-1;i++) cin>>a>>b,adj[a].pb(b);
		for(int i=0;i<q;i++) cin>>a>>b, v[a]=b, v1.pb(mk(a,b));
		for(int i=0;i<q;i++)
		{
			mx=0,vt=wt[v1[i].ff];
			dfs(adj,wt,v,v1[i].ff,v1[i].ss);
			cout<<vt1<<" "<<mx<<endl;
		}
	}
}