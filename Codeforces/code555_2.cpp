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
	int n,dig,fl=0;
	cin>>n;
	string s;
	vector<int> val(10);
	vector<int> num;
	cin>>s;
	for(int i=1;i<=9;i++) cin>>val[i];
	for(int i=0;i<n;i++) 
	{
		dig=s[i]-'0';
		if(fl!=2&&dig<val[dig])
		{

			fl=2;
			while(dig<=val[dig])
			{
				num.pb(val[dig]);
				i++;
				dig=s[i]-'0';
			}
			num.pb(dig);
		}
		else num.pb(dig);
	}
	for(int i=0;i<n;i++) cout<<num[i];
	cout<<endl;
	return 0;
}