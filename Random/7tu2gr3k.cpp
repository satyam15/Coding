#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(void)
{
	int t;
	scanf("%d",&t);
	int arr[1000001];
	while(t--)
	{
		int count=0;
		memset(arr,0,sizeof(arr));
		int n,x;
		cin>>n;
		int rr[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			rr[i]=x;
			arr[x]++;
		}
		
		for(int i=1;i<=1000000;i++)
		{
			if(arr[i]!=0)
			for(int j=1;j<=arr[i];j++)
			{
				if(arr[arr[j]]>=j)
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
