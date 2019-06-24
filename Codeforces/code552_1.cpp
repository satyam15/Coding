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
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	ll mx=max(a,max(b,max(c,d)));
	//cout<<mx;
	 a=mx-a;
	 b=mx-b;
	c=mx-c;
	d=mx-d;
	//cout<<b<<" "<<c<<" "<<d<<" "<<a;
	if(a==0) cout<<b<<" "<<c<<" "<<d;
	else if(b==0) cout<<a<<" "<<c<<" "<<d;
	else if(c==0) cout<<b<<" "<<a<<" "<<d;
	else if(d==0) cout<<b<<" "<<c<<" "<<a;
	return 0;
}