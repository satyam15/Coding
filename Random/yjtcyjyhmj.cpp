#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int p,s,h,t,x;
	cin>>p>>s>>t>>h>>x;
	long long int ans;
	if(s-t>=x)
	{
		ans=p*x;
	}
	else if(x>s-t)
	{
		ans=h*(x-s+t)+p*(s-t);
	}
	cout<<ans;
	return 0;
}
