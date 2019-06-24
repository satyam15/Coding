#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll x,y;
    	cin>>x>>y;
    	for(ll i=0;i<=y;i++)
    	{
    		ll a=x-2*i;
    		if(a+i<=y)
    		{
    			cout<<i<<endl;
    			break;
    		}
    	}
    }
    return 0;
}