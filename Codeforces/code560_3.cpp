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
	string s;
	cin>>n;
	cin>>s;
	int ans=0,fl=0;
	for(int i=0;i<s.size()-1;i+=2)
	{
		if(s[i]==s[i+1])
		{
			int temp=i+1;
			while(temp<s.size()&&s[i]==s[temp])
			{
				s.erase(temp,1);
				ans++;
			}
			if(temp==s.size()) {fl=1; break;}
		}
	}
	if(n%2==0&&ans%2!=0) {s.erase(s.size()-1); ans++;}
	if(n%2!=0 && ans%2==0) {s.erase(s.size()-1); ans++;}
	cout<<ans<<endl;
	cout<<s<<endl;
	return 0; 
}