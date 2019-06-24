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
	string s;
	int x=1,y;
	while(true)
	{
		cin>>s;
		int t=1,q,len=s.size();
		x=s[0]-'0';
		if(x==0) break;
		if(len==1)
		{
			cout<<1<<endl;
			continue;
		}
		int dp[len];
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		
		q=s[1]-'0';
			y=x*10+(s[1]-'0');
			if(y<27&&q>0) dp[1]=2;
			else if(y<27&&q==0) dp[1]=1;
			else if(y>26&&q!=0)
			{
				dp[1]=1;
			}
			else {
				cout<<0<<endl;
				t=0;
			}
		for(int i=2;i<len&&t!=0;i++)
		{
			y=(s[i-1]-'0')*10+(s[i]-'0');
			if(y==0)
			{
				cout<<0<<endl;
				t=0;
				break;
			}
			q=s[i]-'0';
			if(y>26&&q==0 ) { 
			cout<<0<<endl;
				t=0;
				break;
			}
			else if (y<=26&&q==0)
			{
				dp[i]=dp[i-2];
			}
			else if(y/10==0||y>26) dp[i]=dp[i-1];
			else if(y<=26) dp[i]=dp[i-1]+dp[i-2];
		}
		if(t!=0)
		cout<<dp[len-1]<<endl;
	}
	return 0;
}