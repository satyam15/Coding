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
vector<int> tree,arr;
void build(int start,int end,int node)
{
	if(start==end) tree[node]=arr[start]%2==0?1:0;
	else
	{
		int mid=(start+end)/2;
		build(start,mid,2*node);
		build(mid+1,end,2*node+1);
		tree[node]=tree[2*node]+tree[2*node+1];
	}
}
void update(int start,int end,int idx,int val,int node)
{
	if(start==end)
	{
		arr[idx]=val;
		tree[node]=arr[start]%2==0?1:0;
	}
	else
	{
		int mid=(start+end)/2;
		if(idx<=mid) update(start,mid,idx,val,2*node);
		else update(mid+1,end,idx,val,2*node+1);
		tree[node]=tree[2*node+1]+tree[2*node];
	}
}
int query(int start,int end,int l,int r,int node)
{
	if(r<start||end<l) return 0;
	if(start>=l&&end<=r) return tree[node];
	int mid=(start+end)/2;
	return (query(start,mid,l,r,2*node)+query(mid+1,end,l,r,2*node+1));
}
int main(void)
{
	FIO	
	int n,q,a,b,c;
	cin>>n;
	arr=vector<int>(n+1);
	tree=vector<int> (20*n+1);
	for(int i=1;i<=n;i++) cin>>arr[i];
	build(1,n,1);
	cin>>q;
	while(q--)
	{
		cin>>a>>b>>c;
		if(a==0) update(1,n,b,c,1);
		if(a==1) cout<<query(1,n,b,c,1)<<endl;
		if(a==2) cout<<c-b+1-query(1,n,b,c,1)<<endl;
	}
	return 0;
}