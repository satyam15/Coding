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
	int n,a;
	string s="";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s+=(a+'0');
	}
	string tp,s1=s;
	sort(all(s1));
	map<string,int> mp;
	mp[s]=0;
	queue<string> q;
	q.push(s);
	while(!q.empty())
	{
		tp=q.front();
		q.pop();
		if(tp==s1)
		{
			cout<<mp[s1]<<endl;
			break;
		}
		for(int i=2;i<=n;i++)
		{
			string s3=tp;
			reverse(s3.begin(),s3.begin()+i);
			if(mp.find(s3)==mp.end())
			{
				mp[s3]=mp[tp]+1;
				q.push(s3);
			}
		}
	}
	return 0;
}