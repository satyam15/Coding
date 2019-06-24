#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=1,j=1,x=0;
		cin>>n;
		int a[n+1];
		long long int sum[n+1];
		sum[0]=0;
		for(int i=1;i<=n;i++)
		{
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
		}
		int i=1;
		while(sum[i]<=n-i+1)
		{
			i++;
		}
		i--;
		j=1;
		if(sum[1]>=n-1)
		{
			cout<<1<<endl;
		}
		else
		{
		while(i!=j)	
		{
			j+=sum[j];
			c++;
		}
	
		cout<<c<<endl;
		}
		
	}
	
	
	return 0;
}
