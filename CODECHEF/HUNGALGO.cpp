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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
		int flag=0,flag1=0,flag2=0;
		for(int i=0;i<n;i++)
		{
			if(flag==0)
			{
				for(int j=0;j<n;j++)
				{
					if(arr[i][j]==0) flag1=1;
					if(arr[j][i]==0) flag2=1;
				}
				//cout<<flag1<<" "<<flag2<<" "<<i;
				if(flag1==0 || flag2==0)
				{
					flag=1;
				}
				else
				{
					flag1=0;
					flag2=0;
				}

			}
		}
		if(flag==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}