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
		cin.clear();
		string s;
		char c;
		ll ans;
		int n;
		cin>>n>>s>>c;
		vector<int> v;
		for(int i=0;i<n;i++) if(s[i]==c) v.pb(i);
		int p,sz=n-1;
		if(v.size()==0) cout<<"0"<<endl;
		else{
			p=sz-v[0];
			ans=p+(v[0]*(p+1));
		for(int i=1;i<v.size();i++)
		{
			p=sz-v[i];
			ans+=p+(v[i]-v[i-1]-1)*(p+1);
		}
		cout<<ans+v.size()<<endl;
		}

	}
}