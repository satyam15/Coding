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
	vector<int> a[21];
	for(int i=1;i<=20;i++)
	{
		for(int j=1;j<i;j++)
		{
			if((i&j)==j)
			a[i].push_back(j);
		}
	}
	for(int i=0;i<=20;i++)
	{
		cout<<"i= "<<i<<endl;
		for(int j=0;j<a[i].size();j++)
		 cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}