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
	int n,a,x,b,y;
	cin>>n>>a>>x>>b>>y;
	int fl=0;
	while(a!=x&&b!=y)
	{
		if(a==n) a=1;
		else a++;
		if(b==1) b=n;
		else b--;
		if(a==b)
		{
			fl=1;
			break;
		}
	}
	if(fl) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}