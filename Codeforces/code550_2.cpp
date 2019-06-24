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
	vector<ll> odd;
	vector<ll> even;
	cin>>n;
	int x;
	ll sum=0,sodd=0,seven=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		sum+=x;
		if(x%2==0)
			even.pb(x);
		else odd.pb(x);
	}
	sort(all(odd));
	sort(all(even));
	if(even.size() ==0 || odd.size() ==0 )
	{
		if(even.size()==0) cout<<sum-odd[odd.size()-1]<<endl;
		else cout<<sum-even[even.size()-1]<<endl;
	}
	else if(even.size()==odd.size()) cout<<"0"<<endl;
	else
	{
			
			int min=even.size()>odd.size()?odd.size():even.size();
		
		
			for(int i=0;i<min;i++)
			{
				//cout<<odd[odd.size()-i-1]<<" "<<even[even.size()-i-1];
				sodd+=odd[odd.size()-i-1];
				seven+=even[even.size()-i-1];
			//	cout<<endl;
			}
	
		if(even.size()>odd.size()) sum-=even[even.size()-odd.size()-1];
		else sum-=odd[odd.size()-even.size()-1];
			cout<<sum-sodd-seven<<endl;
	}
	return 0;
}