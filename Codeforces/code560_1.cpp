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
	int n,x,y;
	cin>>n>>x>>y;
	string s;
	cin>>s;
	int ans=0,dig;
	for(int i=n-1;i>n-x-1;i--)
	{
		dig=s[i]-'0';
		if(i!=n-1-y&&dig==1) ans++;
		else if(i==n-1-y&&dig==0) ans++;
	}
	cout<<ans<<endl;
	return 0;
}