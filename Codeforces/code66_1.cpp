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
	ll n,k;
	ll ans=0;
	cin>>n>>k;
	while(n>0)
	{
		if(n%k==0)
		{
			while(n>0&&n%k==0)
			{
				n/=k;
				ans++;
			}
		}
		else
		{
			ans+=(n-(n/k)*k);
			n=(n/k)*k;
		}
		// cout<<n<<" ";
	}
	cout<<ans<<endl;} 	
	return 0;
}