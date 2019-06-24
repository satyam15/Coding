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
	string s;
	cin>>s;
	int arr[s.size()+1]={0};
	for(int i=s.size()-1;i>=0;i--)
	{
		int x=s[i]-'0';
		if(x%2==0) arr[i]=arr[i+1]+1;
		else arr[i]=arr[i+1];
	}
	for(int i=0;i<s.size();i++) cout<<arr[i]<<" ";
	cout<<endl;
return 0;
}