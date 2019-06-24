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
int bino(int n,int m)
{
	if(m<n-m)
		m=n-m;
	int res=1;
	for(int i=0;i<m;i++)
	{
		res*=(n-i);
		res/=(i+1);
	}
	return res;
}
int main(void)
{
	FIO
	int n;
	cin>>n;
	int ans=bino(2*n,n)/(n+1);
	cout<<ans<<endl;
	return 0;
}