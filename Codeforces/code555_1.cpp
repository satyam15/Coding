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
	int n;
	cin>>n;
	set<int> s;
	while(s.find(n)==s.end())
	{
		s.insert(n);
		n+=1;
		while(n%10==0) n/=10;
	}
	cout<<s.size()<<endl;
	return 0;
}