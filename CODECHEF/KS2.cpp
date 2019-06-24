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
ll sumofdig(string n)
{
	ll ans=0;
	for(int i=0;i<n.size();i++)
	{
		ans+=(n[i]-'0');
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
		string n;
		cin>>n;
		ll r=sumofdig(n)%10;
		ll ls=r?(10-r):0;
		n+=to_string(ls);
		cout<<n<<endl;
	}
	return 0;
}