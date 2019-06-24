#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		sum+=arr[i];
    	}
    ll m;
    cin>>m;
    ll q[m];
    for(ll i=0;i<m;i++)
    	cin>>q[i];
    sort(arr,arr+n);
    for(ll i=0;i<m;i++)
    {
    	ll ans=sum-arr[n-q[i]];
    	cout<<ans<<endl;
    }


}