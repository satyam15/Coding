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
	int arr[3],d;
	cin>>arr[0]>>arr[1]>>arr[2]>>d;
	sort(arr,arr+3);
	ll ans=0;
	if(d-arr[1]+arr[0]>0) ans+=d-arr[1]+arr[0];
	if(d-arr[2]+arr[1]>0) ans+=(d-arr[2]+arr[1]);
	cout<<ans<<endl;
}