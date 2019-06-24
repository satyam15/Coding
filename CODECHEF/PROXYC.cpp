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
		int n,ans=0;
		cin>>n;
		string s;
		cin>>s;
		int p=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='P') p++;
		}
		int req=ceil((float)n*3/4);
		// cout<<req<<endl;
		if(n<=4)
		{
			if(req>p) cout<<-1<<endl;
			else cout<<0<<endl;
		}
		else if(req<=p) cout<<0<<endl;
		else
		{
			int fl=0;
			for(int i=2;i<n-2;i++)
			{
				if(s[i]=='A'&&(s[i-1]=='P'||s[i-2]=='P')&&(s[i+1]=='P'||s[i+2]=='P')) p++,ans++;
				if(p>=req){
					fl=1;
					break;
				}
			}
			if(fl) cout<<ans<<endl;
			else cout<<-1<<endl;
		}
	}
	return 0;
}