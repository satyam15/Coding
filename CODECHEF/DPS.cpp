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
		cin.clear();
		cin>>s;
		int fl=0;
		int arr[26]={0};
		for(int i=0;i<s.size();i++) { arr[s[i]-'a']++;}
			for(int i=0;i<26;i++)
				if(arr[i]%2!=0) fl++;
		if(s.size()%2!=0&&fl<=3) cout<<"DPS"<<endl;
		else if(s.size()%2==0 && fl==2) cout<<"DPS"<<endl;
		else cout<<"!DPS"<<endl;
	}
	return 0;
}