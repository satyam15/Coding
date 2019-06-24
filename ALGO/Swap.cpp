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
		int n,k,id=0,j=0;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int j=0;j<n&&k>0;j++)
			{
				int mn=arr[j];
				id=j;
			for(int i=j+1;i<=min(j+k,n-1);i++)
			{
				if(mn>arr[i])
				{
					mn=arr[i];
					id=i;
				}
			}
			for(int i=id;i>j;i--)
				swap(arr[i],arr[i-1]);
			k-=(id-j);	
		}
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	} 
	return 0;
}