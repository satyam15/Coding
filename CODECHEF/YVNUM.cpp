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
		int size;
		cin.clear();
		string n;
		cin>>n;
		ll ans=atoi(n.c_str());
		string s=n;
		size=s.size();
		while(size-- && size>=1)
		{
			s=s.append(s,0,1);
			s=s.substr(1,s.size()-1);
			int b=atoi(s.c_str());
			ans=(((ans%mod)*((ll)(pow(10,s.size())))%mod)%mod+b%mod)%mod;
		}
		cout<<ans<<endl;
	}
	return 0;
}w