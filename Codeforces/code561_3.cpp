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
	int q,a,b,m;
	cin>>q;
	while(q--)
	{
		cin>>a>>b>>m;
		if(b<=a||(b/a)%a==0||(a+(b/a))>b||(a+(b/a)*m<b)) cout<<-1;
		else
		{

		}
	}
}