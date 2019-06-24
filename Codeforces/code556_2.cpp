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
	int n;
int valid(int i,int j)
{
	return ((i>=0&&i<n)&&(j>=0&&j<n));
}
int main(void)
{
	FIO

	cin>>n;
	char arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]=='.')
			{
				if(valid(i+1,j)&&valid(i,j+1)&&valid(i-1,j)&&valid(i,j-1))
				{
					if(arr[i+1][j]=='.'&&arr[i-1][j]=='.'&&arr[i][j+1]=='.'&&arr[i][j-1]=='.')
					{
						arr[i][j]=arr[i+1][j]=arr[i-1][j]=arr[i][j+1]=arr[i][j-1]='#';
					}
				}
			}
		}
	}
	int fl=0;
	for(int i=0;i<n&&fl==0;i++)
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]=='.')
			{
				fl=1;
				break;
			}
		}
		if(fl) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
		return 0;
}
