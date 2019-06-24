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
		cin>>s;
		int sz=s.size();
		int mx=0,arr[sz]={0};
		if(sz<3) cout<<sz<<endl;
		else
		{
			if(s[0]!=s[1]||s[1]!=s[2]) arr[2]=1;
			else arr[2]=0;
			for(int i=3;i<sz;i++)
			{
				if(s[i]!=s[i-1]||s[i-1]!=s[i-2])
					arr[i]=1+arr[i-3];
				mx=max(mx,arr[i]);
			}
			cout<<sz-3*mx<<endl;
		}
	}
	return 0;
}