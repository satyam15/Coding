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
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int x;
	cin>>x;
	int ans[x+1];
	memset(ans,0,sizeof(ans));
	ans[0]=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=x;j++)
		{
			if(arr[i]<=j) ans[j]+=ans[j-arr[i]]; 
		}
	}
	cout<<ans[x]<<endl;
	return 0;
}