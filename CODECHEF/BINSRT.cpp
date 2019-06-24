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
    	vector< ll > arr;
        vector<ll>::iterator ip;
        ll a,b,c;
        for(ll i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            if(a!=-1)
                arr.push_back(a);
            if(b!=-1)
                arr.push_back(b);
            if(c!=-1)
                arr.push_back(c);
        }
        sort(arr.begin(), arr.end());
        ip = unique(arr.begin(), arr.end());
        arr.resize(distance(arr.begin(), ip)); 
        for (ip = arr.begin(); ip != arr.end(); ++ip) { 
        cout << *ip << " ";
    }
    }
    return 0;
}