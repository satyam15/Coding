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
ll power(ll a, ll b){ll res=1;a=a%mod; while(b){if(b&1)res=(res*a)%mod; a=(a*a)%mod;b/=2;}return res;}
ll invmod(ll a){return power(a,mod-2);}
vector<int> tree,lazy;
void update(int start,int end,int l,int r,int node)
{
	if(start>r||end<l) return;
	if(lazy[node]!=0)
	{
		tree[node]+=lazy[node];
		if(start!=end)
		{
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]=lazy[node];
		}
		lazy[node]=0;
	}
	if(start>=l&&end<=r)
	{
		tree[node]+=1;
		if(start!=end)
		{
			lazy[2*node]+=1;
			lazy[2*node+1]+=1;
		}
		return;
	}
	int mid=(start+end)/2;
	update(start,mid,l,r,2*node);
	update(mid+1,end,l,r,2*node+1);
	tree[node]=min(tree[2*node],tree[2*node+1]);
}
ll query(int start,int end,int node,int x)
{
	if(lazy[node]!=0)
	{
		tree[node]+=lazy[node];
		if(start!=end)
		{
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(tree[node]>=x) return (end-start+1);
	int mid=(start+end)/2;
	return (query(start,mid,2*node,x)+query(mid+1,end,2*node+1,x));
}
int main(void)
{
	FIO	
	int n,m,a,b,q;
	cin>>n>>m;
	tree=vector<int>(20*n+1,0);
	lazy=vector<int>(20*n+1,0);
	while(m--)
	{
		cin>>a>>b;
		update(1,n,a,b,1);
	}
	cin>>q;
	while(q--)
	{
		cin>>a;
		cout<<query(1,n,1,a)<<endl;
	}
	return 0;
}