#include <bits/stdc++.h>
using namespace std;
#define ld long double
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
    	ll n,a;
        cin>>n;
    	ll countn=0,countp=0;
    	for(ll i=0;i<n;i++)
    	{
    		cin>>a;
    		if(a<0) countn++;
    		else countp++;
    			
    	}
        if(countp==0 || countn==0)
        {
            ll x=countn==0?countp:countn;
            cout<<x<<" "<<x<<endl;
        }
        else
        {
            if(countn>=countp)
                cout<<countn<<" "<<countp<<endl;
            else
                cout<<countp<<" "<<countn<<endl;
        }
    }
    return 0;
}