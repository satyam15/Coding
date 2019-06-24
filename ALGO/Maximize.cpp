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
	int n,k,w,x,y;
	cin>>n>>k;
	vector<int> v;
	int arr[1000001];
	memset(arr,0,sizeof(arr));
	vector<pair<int,int>> pr;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		if(arr[x]==0) arr[x]=y;
		else arr[x]=min(arr[x],y);
	}
	for(int i=1;i<1000001;i++)
	{
		if(arr[i]!=0)
		pr.pb(mk(arr[i],i));
	}
	sort(all(pr));
	int sz=pr.size();
	for(int i=0;i<sz;i++)
	{
		k-=pr[i].ff;
		if(k>=0)
		v.pb(pr[i].ss);
		else break;
	}
	sort(all(v));
	sz=v.size();
	if(sz==0) cout<<-1;
	else 
 	for(int i=0;i<sz;i++)
	{
		cout<<v[i];
		if(i!=sz-1) cout<<",";
	}
	cout<<endl;
	return 0;
}