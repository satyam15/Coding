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
		string s;
		int k,ans=0;
		cin.clear();
		cin>>s>>k;
		int sz=s.size();
		for(int i=0;i<sz-k+1;i++)
		{
			if(s[i]=='0')
			{
				for(int j=i;j<i+k;j++)
				{
					if(s[j]=='0') s[j]='1';
					else s[j]='0';
				}
				ans++;
			}
		}
		for(int i=sz-k+1;i<sz;i++)
		{
			if(s[i]=='0') {
				ans=-1;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}