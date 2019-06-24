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
int n,k;
vector<ll> height;
vector<int> arr[100001];
ll dfs(int wt[],int i,int p)
{
	height[i]=wt[i];
	for(auto  j: arr[i]){
		if(j==p ) continue;
		height[i]+=dfs(wt,j,i);
	}
	if(-height[i]>k) height[i]=-k;
	return height[i];
}
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>n>>k;
		height.resize(n+1,0);
		for(int i=0;i<=n;i++)
		arr[i].clear();
		int wt[n+1];
		ll sum=0;
		for(int i=1;i<=n;i++) cin>>wt[i];
		for(int i=0;i<n-1;i++) {
			cin>>a>>b;
			arr[a].pb(b);
			arr[b].pb(a);
		}
		cout<<dfs(wt,1,0)<<endl;
		
	}
	return 0;
}