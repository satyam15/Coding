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
pair<int,pair<int,int>> p[10005];
pair<int,pair<int,int>> spa[100005];
int n,e,sp=0;
int id[100005];
int root(int x)
{
	while(id[x]!=x)
	{
		id[x]=id[id[x]];
		x=id[x];
	}
	return x;
}
void uni(int x,int y)
{
	int p=root(x);
	int q=root(y);
	id[p]=id[q];
}
void krushkals()
{
	for(int i=0;i<e;i++)
	{
		int x=p[i].ss.ff;
		int y=p[i].ss.ss;
		if(root(x)!=root(y))
		{
			uni(x,y);
			spa[sp]=p[i];
			sp++;
		}
	}
}
int main(void)
{
	FIO
	int x,y,w;
	
	cin>>n>>e;
	for(int  i=0;i<n;i++) id[i]=i;
	for(int i=0;i<e;i++)
	{
		cin>>x>>y>>w;
		p[i]=mk(w,mk(x,y));
	}
	sort(p,p+e);
	krushkals();
	for(int i=0;i<sp;i++)
	{
		cout<<spa[i].ff<<" "<<spa[i].ss.ff<<"-->"<<spa[i].ss.ss<<endl;
	}
	return 0;
}