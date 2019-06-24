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
const int n=100005;
vector<int> arr[n+1];
vector<string> S1(n+1);
vector<char> val(n+1);
string dfs(int x,int p)
{
	string s1(1,val[x]);
	// cout<<x<<" ";
	for(auto i: arr[x])
	{
		if(i==p) continue;
		s1+=dfs(i,x);
	}
	S1[x]=s1;
	// cout<<x<<" "<<S1[x]<<endl;
	return s1;
}
int main(void)
{
	FIO
	int N,q,u,v,x;
	string s1;
	cin>>N>>q;
	for(int i=1;i<=N;i++) {cin.clear(); cin>>val[i];}
	for(int i=0;i<N-1;i++)
	{
		cin>>u>>v;
		arr[u].pb(v);
		arr[v].pb(u);
	}
	S1[1]=dfs(1,-1);
	// for(int i=1;i<=N;i++) cout<<S1[i]<<endl;	
	while(q--)
	{
		cin.clear();
		v=0;
		cin>>u>>s1;
		int freq[26]={0};
		x=s1.size();
		for(int i=0;i<x;i++) freq[s1[i]-'a']++;
			x=S1[u].size();
		for(int i=0;i<x;i++) 
			if(freq[S1[u][i]-'a']>0) --freq[S1[u][i]-'a'];
		for(int i=0;i<26;i++)
		{
			v+=freq[i];
		}
		cout<<v<<endl;
		
	}
	
}