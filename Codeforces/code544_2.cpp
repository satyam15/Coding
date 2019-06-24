#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair211111
#define mod 1000000007
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
int main(void)
{
	FIO
	int n,k,x;
	cin>>n>>k;
	vector<int> arr(k,0);
	for(int i=0;i<n;i++)
	{
		cin>>x;
		++arr[x%k];
	}
	int ans=arr[0]/2;
	if(k%2==0)
	{
		ans+=arr[k/2]/2;
	}
	for(int i=1;i<(k+1)/2;i++)
	{
		int j=k-i;
		ans+=min(arr[i],arr[j]);
	}
	cout<<2*ans<<endl;
	return 0;
}