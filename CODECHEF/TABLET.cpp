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
		ll n,b,w,h,p;
		vector<pair<ll,ll>> v;
		cin>>n>>b;
		for(int i=0;i<n;i++)
		{
			cin>>w>>h>>p;
			if(p<=b)
			v.pb(mk(h*w,b));
		}
		sort(all(v));
		int sz=v.size();
		if(sz==0) cout<<"no tablet"<<endl;
		else cout<<v[sz-1].ff<<endl;
	}
	return 0;
}