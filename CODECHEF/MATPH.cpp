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
//int isprime[1000005];
vector<ll> v;
#define N 1000005
const ll n = 1e11 + 1e5;
void calprime()
{
	int p[N];
	memset(p, 0, sizeof(p));
	for (int i = 2; i <= sqrt(N); ++i)
	{
		if(p[i] != 0) continue;
		for (int j = i * i; j < N; j += i) p[j] = 1;
	}
	int cnt = 0;
	for (ll i = 2; i < N; ++i)
	{
		if(p[i] == 0)
		{
			ll tmp = i * i;
			cnt = 2;
			while(tmp <= n)
			{
				if(p[cnt] == 0) v.emplace_back(tmp);
				tmp = tmp * i;
				cnt++;
			}
		}
	}
}
int main(void)
{
	FIO	
	v.emplace_back(-1);
	calprime();
	sort(all(v));
	// for(auto i : v)
	// 	cout<<i<<" ";
	int t;
	ll n1;
	cin>>t;
	while(t--)
	{
		cin>>n1;
		auto it = lower_bound(all(v), n1);
		if((*it) != n1)
			it--;
		cout << (*it) << endl;
	}
	return 0;
}