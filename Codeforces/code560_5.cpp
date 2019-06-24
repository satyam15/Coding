#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define mod 998244353
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
ll power(ll a, ll b){ll res=1;a=a%mod; while(b){if(b&1)res=(res*a)%mod; a=(a*a)%mod;b/=2;}return res;}
ll invmod(ll a){return power(a,mod-2);}
int main(void)
{
	FIO	
	int n;
	ll A;
	cin>>n;
	vector<int> a(n),b(n);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	sort(all(b));
	vector<ll> v;
	for(int i=0;i<n;i++)
	{
		A=(ll)(i+1)*(n-i)*a[i];
		v.pb(A);
	}
	sort(all(v),greater<ll>());
	A=0;
	for(int i=0;i<n;i++)
	{
		A=(A+((v[i]%mod)*(b[i]%mod))%mod)%mod;
	}
	cout<<A<<endl;
	return 0;
}