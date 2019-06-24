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
	int n,k,x;
	cin>>n;
	int arr[100001];
	memset(arr,0,sizeof(arr));
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr[x]++;
	}
	cin>>k;
	int ans=INT_MAX;
	for(int i=0;i<100001;i++)
	{
		if(arr[i]==0) continue;
		ans=min(ans,arr[i]);
	}
	cout<<ans<<endl;
	return 0;
}