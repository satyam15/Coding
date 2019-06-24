#include<bits/stdc++.h>
using namespace std;
int sum(long long int temp)
{
	long long int digit,sum=0;
while(temp!=0){
				digit=temp/10;
				sum+=digit;
				temp/=10;	
			}
			return temp;
}
int main(void)
{
	int t;
	while(t--)
	{
		long long int n,m,temp,temp1,s1=0,count=0,digit,s2=1000000000000;
		cin>>n>>m;
		temp1=temp=n;
		bool flag=true;
		while(flag)
		{
			sum=0;
			if(temp/10!=0)
			{
				
				s1=sum(temp);
				if(s1<s2)
				{
					s2=s1;
				}
				if(s1==1)
				{
					cout<<1<<" "<<count;
					flag=false;
					break;
				}
				count++;
			}
			temp1+=m;
			temp=temp1;
			s1=sum(temp);
			
			count++;
		}
		
	}
}
