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
// bool flag=false;
// void fun(int p,int i,int n,int arr[],int m)
// {
// 	if(i>n) return;
// 	if(!flag)
// 	{
// 		if((p+arr[i])%m==0) { flag=true; return;}
// 	}
// 	fun(p+arr[i],i+1,n,arr,m);
// 	fun(p,i+1,n,arr,m);
// }
bool fun(int arr[],int n,int m)
{
	bool dp[m],dp1[m];
	if(n>m) 
		{
			// for(int i=0;i<m;i++) dp[i]?cout<<"T ":cout<<"F ";
			return true;
	}
	memset(dp,false,sizeof(dp));
	for(int i=0;i<n;i++)
	{
		cout<<i<<" ";
		// for(int i=0;i<m;i++) dp[i]?cout<<"T ":cout<<"F ";
		if(dp[0]) return true;
		memset(dp1,false,sizeof(dp1));
		for(int j=0;j<m;j++)
		{
			if(dp[j]==true)
			{
				if(dp[(j+arr[i])%m]==false)
				dp1[(j+arr[i])%m]=true;
			}
		}
		for(int j=0;j<m;j++)
		{
			if(dp1[j]) dp[j]=true;
		}
		dp[arr[i]%m]=true;
	}
	//for(int i=0;i<m;i++) dp[i]?cout<<"T ":cout<<"F ";
	return dp[0];
}
int main(void)
{
	FIO
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	// 	fun(0,0,n-1,arr,m);
	fun(arr,n,m)? cout<<"yes"<<endl:cout<<"no"<<endl;
	return 0;
}