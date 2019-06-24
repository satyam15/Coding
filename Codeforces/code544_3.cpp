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
	int n,x,j=0;
	cin>>n;
	vector<int> v1;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v1.pb(x);
	}
	sort(all(v1));
	int mx=0;
	for(int i=0;i<n;i++)
	{
		
		while(j<n&&v1[j]-v1[i]<=5)
		{
			j++;
			mx=max(mx,j-i);
		}
	}
	 cout<<mx<<endl;
}