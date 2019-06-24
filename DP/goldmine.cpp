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
	int n,m,d,r,u,ans;
	cin>>m>>n;
	int mat[m][n];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>mat[i][j];
		int mat1[m][n];
		memset(mat1,0,sizeof(mat1));
	for(int i=n-1;i>=0;i--)
	{
		for(int j=0;j<m;j++)
		{
			d=(i==n-1||j==m-1)?0:mat1[j+1][i+1];
			u=(i==n-1||j==0)?0:mat1[j-1][i+1];
			r=(i==n-1)?0:mat1[j][i+1];
			mat1[j][i]=mat[j][i]+max({d,u,r});
		}
	}
	for(int i=0;i<m;i++)
  for(int j=0;j<n;j++)
    cout<<mat1[i][j]<<" ";
	ans=mat1[0][0];
	for(int i=0;i<m;i++) ans=max(ans,mat1[i][0]);
	cout<<ans<<endl;
	return 0;
}