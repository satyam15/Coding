#include<bits/stdc++.h>
using namespace std;
int ans(int arr[],int x,int y)
{
	long long c=0;
	int i;
	for( i=0;i<x;i++)
	{
		int n=arr[i]*y+c;
		arr[i]=n%10;;
		c=arr[i]/10;
	}
	while(c)
	{
		arr[x]=c%10;
		x++;
		c/=10;
		
	}
	return x;
}
int main(void)
{
	int t;
	int fact[1000];
		
	cin>>t;
	while(t--)
	{
		fact[0]=1;
		int siz=1;
		int n;
		cin>>n;
		for(int i=2;i<=n;i++)
		siz=ans(fact,siz,i);
		for(int i=siz-1;i>=0;i--)
		cout<<fact[i];
		cout<<endl;
	}
	return 0;
}
