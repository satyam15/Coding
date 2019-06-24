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
		cin>>s;
		int p=0,k=0,m=0,b=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='p') p=1;
			else if(s[i]=='k') k++;
			else if(s[i]=='m') m=1;
			else if(s[i]=='b') b=1;
		}
		if(p==1&&k>=2&&m==1&&b==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}