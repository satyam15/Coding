#include<bits/stdc++.h>
using namespace std;
long long max(long long a,long long b,long long c)
{
	long long x=a>b?a:b;
	return x>c?x:c;
}

int n;

long long int fun(int n,int arr[])
{
	long long int s=0;
	if(n==1||n==2||n==3)
	{
		for(int i=0;i<n;i++)
		s+=arr[i];
		return s;
	}
	s+=max(fun(n-1,1,arr),fun(n-2,2,arr),fun(n-3,3,arr));
	return s;
}
int main(void)
{
	int t;
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		cout<<fun(n-1,1,arr)<<endl;
	}
	return 0;
}
