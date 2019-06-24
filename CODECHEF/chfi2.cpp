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
		ll b=n+k-1;
		ll a=(ll)ceil(((ld)k/(n-1))); // minimum value of a for which k*(a+1)<=(n+k-1)*a
		// cout<<a<<endl;
		if(a>=1)
		{
			ll sum1=((((((a%mod)*(a+1)%mod)%mod)*(k%mod))%mod*invmod(2)%mod)%mod-k%mod+mod)%mod; //sum1= k*(sum of first a numbers -1)
			ll sum2=(((((a%mod)*(a-1)%mod)%mod)*(b%mod))%mod*invmod(2)%mod)%mod; //sum2=(k+n-1)*(first a-1 numbers)
			ll tp=a;
			a++;
			ll sum3=k*a-b*(a-1)-1; //check for a+1 
			if(sum3>0) ans=(ans+sum3%mod)%mod;
			ans=(ans+((sum1-sum2+mod)%mod-(tp-1)%mod+mod)%mod)%mod;
			// cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
		}
		cout<<ans<<endl;
	}
}