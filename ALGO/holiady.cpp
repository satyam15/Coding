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
	int n,ans=0;
	cin>>n;
	string s;
	cin>>s;
	if(n<4) cout<<0<<endl;
	else
	{
		for(int i=3;i<n;i++)
		{
			if((s[i-3]==s[i-1])&&(s[i-2]==s[i])) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}