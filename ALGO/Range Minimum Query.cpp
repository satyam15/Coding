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
vector<int> tree;
void build(int arr[],int start,int end,int node)
{
	if(start==end)tree[node]=arr[start];
	else
	{
		int mid=(end+start)/2;
		build(arr,start,mid,2*node);
		build(arr,mid+1,end,2*node+1);
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}

}
void update(int arr[],int x,int y,int start,int end,int node)
{
	if(start==end)
	{
		arr[x]=y;
		tree[node]=y;
	}
	else
	{
		int mid=(start+end)/2;
		if(start<=x&&mid>=x) update(arr,x,y,start,mid,2*node);
		else update(arr,x,y,mid+1,end,2*node+1);
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
} 

int query(int arr[],int l,int r,int start,int end,int node)
{
	if(r<start||end<l)return 1000000;
	int mid=(start+end)/2;
	if(start>=l&&end<=r) return tree[node];
	return min(query(arr,l,r,start,mid,2*node),query(arr,l,r,mid+1,end,2*node+1));
}
int main(void)
{
	FIO	
	int n,q;
	cin>>n>>q;
	int arr[n+1],l,r;
	char c;
	tree=vector<int> (20*n+1,1000000);
	for(int i=1;i<=n;i++) cin>>arr[i];
	build(arr,1,n,1);
	while(q--)
	{
		cin>>c>>l>>r;
		if(c=='q')cout<<query(arr,l,r,1,n,1)<<endl;
		else update(arr,l,r,1,n,1);
	}
	return 0;
}