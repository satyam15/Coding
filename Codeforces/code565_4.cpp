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
const int N=3000002;
int n,i,mx,pr[N],mn[N],mp[N],j,x,vis[N],cnt;
int main(void)
{
	FIO
	cin>>n;
	memset(mn,63,N<<2);
	for (i=2;i<N;i++)
		if (!vis[i]){
			pr[++cnt]=i;
			for (j=i*2;j<N;j+=i) vis[j]=1,mn[j]=min(mn[j],i);
		}
	// for(int i=1;i<100;i++) cout<<i<<" "<<mn[i]<<endl;
	for (i=1;i<=n*2;i++)
	cin>>x,mx=max(mx,x),mp[x]++;
	for (i=mx;i;i--) 
	{
		if (vis[i])
		{
			while (mp[i])
			{
			cout<<i<<" ",mp[i]--,mp[i/mn[i]]--;				
			} 
		}
	}
	for (i=1;i<=mx;i++)
	{
		while (mp[i])
		{
			cout<<i<<" ",mp[i]--,mp[pr[i]]--;			
		} 
	}
}