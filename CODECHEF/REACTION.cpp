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
int r,c;
int fl=0;
int safe(int i,int j)
{
	int x=0;
	if(i==0&&j==0||i==r-1&&j==0||i==0&&j==c-1||i==r-1&&j==c-1) return 2;
	if(i==0||i==r-1||j==0||j==c-1) return 3;
	return 4;
}
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>r>>c;
		int arr[r][c],fl=0;
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++) cin>>arr[i][j];
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(safe(i,j)<=arr[i][j])
				{
					fl=1;
					break;
				}
			}
			if(fl) break;
		}
		if(fl) cout<<"Unstable"<<endl;
		else cout<<"Stable"<<endl;
	}
	return 0;
}