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
	int n;
	cin>>n;
	int dp[n+1];
	for(int i=0;i<=n;i++)
	{
		if(i<=2)
			dp[i]=i;
		else 
			dp[i]=dp[i-1]+(i-1)*dp[i-2];
	}
	cout<<dp[n]<<endl;
	return 0;
}