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
int arr[501][501];
int visited[501][501];
vector<pair<int,pair<int,int>>> ans;
int n,m;
int valid(int i,int j)
{
	return ((i>=1&&i<=n)&&(j>=1&&j<=m));
}
int flag=0;
pair<int,pair<int,int>> dfs(int x,int y,int j)
{
	visited[x][y]=1;
	int fl=0;
	pair<int,pair<int,int>> temp;
	if(x==1||y==1||x==n||y==m){
		flag=1;
	}
	if(flag==1) return mk(1,mk(x,y));
	if(valid(x+1,y))
	{
		if(visited[x+1][y]==0&&arr[x][y]-arr[x+1][y]>=0&&arr[x][y]-arr[x+1][y]<=j)
		{
			fl=1;
			temp=dfs(x+1,y,j);
			if(temp.ff!=0) ans.pb(temp);
		}
	}
	if(valid(x-1,y))
	{
		if(visited[x-1][y]==0&&arr[x][y]-arr[x-1][y]>=0&&arr[x][y]-arr[x-1][y]<=j)
		{
			fl=1;
			temp=dfs(x-1,y,j);
			if(temp.ff!=0) ans.pb(temp);
		}
	}
	if(valid(x,y+1))
	{
		if(visited[x][y+1]==0&&arr[x][y]-arr[x][y+1]>=0&&arr[x][y]-arr[x][y+1]<=j)
		{
			fl=1;
			temp=dfs(x,y+1,j);
			if(temp.ff!=0) ans.pb(temp);
		}
	}
	if(valid(x,y-1))
	{
		if(visited[x][y-1]==0&&arr[x][y]-arr[x][y-1]>=0&&arr[x][y]-arr[x][y-1]<=j)
		{
			fl=1;
			temp=dfs(x,y-1,j);
			if(temp.ff!=0) ans.pb(temp);
		}
	}
	if(fl==0) return mk(0,mk(x,y));
	else return mk(temp.ff+1,mk(x,y));

}
int main(void)
{
	FIO
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
			{
				cin>>arr[i][j];
				visited[i][j]=0;
			}
	}
	int x,y,j;
	cin>>x>>y>>j;
	pair<int,pair<int,int>> temp=dfs(x,y,j);
	ans.pb(temp);
	int sz=ans.size();
	if(flag==1)
	{
		cout<<"YES"<<endl;
		cout<<sz<<endl;
		for(int i=sz-1;i>=0;i--)
			cout<<ans[i].ss.ff<<" "<<ans[i].ss.ss<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;

}