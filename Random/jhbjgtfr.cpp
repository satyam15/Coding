#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		long long a,sum,d,ans;
		cin>>n>>a>>k;
		sum=(n-2)*180;
		d=2*(sum/n)-2*a;
		
		d/=(n-1);
		cout<<d<<endl;
		ans=a+(k-1)*d;
		cout<<ans<<" "<<1<<endl;
	}
}
