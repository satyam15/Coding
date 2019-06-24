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
ll gcd(ll x,ll y)
{
	if(y==0) return x;
	return gcd(y,y%x);
}
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		if((n-1)%gcd(n,k)!=0||(m-1)%gcd(m,k)!=0) cout<<-1<<endl;
		else  cout<<m*n<<endl;
	}
	return 0;
}