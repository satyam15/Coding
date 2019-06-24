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
	ll t,a,b;
	cin>>t;
	while(t--)
	{
		ll n,miny,maxy,minx,maxx;
		cin>>n;
		cin>>a>>b;
		minx=maxx=a;
		miny=maxy=b;
		for(ll i=1;i<n;i++)
		{
			cin>>a>>b;
			minx=min(minx,a);
			miny=min(miny,b);
			maxx=max(maxx,a);
			maxy=max(maxy,b);
		}
		ll ans=max((maxy-miny),(maxx-minx));
		cout<<ans*ans<<endl;
	}
	return 0;
}