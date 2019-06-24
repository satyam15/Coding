#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll ans=0;
    if(n-k>k-1)
    {
    	ans+=3*n+(k-1);
    }
    else
    	ans+=3*n+(n-k);
    cout<<ans<<endl;
    return 0;
}