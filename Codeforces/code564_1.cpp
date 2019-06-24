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
	int x,y,z;
	cin>>x>>y>>z;
	if(x==y&&z==0)
	{
		cout<<"0"<<endl;
	}
	else if(x==y&&z!=0)
	{
		cout<<"?"<<endl;
	}
	else
	{
		int d=x-y;
		if(abs(d)<=z)
		{
			cout<<"?"<<endl;
		}
		else
		{
			if(d>0) cout<<"+"<<endl;
			else cout<<"-"<<endl;
		}
	}
	return 0;
}