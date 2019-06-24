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
int find(int v[],int a)
{
	// cout<<a<<" ";
	if(v[a]==a) return a;
	return (v[a]=find(v,v[a]));
}
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,fl=0,x,y,a,b;
		cin>>n>>m;
		int arr1[n+1],arr2[n+1];
		for(int i=1;i<=n;i++) cin>>arr1[i];
		for(int i=1;i<=n;i++) cin>>arr2[i];
		int v[n+1],r[n+1];
		for(int i=1;i<n+1;i++) {r[i]=0; v[i]=i;}
		for(int i=0;i<m;i++)
		{
			cin>>a>>b;
			x=find(v,arr1[a]);
			y=find(v,arr1[b]);
			if(x==y) continue;
			if(r[x]>r[y]) {v[y]=x; r[x]++;}
			else {v[x]=y; r[y]++;}			 
		}
		for(int i=1;i<=n;i++)
		{
			if(arr1[i]==arr2[i]) continue;
			else {
				x=find(v,arr1[i]);
				y=find(v,arr2[i]);
				if(x!=y) { fl=1; break;}
			}
		}
		if(fl==1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}