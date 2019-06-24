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
	int t,m,n;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		int arr[m][n];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>arr[i][j];
		for(int i=1;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j==n-1)
				{
					arr[i][j]+=max(arr[i-1][j],arr[i-1][j-1]);
				}
				else if(j==0)
				{
					arr[i][j]+=max(arr[i-1][j],arr[i-1][j+1]);
				}
				else 
				{
					arr[i][j]+=max({arr[i-1][j-1],arr[i-1][j],arr[i-1][j+1]});
				}
			}
		}
		int ans=0;
		for(int i=0;i<n;i++) ans=max(ans,arr[m-1][i]);
		cout<<ans<<endl;
	}
	return 0;
}