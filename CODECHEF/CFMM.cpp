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
		int n;
		cin>>n;
		string s;
		int o=0,d=0,e=0,c=0,h=0,f=0;
		for(int i=0;i<n;i++)
		{
			cin.clear();
			cin>>s;
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='c') c++;
				else if(s[i]=='o') o++;
				else if(s[i]=='d') d++;
				else if(s[i]=='e') e++;
				else if(s[i]=='h') h++;
				else if(s[i]=='f') f++;
			}
		}
		c/=2;
		e/=2;
		cout<<min({c,o,d,e,h,f})<<endl;
	}
	return 0;

}