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
int main(void)
{
	FIO	
	ll n,q,x;
	cin>>n>>q;
	ll arr[n],arr1[n],arr2[n];
	for(ll i=0;i<n;i++) cin>>arr[i];
	arr1[0]=arr[0];
	for(ll i=1;i<n;i++)
	{
		arr1[i]=max(arr[i],arr1[i-1]);
		if(arr1[i]==arr[i]) arr2[i-1]=arr1[i-1];
		else arr2[i-1]=arr[i];
	}
	while(q--)
	{
		cin>>x;
		if(x<n) cout<<arr1[x-1]<<" "<<arr[x]<<endl;
		else cout<<arr1[n-1]<<" "<<arr2[(x-1)%(n-1)]<<endl;
	}
	return 0;
}