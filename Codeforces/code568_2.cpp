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
ll power(ll a, ll b){ll res=1;a=a%mod; while(b){if(b&1)res=(res*a)%mod; a=(a*a)%mod;b/=2;}return res;}
ll invmod(ll a){return power(a,mod-2);}
int main(void)
{
	FIO	
	int n,j,k;
	cin>>n;
	string s1,s2;
	for(int i=0;i<n;i++)
	{
		cin.clear();
		int arr[26]={0},fl=1;;
		cin>>s1>>s2;
		if(s1[0]!=s2[0]||s1.size()>s2.size()) cout<<"NO"<<endl;
		else{
			k=1;
		for(int i=1;i<s1.size();i++)
		{
			// cout<<s1[i]<<" "<<i<<"--"<<s2[k]<<" "<<k<<endl;

			if(s2[k]==s1[i]) k++;
			else if(s2[k]==s1[i-1])
			{
				while(k<s2.size()&&s1[i-1]==s2[k]) {k++; }
				if(k==s2.size()||s2[k]!=s1[i]) {fl=0; break;}
				k++;
			}
			else {fl=0; break;}
		}
		if(fl==0) cout<<"NO"<<endl;
		else 
			{
				for(int i=k;i<s2.size();i++) 
				{
					if(s2[i]!=s1[s1.size()-1])
					{
						cout<<"NO"<<endl;
						fl=0;
						break;
					}
				}
			if(fl==1)cout<<"YES"<<endl;}
		
	}}
	return 0;
}