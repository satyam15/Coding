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
	int lis[n];
	lis[0]=1;
	for(int i=1;i<n;i++)
	{
		lis[i]=1;
		for(int j=0;j<i;j++)
		{
			if(arr[j]<arr[i] && lis[i]<lis[j]+1)
			{
				lis[i]=lis[j]+1;
			}
		}
	}
	int mx=0;
	//for(auto i: lis) cout<<i<<" ";
	for(int i=0;i<n;i++)
	{
		if(mx<lis[i]) mx=lis[i];
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