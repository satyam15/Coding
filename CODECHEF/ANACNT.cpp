#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define pb push_back
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	cin.clear();
    	ll n;
    	cin>>n;
    	vector< pair <ll,ll> > arr;
    	ll count=0;
    	ll a,b;
    	for(ll i=1;i<=n;i++)
    	{
    		cin>>a>>b;
    		arr.push_back(make_pair(a,b));
    	}
    	sort(arr.begin(), arr.end()); 
    	ll time=0;
    	time=arr[0].second;
    	for(ll i=1;i<n;i++)
    	{
    		if(time<arr[i].first)
    		{
    			time=arr[i].second;
    			count++;
    			
    		}
    		else
    		{
    			if(time<arr[i].second)
    				time=arr[i].second;
    		}
    	}
    	cout<<count+2<<endl;
    }
}