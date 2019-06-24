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
	int n,d,y,mx;
	cin>>n>>d>>y;
	int x;
	cin>>x;
	mx=x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		mx=max(mx,x);
	}
	mx+=(d-1)*y;
	if(mx%d==0)
	{
		cout<<(mx/d)+1<<endl;
	}
	else
	{
		
		cout<<mx/d<<endl;
	}
	return 0;
}