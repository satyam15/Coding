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
	int m,n;
	cin>>n>>m;
	int arr[n+1][m+1];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++) cin>>arr[i][j];
			int flag=1;
		vector<int> v;
	for(int k=1;k<=n;k++)
	{
		if(flag==0) break;
		int x=arr[1][k];
		v.clear();
		v.pb(k);
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(x!=arr[i][j]) 
				{
					flag=0;
					v.pb(j);
					break;
				}
		}

		if(flag==0) break;
		v.pb(1);
	}

	}
	if(flag==1)cout<<"NIE"<<endl;
	if(flag==0)
	{
		cout<<"TAK"<<endl;
		for(auto i:v) cout<<i<<" ";
	for(int i=v.size();i<n;i++) cout<<1<<" ";
	}

}