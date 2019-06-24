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
int n,e;
vector<int> dis;
vector<vector<int>> adj;
void bfs(int i)
{
	dis=vector<int>(n,mod);
	queue<int> q;
	dis[i]=0;
	q.push(i);
	while(!q.empty())
	{
		int x=q.front();
		q.pop();
			for(auto j : adj[x])
			{
				if(dis[j]==mod)
				{
				dis[j]=dis[x]+1;
				q.push(j);}
			}	
		
	}
}
int main(void)
{
	FIO
	int t,u,v;
	cin>>t;
	while(t--)
	{
		cin>>n>>e;
		adj= vector< vector<int>>(n);
		for(int i=0;i<e;i++)
		{
			cin>>u>>v;
			u--,v--;
			adj[u].pb(v);
			adj[v].pb(u);
		}
		bfs(0);
		vector<int> O,E;
		for(int i=0;i<n;i++)
		{
			if(dis[i]%2==0) E.pb(i+1);
			else O.pb(i+1);
		}
		if(E.size()<O.size())
		{
			cout<<E.size()<<endl;
			for(auto j : E) cout<<j<<" ";
			cout<<endl;
		}
		else
		{
			cout<<O.size()<<endl;
			for(auto j : O) cout<<j<<" ";
			cout<<endl;
		}
	}
	return 0;
}