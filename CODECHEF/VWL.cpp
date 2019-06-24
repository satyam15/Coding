#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define mod 1000000007
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<pair <ll,ll>, null_type,less<pair <ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin.clear();
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0;
	int arr[26]={0};
	if(s.size()<4)
		cout<<"No";
	else
	{
		for(int i=0;i<s.size();i++)
		{
			arr[s[i]-'a']++;
		}
		if(arr['a'-'a']) count++;
		if(arr['e'-'a']) count++;
		if(arr['i'-'a']) count++;
		if(arr['o'-'a']) count++;
		if(arr['u'-'a']) count++;
		if(count>=4)
			cout<<"Yes";
		else
			cout<<"No";
	}
	return 0;
}
