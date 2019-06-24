#include<bits/stdc++.h>
#include<boost/math/common_factor.hpp>
using namespace std;
typedef long long int ll;
#define mod 1000000007;
/*int max(int a,int b)
{
  if(a>b)
  return a;
  else
  return b;
}
int min(int a, int b)
{
  if(a<b)
  return a;
  else
  return b;
}*/
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	 ll n,m,k;
	cin>>n>>m>>k;
	vector<ll>v(n);
	for(ll i=0;i<n;i++)
	cin>>v[i];
	ll sum=0;
	ll min=v[0];
	for(ll i=0;i<n;i++)
	{
		sum += ((m-v[i])/k)+1;
		if(v[i] < min)
			min=v[i];
	}
	ll temp=((m-min)/k)+1;
	ll	ans = (sum%2 == 0) ? (1+(temp/2))%1000000007 : ((temp+1)/2)%1000000007;
	cout<<ans;





	return 0;
}

