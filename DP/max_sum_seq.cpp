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
int ans(int arr[],int n)
{
	int max_sum[n];
	for(int i=0;i<n;i++) max_sum[i]=arr[i];
		for(int i=1;i<n;i++)
			for(int j=0;j<i;j++)
			{
				if(arr[i]>arr[j] && max_sum[i]< max_sum[j]+arr[i])
					max_sum[i]=max_sum[j]+arr[i];
			}
			int mx=0;
	//for(auto i: lis) cout<<i<<" ";
	for(int i=0;i<n;i++)
	{
		if(mx<max_sum[i]) mx=max_sum[i];
	}
	return mx;
}
int main(void)
{
	FIO
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
		cout<<ans(arr,n)<<endl;
}