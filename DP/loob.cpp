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
int ans(int n,int m)
{
	int i,j;
	int c[n+1][m+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=min(i,m);j++)
		{
			if(j==0||i==j)
				c[i][j]=1;
			else
			{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
			}
		}
	}
	return c[n][m];
}
int main(void)
{
	FIO
	int n,m;
	cin>>n>>m;
	int ans1=((2*m+1) * ans(2*n,m+n) )/(m+n+1);
	cout<<ans1<<endl;

}