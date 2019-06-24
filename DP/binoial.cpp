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
ll bino(int n,int k)
{
	ll ans=1;
	if(k<n-k)
		k=n-k;
	for(int i=0;i<k;i++)
	{
		ans*=(n-i);
		ans/=(i+1);
	}
	return ans;
}

ll power(int i,int j)
{
	ll ans=1;
	while(j>0)
	{
		if(j%2!=0)
			ans=(ans%mod*i%mod)%mod;
		i=i*i;
		j/=2;
	}
	return ans;
}
int main(void)
{
	FIO
	int n,k;
	cin>>n>>k;
	ll x=bino(n,k);
	cout<<x<<endl;
	return 0;
}