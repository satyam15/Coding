#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,k,v;
	ll t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>v;
		ll sum=0,x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			sum+=x;
		}		
		x=(n+k)*v-sum;
		if(x<=0||x%k!=0)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<x/k<<endl;
		}
	}
	return 0;

}