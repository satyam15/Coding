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
bool visited[100002];
int main(void)
{
	FIO
	int t;
	int xx[]={1,-1,0,0};
	int yy[]={0,0,1,-1};
	cin>>t;
	while(t--)
	{
		int r1,c1,r2,c2,m,n;
		ll count=0,ans=0;
		cin>>n>>m;
		cin>>r1>>c1>>r2>>c2;
		vector<vector<ll>> adj(n,vector<ll> (m));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>adj[i][j];
				visited[i*m+j]=false;
			}
		}
         priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<pair<ll,pair<ll,ll>>>> q;
		q.push(mk(0,mk(0,0)));
		while(!q.empty()&&count<(m*n))
		{
			ll x=q.top().ss.ff;
			ll y=q.top().ss.ss;
			ll w=q.top().ff;
			q.pop();
			if(visited[x*m+y]) continue;
			visited[x*m+y]=true;
			count++;
			ans+=w;
			for(int i=0;i<4;i++)
			{
				r2=x+xx[i];
				c2=y+yy[i];
				if(r2>=0&&r2<n&&c2>=0&&c2<m&&visited[r2*m+c2]==false)
					q.push(mk(adj[x][y]^adj[r2][c2],mk(r2,c2)));
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
