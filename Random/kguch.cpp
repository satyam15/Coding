#include<bits/stdc++.h>
using namespace std;
int dp[100];
int factorial(int n)
{
	if(n==0)
	return 1;
	if(dp[n]!=-1)
	return dp[n];
	return dp[n]=n*factorial(n-1);
}
int main(void)
{
	memset(dp,-1,sizeof(dp));
	int x;
	while(1)
	{
	cin>>x;
	cout<<factorial(x)<<endl;
	}
	return 0;
}
