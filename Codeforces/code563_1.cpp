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
	int fl=0,arr[2*n];
	int x;
	cin>>arr[0];
	for(int i=1;i<2*n;i++)
	{
		cin>>arr[i];
		if(arr[0]!=arr[i])
		fl=1;
	}
	if(fl==0) cout<<"-1"<<endl;
	else
	{
		sort(arr,arr+2*n);
		for(int i=0;i<2*n;i++) cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
