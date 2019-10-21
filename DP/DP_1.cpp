#include <bits/stdc++.h>
using namespace std;
//#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define mod 1000000007
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
int dp[50][50];
int ans(int arr[],int n,int k)
{
	int ANS=mx=10000000;
	if(dp[n][k]!=-1) return dp[n][k];
	if(k==1) 
	{
		for(int i=0;i<n;i++) {
			if(mx>arr[i]) mx=arr[i];
		}
		return mx;
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]<arr[n]) ANS=max({ANS,ans(arr,i,k-1)+arr[n],ans(arr,i,k)});
		else ANS=max(ANS,ans(arr,i,k));
	}
	dp[n][k]=ANS;
	return dp[n][k];
}
int main(void)
{
	FIO
	int n,k;
	cin>>n>>K;
	memset(dp,-1,sizeof(dp)/sizeof(int)*50*50);
	int arr[]={ 58, 12, 11, 12, 82, 30, 
                20, 77, 16, 86 }; 
                n=10;
	for(int i=0;i<n;i++) cin>>arr[i];
	cout<<ans(arr,n-1,k);
}
