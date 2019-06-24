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
	int od=0,ev=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]%2==0) ev=1;
		else od=1;
	}
	if(od&&ev) sort(arr,arr+n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}