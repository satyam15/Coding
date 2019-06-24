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
		int m,n,k,a,b;
		cin>>n>>m>>k;
		map<pair<int, int>, int> v;
		vector<pair<int,int>> v1;
		for(int i=0;i<k;i++)
		{
			cin>>a>>b;
			v1.pb(mk(a,b));
			v[{a,b}]=1;
		}
		ll ans=0,c=0;
		for(int i=0;i<k;i++)
		{
			c=0,a=v1[i].ff,b=v1[i].ss;
			auto p=mk(a+1,b);
			if(v[p] ==1) c++;
			p=mk(a-1,b);
			if(v[p] ==1) c++; 
			p=mk(a,b-1);
			if(v[p] ==1) c++; 
			p=mk(a,b+1);
			if(v[p] ==1) c++; 
			ans+=4-c;
		}
		cout<<ans<<endl;
	}
}