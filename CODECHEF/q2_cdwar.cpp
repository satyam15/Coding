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

ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;
      x = x % p; 
    while (y > 0) 
    {   
        if (y%2!=0) 
            res = (res*x) % p; 
        y/=2;  
        x = (x*x) % p; 
    } 
    return res; 
}

ll modInverse(ll n, ll p) 
{ 
    return power(n, p-2, p); 
} 

ll bin(ll n, ll k) 
{ 
    ll res = 1; 
    if ( k > n - k ) 
        k = n - k; 
    for (ll i = 0; i < k; ++i) 
    { 
        res =((res%mod)*((n-i)%mod))%mod; 
        res =((res%mod)*(modInverse(i+1,mod)%mod))%mod; 
    } 

    return res; 
} 
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		ll n,r;
		cin>>n>>r;
		//cout<<power(2,n-r,mod)<<" "<<bin(n,r)<<endl;
		ll ans=((power(2,n-r,mod)%mod)*(bin(n,r)%mod))%mod;
		cout<<ans<<endl;
	}
	return 0;
}