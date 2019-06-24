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
	int n,k,d;
	cin>>n>>k>>d;
	ll sum,ans=0,flag=0;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i+=k)
	{
		sum=0;
		flag=0;
		for(int j=i;j<min(i+k,n);j++)
		{
			sum+=arr[j];
			if(arr[i]!=0) flag=1;
		}
		if(sum<d)
		{
			if(flag==0)
			{
				ans=-1; 
				break;
			}
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;	
}