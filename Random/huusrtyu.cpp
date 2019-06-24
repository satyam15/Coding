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

int main(void)
{
	int n;
	vector<ll> x[n];
	vector<ll> y[n];
	vector<ll>::iterator ix,iy;
	ll xax,yax;
	for(int i=0;i<n;i++)
	{
		cin>>xax>>yax;
		x.push_back(xax);
		y.push_back(yax);
	}
	sort(x.begin(), x.end()); 
	sort(y.begin(), y.end()); 
	ix = unique(x.begin(), x.begin() + n);
	iy = unique(y.begin(), y.begin() + n);
	x.resize(distance(x.begin(), ix));
	y.resize(distance(y.begin(), iy));
	ll m,n;
	m=x.size()-1;
	n=y.size()-1;
	ll answer=((((m%mod)*(n%mod))%mod*(m+1)%mod)%mod*(n+1)%mod)%mod;
	ll ans=modRecursion(4,1000000005,mod);
	ll fin=((answer%mod)*(ans%mod))%mod;
	cout<<fin;
}
