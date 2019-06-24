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
vector<pair<ll,ll>> adj[100000];
bool visitetd[100000];
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m,x,y,z,ans=1;		
		for(int i=0;i<100000;i++)
		{
			adj[i].clear();
			visitetd[i]=false;
		}
		cin>>n>>m;
		for(int i=0;i<m;i++)
		{
			cin>>x>>y>>z;
			adj[x].pb(mk(y,z));
			adj[y].pb(mk(x,z));
		}
		priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> q;
		q.push({1,1});
		while(!q.empty())
		{
			z=q.top().ss;
			x=q.top().ff;
			q.pop();
			if(visitetd[x]) continue;
			ans=((z%mod)*(ans%mod))%mod;
			visitetd[x]=true;
			for(int i=0;i<adj[x].size();i++)
			{
				y=adj[x][i].ff;
				if(!visitetd[y])
				{
					q.push(adj[x][i]);
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}