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
		int n; cin>>n;
		cin.clear();
		cin>>s;
		int ans=0;
		for(int i=0;i<s.size()-1;i++)
		{
			if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'))
				ans++;
		}
			cout<<ans<<endl;
	}
	return 0;
}
