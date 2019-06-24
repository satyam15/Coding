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
vector<pair<ll,ll>> adj[1000001];
bool visited[1000001],vis[1000001];
void dfs(int i)
{
	visited[i]=true;
	for(int j=0;j<adj[i].size();j++)
	{
		if(!visited[adj[i][j].ff]) dfs(adj[i][j].ff);
	}
}
int main(void)
{
	FIO
	ll n,m,k,a,b,c;
	int sum=0;
	cin>>n>>m>>k;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b>>c;
		vis[a]=vis[b]=visited[a]=visited[b]=false;
		adj[a].pb(mk(b,c));
		adj[b].pb(mk(a,c));
		sum+=c;
	}
	int ssc=0;
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
		dfs(i);
			ssc++;			
		}
	}
	if(ssc>1) cout<<-1<<endl;
	else
	{
		vector<ll> v;
		ll msum=0;
		priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> q;
		q.push({1,0});
		while(!q.empty())
		{
			int x=q.top().ff;
			int z=q.top().ss;
			q.pop();
			if(vis[x]) continue;
			msum+=z;
			v.pb(z);
			vis[x]=true;
			for(int j=0;j<adj[x].size();j++)
			{
				if(!vis[adj[x][j].ff])
				{
					q.push(mk(adj[x][j].ff,adj[x][j].ss));
				}
			}
		}
		int fl=0;
		ll ans=0;
		if(msum>=k)
		{
			sort(all(v),greater<ll>());
			for(auto j : v)
			{
			    
				msum=msum-j+1;
				ans++;
				
			}
			if(fl==1) cout<<ans<<endl;
			else
				cout<<-1<<endl;

		}
		else cout<<0<<endl;
	}
	return 0;
}