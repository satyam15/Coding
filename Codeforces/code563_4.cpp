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
	int n,k;
	cin>>n>>k;
	int arr[1<<18]={0};
	arr[0]=1;
	vector<int> v({0});
	for(int i=1;i<(1<<n);i++)
	{
		if(arr[i^k]) continue;
		v.pb(i);
		arr[i]=1;
	}
	for(auto j: v) cout<<j<<endl;
	int sz=v.size()-1;
	cout<<sz<<endl;
	for(int i=1;i<=sz;i++)
	{
		cout<<(v[i]^v[i-1])<<" ";
	}
	return 0;
}
