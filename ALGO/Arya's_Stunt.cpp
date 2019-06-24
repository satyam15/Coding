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
int arr[10001];
vector<int> adj[10001];
int visited[10001];
int mx=0,id;
void dfs(int i)
{
	

			if(mx<arr[i])
			{
				id=i;
				mx=arr[i];
			}	
			if(mx==arr[i])
			{
				if(id>i) id=i;
			} 
			// cout<<i<<endl;
			// cout<<mx<<" "<<id<<endl;
		
		visited[i]=1;
		// cout<<i<<"---";
	for(auto j:adj[i])
	{
		// cout<<j<<" ";
		if(visited[j]==0) dfs(j);
	}
	// cout<<endl;

}
int main(void)
{
	FIO
	int n,m,a,b;
	cin>>n>>m;
	int sum=0;
	ll ans=0;
	memset(visited,0,sizeof(visited));
	vector<int> ids;
	for(int i=1;i<=n;i++) {cin>>arr[i]; ans+=arr[i];}
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	// for(int i=1;i<=m;i++)
	// {
	// 	cout<<i<<"--";
	// 	for(auto j : adj[i])
	// 		cout<<j<<" ";
	// 	cout<<endl;
	// }
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==0) 
		{
			id=10005;
			mx=0;
			dfs(i);
			sum+=mx;
			ids.pb(id);
		}
	}
	sort(all(ids));
	cout<<sum<<" "<<ans-sum<<endl;
	for(auto i : ids) cout<<i<<" ";
		cout<<endl;
	return 0;
}
