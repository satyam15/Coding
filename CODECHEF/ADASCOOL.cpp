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
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		if(m%2 ==1&& n%2 ==1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}