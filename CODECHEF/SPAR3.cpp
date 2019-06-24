#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--){
		int m,n;
		ll sum=0;
		cin>>n>>m;
		ll c[n+1][m+1],dp[n+1][m+1];
		for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>c[i][j];
		for(int i=1;i<=n;i++) {sum+=c[i][1]; dp[i][1]=sum;}
		for(int i=2;i<=m;i++){
			ll dp1[n+1],dp2[n+1];
			for(int j=1;j<=n;j++) dp1[j]=dp2[j]=dp[j][i-1]+c[j][i];      //from left to right
			for(int j=2;j<=n;j++) dp1[j]=max(dp1[j-1]+c[j][i],dp1[j]); //max of from up to down and from left to right
			for(int j=n-1;j>=1;j--) dp2[j]=max(dp2[j+1]+c[j][i],dp2[j]);  //max of from down to up and from left to right
			for(int j=1;j<=n;j++) dp[j][i]=max(dp1[j],dp2[j]);}           // max of all tree paths
		cout<<dp[n][m]<<endl;}
	return 0;
}