// A Lucas Theorem based solution to compute nCr % p 
#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
#define mod 1000000007
ll fac[1001];
void factorial()
{
    fac[0]=1;
    fac[1]=1;
    for(ll i=2;i<=1000;i++)
        fac[i]=((i%mod)*(fac[i-1]%mod)%mod);
}
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
ll com(ll n,ll r)
{
    return (fac[n]* modInverse(fac[r], mod) % mod*modInverse(fac[n-r], mod) % mod) % mod;
}
int main() 
{ 
   int t;
   cin>>t;
   factorial();
   while(t--)
   {
    ll a,b,c;
    cin>>a>>b>>c;
    ll A=power(2,c,mod)-1;
    ll AB=0;
    ll min=a<b?a:b;
    ll B=0;
    if(min==b)
    {
        ll i;
        for( i=2;i<=min;i++)
        {
            B=(B+com(b,i-1))%mod;
            AB=(AB+(com(a,i)%mod*(B%mod)))%mod;
        }
        B=(B+com(b,min))%mod;
        for(ll i=min+1;i<=a;i++)
        {
            AB=(AB+(com(a,i)%mod*(B%mod)))%mod;
        }
    }
    else
    {
        for(ll i=2;i<=min;i++)
        {
        B=(B+com(b,i-1))%mod;
        AB=(AB+(com(a,i)%mod*(B%mod)))%mod;
        }
    }

    ll ans=((A%mod)*(AB%mod))%mod;
    cout<<ans<<endl;
   } 
   return 0;
} 
