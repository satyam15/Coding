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
bool prime[30000001];
vector<ll> Prime;
void sieve(){ll i;ll j;memset(prime,true,30000000);prime[0]=prime[1]=false;
for(i=2; i*i<=30000000; i++){if(prime[i]){for(j=2*i; j<=30000000; j+=i){prime[j]=false;}}}
for(int i=0;i<=30000000;i++) if(prime[i]) Prime.pb(i);}
ll power(ll a, ll b){ll res=1;a=a%mod; while(b){if(b&1)res=(res*a)%mod; a=(a*a)%mod;b/=2;}return res;}
ll invmod(ll a){return power(a,mod-2);}
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll ans=k-1; 
		ll d=1-n;
		ll fs=2*k-(k+n-1);
		ll a=(k/(n-1));
		ll lst=fs+(a-1)*d;
		if(lst<=0)
		{
			a--;
			lst=fs+(a-1)*d;
		}
		ans=(ans+((a%mod)*(fs%mod+lst%mod)%mod)%mod*invmod(2)-a%mod+mod)%mod;
		cout<<ans<<endl;
	}
}