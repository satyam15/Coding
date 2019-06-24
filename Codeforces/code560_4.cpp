#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define mod 1000000007
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		ll ans;
		cin>>n;
		vector<ll> arr(n);
		for(int i=0;i<n;i++) cin>>arr[i];
		sort(all(arr));
		ans=arr[0]*arr[n-1];
		vector<ll> v;
		for(ll i=2;i*i<=ans;i++)
		{
			if(ans%i==0){ v.pb(i);
			if(i!=ans/i) v.pb(ans/i);}
		}
		sort(all(v));
		if(v==arr) cout<<ans<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}