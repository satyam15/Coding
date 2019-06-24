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
int main()
{
	FIO
	ll n,a,b;
	cin>>n>>a>>b;
	int s=0;
	ll mx=b;
	while (n--)
	{
		if(!a && !b) break;
		int f;
		cin>>f;
		if (f)
		{
			if(a>0 && b<mx){
				b++;
				a--;
				}
		  else b--;
		}
		else 
		{
			if (b>0) b--;
			else a--;
		}
		s++;	
	}
	cout<<s;
	
	return 0;
}