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
		int n,x;
		cin>>n;
		vector<int> v;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			v.pb(x);
		}
		sort(all(v));
		x=0;
		//for(int i=0;i<n;i++) cout<<v[i]<<" ";
		for(int i=0;i<n;i++)
		{
			if(v[i]<=x) x++;
			//cout<<x<<endl;
		}
		cout<<x<<endl;
	}
	return 0;
}