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
	int n,a,b,ans=0;
	cin>>n;
	string s;
	int arr[26]={0};
	for(int i=0;i<n;i++)
	{
		cin.clear();
		cin>>s;
		arr[s[0]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(arr[i]==0) continue;
		else {
			a=arr[i]/2;
			b=arr[i]-a;
			ans+=(a*(a-1))/2+(b*(b-1))/2;
		}
	}
	cout<<ans<<endl;;
	return 0;
}