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
int dp[100000];	
ll fun1(int n)
{
	if(n<12)
		return n;
	if(dp[n]!=-1) return dp[n];
	dp[n]=fun1(n/2)+fun1(n/3)+fun1(n/4);
	return dp[n];
}
ll fun(ll n)
{
	if(n<100000)
		return dp[n];
	return(fun(n/2)+fun(n/3)+fun(n/4));
}
int main(void)
{
	FIO
	ll n;
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<100000;i++)
	{
		dp[i]=fun1(i);
	}
	while(cin>>n)
	{
	cout<<fun(n)<<endl;
	}
	return 0;
}