#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		ll m,n;
		cin>>n>>m;
		char arr[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			cin>>arr[i][j];
		}
		if(n==1||m==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<m-1;j++)
			{
			if(arr[i][j]!='#'&&arr[i][j+1]!='#'&&arr[i+1][j]!='#'&&arr[i+1][j+1]!='#')
			{
				arr[i][j]='a';
				arr[i][j+1]='a';
				arr[i+1][j]='a';
				arr[i+1][j+1]='a';
			}
		
			}
		}
		bool flag=true;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(arr[i][j]=='.')
				{
				flag=false;
				cout<<"NO"<<endl;
				break;	
				}
			}
			if(!flag)
			break;
		}
		if(flag)
		cout<<"YES"<<endl;
	}
		
	}
	return 0;
}
