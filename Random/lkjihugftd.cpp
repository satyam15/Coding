#include<bits/stdc++.h>
using namespace std;
int sum(long long int c)
{
	int x,y=0;
	while(c>0)
	{
		x=c%10;
		y+=x;
		c/=10;
	}
	return y;
}
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
	long long int n,d,s,count=0,s1,count1=0,x=1000,x1,x2,i;
	bool flag=true;
	cin>>n>>d;
	s=sum(n);
	s1=n;
	x=sum(n);
	i=1;
	while(1)
	{
		i++;
		
			if((x==1||x==n)&&i==1)
			{
				cout<<x<<" "<<count<<endl;
				break;
			}
			x2=sum(s1);
			if(s1>=x)
			{
				count1++;
				s1+=d;
				x1=sum(s1);
				if(x1<x)
				{
					s1=x1;
					x=x1;
					count=count1;
				}
			
			}
			
			
		
	}
}
}
