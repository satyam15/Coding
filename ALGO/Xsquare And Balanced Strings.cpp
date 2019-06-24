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
		int fl=0,arr[26]={0};
		if(s.size()%2==1) cout<<-1<<endl;
		else {
		for(int i=0;i<s.size();i++)
		{
			arr[s[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			if(arr[i]%2==1)
			{
				fl=1;
				break;
			}
		}
		if(fl) cout<<-1<<endl;
		else cout<<1<<endl;
	}}
	return 0;
}