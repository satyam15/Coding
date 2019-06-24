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
ll power(ll a, ll b){ll res=1;a=a%mod; while(b){if(b&1)res=(res*a)%mod; a=(a*a)%mod;b/=2;}return res;}
ll invmod(ll a){return power(a,mod-2);}
int main(void)
{
	FIO	
	int n,mx,x;
	cin>>n>>mx;
	int sum=0;
	vector<int> v(n),v2;
	priority_queue<int> q;
	for(int i=0;i<n;i++) 
	{
		cin>>v[i];
		sum+=v[i];
		// cout<<sum<<"-- ";
		int sz=v2.size();

		
			while(sum>mx)
			{
				v2.pb(q.top());
				sum-=q.top();
				q.pop();
			}
			// for(auto j :v2) cout<<j<<" ";
			// cout<<endl;
			cout<<v2.size()<<" ";
			q.push(v[i]);
			for(auto j : v2) q.push(j),sum+=j;
			v2.clear();
	}
	cout<<endl;
	return 0;
}