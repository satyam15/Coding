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
	int n;
	cin>>n;
	int ct=0,arr[n];
	ll sum=0;
	vector<int> vec;
	for(int i=0;i<n;i++)
	{
		cin>>ct;
		vec.pb(ct);
	}	
	sort( vec.begin(), vec.end() );
	vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
	if(vec.size()>3) cout<<-1<<endl;
	if(vec.size()==3) {
		if(vec[0]+vec[2]==2*vec[1]) cout<<(vec[0]+vec[2])/2-vec[0]<<endl;
		else cout<<-1<<endl;
	}
		else if(vec.size()==1) cout<<0<<endl;
		else if(vec.size()==2) 
			{
				if((vec[1]-vec[0])%2==0)
					{int ans=min((vec[1]-vec[0])/2,vec[1]-vec[0]);
				cout<<ans<<endl;}
			else cout<<vec[1]-vec[0]<<endl;
		}
	
}