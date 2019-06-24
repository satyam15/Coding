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
    cin>>n;
    ll arr[n+1][2];
    for(ll i=1;i<=n;i++)
    {
    	cin>>arr[i][0]>>arr[i][1];
    }
    ll count=0;
    cin>>k;
    for(ll i=1;i<=n;i++)
    {
    	if(k>=arr[i][0] && k<=arr[i][1])
    	{
    		count=n-i+1;
    		break;
    	}
    }
    cout<<count<<endl;
    return 0;
}