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
	int t;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--)
    {
    	int n,a,b;
    	bool flag=true;
    	ll ans=1;
    	cin>>n;
    	string s;
    	int freq[26]={0},freq1[26]={0};
    	cin.clear();
    	cin>>s;
    	for(int i=0;i<s.length();i++) freq[s[i]-'a']++;
    	cin>>a>>b;
    	for(int i=a-1;i<b;i++) freq1[s[i]-'a']++;
    	for(int i=0;i<26;i++)
    	{
    		if(freq1[i])
    			freq[i]-=freq1[i];
    	}
    	for(int i=a-1;i<=b-1;i++) 
    	{
    		if(freq[s[i]-'a']>0)
    		{
    			ans=((ans%mod)*(freq[s[i]-'a']%mod))%mod;
    			freq[s[i]-'a']--;
    		}
    		else
    		{
    			flag=0;
    			cout<<0<<endl;
    			break;
    		}
    	}
    		if(flag)
    			cout<<ans<<endl;
    }
    return 0;
}