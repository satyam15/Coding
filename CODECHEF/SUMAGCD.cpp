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
		int n,fl=0;
		cin>>n;
		int mx=0,gd,mx1=0,p=1,gd1=0,mx3=0,gd3=0;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			gd=v[i];
			if(mx<v[i])
			{
				mx1=max(mx1,mx);
				mx=v[i];
			}
			if(mx3<v[i]&&v[i]<mx) mx3=v[i];
		}
		for(int i=0;i<n;i++)
		{
			if(mx!=v[i]) {
				fl=1;
				gd=v[i];
				if(__gcd(mx,v[i])>p) p=__gcd(v[i],mx);
			}
			
		}
		if(fl==0)
		{
			cout<<2*mx<<endl;
		}
		else
		{
			int gd2=0;
			for(int i=0;i<n;i++)
			{
				if(v[i]!=mx)
				{
				 if(p!=1&&__gcd(mx,v[i])!=p) gd1=__gcd(gd1,v[i]);	
				} 
				if(v[i]!=mx1)
				{
					gd2=__gcd(gd2,v[i]);
				}
				if(v[i]!=mx3)
				{
					gd3=__gcd(gd3,v[i]);
				}
			}
			if(p!=1) cout<<max({gd+mx,p+gd1,gd2+mx1,gd3+mx3})<<endl;
			else cout<<max({gd+mx,gd2+mx1,gd3+mx3})<<endl;

		}
	}
	return 0;
}