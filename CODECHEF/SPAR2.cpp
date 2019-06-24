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
	int n,q;
	cin>>n>>q;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=1;i<=q;i++)
	{
		int a,b,c,ans;
		ld area=0,d=0;
		cin>>a>>b>>c;
		for(int i=a;i<=b;i++) 
			{
				area=(ld)(arr[i]*sqrt(4*c*c-(arr[i]*arr[i])));
				if(area>d)
             	 {
                  d=area;
                  ans=i;
             	 }
			}
			if(d==0) cout<<-1<<endl;
			else cout<<arr[ans]<<endl;
	}
	return 0;
}