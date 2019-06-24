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
ll sumofdig(ll n)
{
	ll ans=0;
	while(n)
	{
		ans+=n%10;
		n/=10;
	}
	return ans;
}
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		ll n,cnt=0;
		cin>>n;
		for(ll i=1;i<n*100;i++)
		{
			if(sumofdig(i)%10==0)
			{
				++cnt;
				// cout<<cnt<<" "<<i<<endl;
				if(cnt==n) cout<<i<<endl;
			}  
		}
	}
}