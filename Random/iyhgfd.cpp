#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int p1,p2,k,p3,temp;
		cin>>p1>>p2>>k;
		p3=p1+p2;
		if(p3==0||k>p3)
			{
				cout<<"CHEF"<<endl;
			}
			else
			{
			p3/=k;
			p3++;
			if(p3%2==0)
			cout<<"COOK"<<endl;
			else
			cout<<"CHEF"<<endl;
			}
		
		
	}
}
