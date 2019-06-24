#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		long long arr[n][2],x;
		for(int i=0;i<n;i++)
		cin>>arr[i][0]>>arr[i][1];
		
		long long y=INT_MAX;
		for(int i=0;i<m;i++)
		{
			bool flag=true;
			cin>>x;
			for(int j=0;j<n;j++)
			{
				if(x>=arr[i][0]&&x<arr[i][1])
				{
					flag=false;
					printf("0\n");
					break;
				}
				if(y>arr[i][0]&&arr[i][0]>x)
				{
					y=arr[i][0];
				}
				if(x>arr[n-1][1])
				{
					flag=false;
					cout<<-1<<endl;
					break;
				}
			}
			if(flag)
			{
				cout<<y-x<<endl;
			}
		}
	}
}
