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
vector<int> adj[1000001];
int par[1000001];
int visited[1000001];
void dfs(int i,int ph)
{
	visited[i]=1;
	par[i]=ph;
	for(auto j : adj[i])
	{
		if(visited[j]==0) dfs(j,ph);
	}	
}
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,a,b;
		string s;
		vector<pair<int,int>> neg;
		cin>>n>>m;
		for(int i=0;i<=n;i++) adj[i].clear();
		memset(visited,0,sizeof(visited));
		memset(par,0,sizeof(par));
		for(int i=0;i<m;i++)
		{
			cin>>a>>s>>b;
			if(s=="=")
			{
				adj[a].pb(b);
				adj[b].pb(a);
			}
			else
			{
				neg.pb(mk(a,b));
			}

		}
		for(int i=1;i<=n;i++)
		{
			if(visited[i]==0)
			{
				dfs(i,i);
			}
		}
		int fl=0;
		for(int i=0;i<neg.size();i++)
		{
			a=neg[i].ff;
			b=neg[i].ss;
			if(par[a]==par[b])
			{
				fl=1;
				break;
			}
		}
		if(fl==1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}