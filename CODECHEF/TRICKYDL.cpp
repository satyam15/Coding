#include <bits/stdc++.h>
using namespace std;
#define ll long long
// ll power(ll n) 
// {  
//    ll p = (ll)log2(n); 
//    return (ll)pow(2, p);  
// }
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        ll d1,d2,max=0;
        ll i=1;
        while(1)
        {
            ll A=a*i+1-(ll)pow(2, i);
            if(max<A)
            {
                d2=i;
                max=A;
            }
            if(A<0
)            {
                d1=i-1;
                break;
            }
            i++;
        }
        cout<<d1<<" "<<d2<<endl;
    }
    return 0;
}
