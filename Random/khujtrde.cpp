#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod= 1000000007;
ll modRecursion(ll a, ll b, ll c)
{
    if(b == 0)
    return 1;
    if(b == 1)
    return a%c;
    else if( b%2 == 0)                                          
    {
        return modRecursion((a *a)%c,b/2,c);
    }
    else                                                                    
    {
        return (a*modRecursion((a*a%c),b/2,c))%c;
    }
}
/*ll com(ll n,ll m)
{
	if(m==0)
	return 1;
	if(m==1)
	return n;
	ll tempn1,tempn=n;
	tempn1=n;
	ll tempm1,tempm=n-m;
	tempm1=n-m;
	for(ll i=1;i<n-m;i++)
	{
		tempn1*=(tempn-1);
		tempn1%=mod;
		tempn--;
	}
	for(ll i=1;i<n-m;i++)
	{
		tempm1*=(tempm-1);
		tempm1%mod;
		tempm--;
	}
	ll ans =tempn1/tempm1;
	
}
ll power(ll m,ll n)
{
	ll ans=1;
	while(n--)
	{
	ans*=m;
	ans%=mod;	
	}
	return ans;
}*/
ll comp(int n,int k) {
    int maxj = n-k;

    ll arr[maxj+1];

    for (int i = 0; i <= maxj; ++i)
        arr[i] = 1;

    for (int i = 2; i <= k; ++i)
        for(int j = 1; j <= maxj; ++j)
            {
            	ll x=((i%mod)*(arr[j-1]%mod))%mod;
            	arr[j]=arr[j]%mod+arr[j-1]%mod;
			}

    return arr[maxj];
}
int main(void)
{

	int t;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		ll ans=0;
		/*
		for(int i=0;i<x-1;i++)
		{
			if(i%2==0)
			ans+=((com(x,i)%mod)*(power(x-i,y)%mod))%mod;
			else 
			ans-=((com(x,i)%mod)*(power(x-i,y)%mod))%mod;
		}*/
		cout<<comp(x,y)<<endl;
	}
	return 0;
}
