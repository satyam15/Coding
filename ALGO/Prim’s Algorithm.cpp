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
vector<pair<int,int>> adj[10005];
pair<int,pair<int,int>> spa[100005];
int sp=0;
void prims(int x)
{
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> q;
	q.push(mk(0,x));
	while(!q.empty())
	{
		int y=q.top().ss;
		q.pop();
		if(visited[y]) continue;
		for(int)
	}
}
int main(void)
{
	FIO
	int n,e,x,y,w;
	cin>>n>>e;
	for(int i=0;i<e;i++)
	{
		cin>>x>>y>>w;
		adj[x].pb(mk(y,w));
		adj[y].pb(mk(x,w));
	}
	prims(1);

}