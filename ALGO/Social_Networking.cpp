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
int bfs(vector<int> adj[],int a,int b,vector<int> height)
{
	queue<int> q;
	int e,ans=0;
	q.push(a);
	height[a]=0;
	while(!q.empty())
	{
		e=q.front();
		q.pop();
		for(auto x : adj[e])
		{
			// cout<<x<<" ";
			if(height[x]==-1)
			{ 
				q.push(x); height[x]=height[e]+1;
				if(height[x]==b) 
				{
					ans++;
				}
			}
		}
	}
	return ans;
}
int main(void)
{
	FIO
	int n,e,a,b;
	cin>>n>>e;
	vector<int> adj[n+1];	
	for(int i=0;i<e;i++)
	{
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		vector<int> height(n+1,-1);
		cin>>a>>b;
		cout<<bfs(adj,a,b,height)<<endl;
	}
	return 0;
}