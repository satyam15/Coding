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
	set<int,greater<int>> v;
	set<int,greater<int>>::iterator it;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.insert(x);
	}
	it=v.begin();
	int s=v.size();
	if(s==1) cout<<"0"<<endl;
	else{
	cout<<*(++it)<<endl;}
	return 0;
}