#include <bits/stdc++.h>
using namespace std;
#define ll long double
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll v1,t1,v2,t2,v3,t3;
        cin>>v1>>t1>>v2>>t2>>v3>>t3;
        ll x=v3*(t3-t2);
        ll x1=x/(t1-t2);
        ll y=v3*(t3-t1);
        ll y1=y/(t2-t1);
        if((x1<=v1)&&(x1>=0)&&(y1<=v2)&&(y1>=0))
        cout<<"YES"<<endl;
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}