#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define mod 1000000000000000000
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
int main(void)
{
	FIO
	int q;
	cin>>q;
	while(q--)
	{
		ll n,a,b,c,i;
		cin>>n;
		for( i=0;i<=300&&n>1;i++)
			{ n=(n%2==0)?n/2:(n%3==0)?(2*n)/3:(n%5==0)?(4*n)/5:-1; if(n==-1) break;}
		if(n==1) cout<<i<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}