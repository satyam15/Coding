#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
int getnum(int a,int e,int i,int o,int u)
{
	int sum=0;	
	if(a==1) sum+=16;
	if(e==1) sum+=8;
	if(i==1) sum+=4;
	if(o==1) sum+=2;
	if(u==1) sum+=1;
	return sum;
}
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll arr[32];
    	memset(arr,0,sizeof(arr));
    	int a,e,i,o,u;
    	for(ll j=0;j<n;j++)
    	{
    		string s;
    		cin.clear();
    		cin>>s;
    		a=e=i=o=u=0;
	    	for(int I=0;I<s.length();I++)
	    	{
	    		if(s[I]=='a') a=1;
	    		else if(s[I]=='e') e=1;
	    		else if(s[I]=='i') i=1;
	    		else if(s[I]=='o') o=1;
	    		else if(s[I]=='u') u=1;
	    	}
	    		arr[getnum(a,e,i,o,u)]++;
		}
		ll  ans=0;
		for(int m=1;m<=30;m++)
		{
			for(int n=m+1;n<=31;n++)
			{
				if((m|n) == 31)
					ans+=arr[m]*arr[n];
			}
		}
		if(arr[31]>=2)
		{
			ans+=(arr[31]*(arr[31]-1))/2;
		}
		cout<<ans<<endl;
    }
    return 0;
}