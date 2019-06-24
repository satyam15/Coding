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
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		cin>>k;
		sort(arr,arr+n);
		int ans=arr[0],mx;
		mx=arr[0];
		for(int i=1;i<k;i++)
		{
			ans+=arr[i];
			mx=max(mx,arr[i]);
		}
		cout<<ans+mx*(n-k)<<endl;
	}
	return 0;
}