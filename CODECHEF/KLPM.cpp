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
	string s,s1,s2,s3;
	
	cin>>s;
	int len=s.size();
	ll count=0;
	set<string> pal;
	for(int i=0;i<len-1;i++)
	{
		for(int j=1;j+i<len;j++)
		{
			//if(i==0)
			s1=s.substr(i,j);
			//cout<<i<<" "<<j<<" "<<s1<<endl;
			for(int k=j+i;k<len;k++)
			{
				for(int l=1;l+k<=len;l++)
				{
					s2=s.substr(k,l);
					s3=s1+s2;
					//cout<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<s1<<" "<<s2<<endl;
					if(equal(s3.begin(),s3.begin()+s3.size()/2,s3.rbegin())) count++;
				}
			}
		}
	}
	// for(auto i : pal) cout<<i<<" ";
	cout<<count<<endl;
	return 0;
}