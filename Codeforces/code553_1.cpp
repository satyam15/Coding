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
	string s;
	cin>>s;
	string s1="ACTG";
	int mx= 100000;
	for(int i=0;i<=n-4;i++)
	{
		int tp=0,ans=0,x;
		for(int j=i;j-i<4&&j<n;j++)
		{
			if(s[j]!=s1[tp])
			{
				x=s1[tp]-s[j];
				ans+=min(abs(x),26-abs(x));
			}
			tp++;
		}
		if(mx>ans) mx=ans;
	}
	cout<<mx<<endl;
}