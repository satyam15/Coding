#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
ll fun(ll n)
{
	if(n<0)
		return 0;
	if(n<4)
		return 1;
	if(n==4)
		return 2;
	return fun(n-1)+fun(n-4);
}
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    cout<<fun(n);
}
