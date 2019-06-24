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
vector<int> A;
int maxSubArray() {
    int s=A.size();
    int dp[s][s];
    int sum=0;
    int ans=INT_MIN;
    for(int i=0;i<s;i++)
    {
        dp[i][i]=A[i];
        sum+=A[i];
        ans=max({ans,sum,A[i]});
        dp[0][i]=sum;
    }
    for(int i=1;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            dp[i][j]=max(dp[i-1][j-1],dp[i][j-1])+A[j];
            ans=max(ans,dp[i][j]);
            cout<<ans<<" ";
        }
    }
    // for(int i=0;i<s;i++)
    	
    // 	{for(int j=0;j<s;j++)
    // 	{
    // 		cout<<dp[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }
    return ans;
}
int main(void)
{
	FIO
	int n,x;
	cin>>n;
		
	for(int i=0;i<n;i++)
		{cin>>x; A.pb(x);}
	cout<<maxSubArray()<<endl;
}