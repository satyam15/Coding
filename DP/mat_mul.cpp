// #include <bits/stdc++.h>
// using namespace std;
// #define ld double
// #define ll long long
// #define pb push_back
// #define mk make_pair
// #define mod 1000000007
// #define ff first
// #define ss second
// #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define all(x) x.begin(),x.end()
// int main(void)
// {
// 	FIO
// 	int n;
// 	int arr[n];
// 	cin>>n;
// 	for(int i=0;i<n;i++)
// 		cin>>arr[n];
// 	int dp[n][n];
// 	for(int i=1;i<n;i++) dp[i][i]=0;
// 	for(int len=2;len<n;len++)
// 	{
// 		for(int i=1;int<n-len+1;i++)
// 		{
// 			int j=i+len-1;
// 			dp[i][j]=INT_MAX;
// 			for(int k=i;k<=j-1;k++)
// 			{
// 				int cost=dp[i][k]+dp[k+1][j]+arr[i-1]*arr[k]*arr[j];
// 				dp[i][j]=min(dp[i][j],cost);
// 			}
// 		}
// 	}
// 	  for(int i=0;i<n;i++)
//   {
//     	for(int j=0;j<n;j++)
//           printf("%d ",dp[i][j]);
//     printf("\n");
//   }
// 	cout<<dp[1][n-1]<<endl;
// 	return 0;
// }