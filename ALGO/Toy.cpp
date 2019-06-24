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
#define all(x) x.rbegin(),x.rend()
int main(void)
{
	FIO
	int m,n,a,b;
	cin>>n>>m;
	vector<int> v(m+1,0);
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(v[b]<a) v[b]=a;
	}
	int ans=0;
	for(int i=1;i<=m;i++)
		ans+=v[i];
	cout<<ans<<endl;
	return 0;
}