#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
typedef struct Paint
{
	ll a,b;	
}pt;
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);s
    vector< pair <int,int> > vect;
    ll n,q;
    ll a,b;
    ll arr[n+1];
    memset(arr,sizeof(n+1));
    pt painter[q];
    for(ll i=0;i<q;i++)
    {
    	cin>>a>>b;
    	vect.push_back( make_pair(a,b)); 
    	for(ll j=a;j<=b;j++)
    		arr[j]++;
    }



}