#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	long long int t;
	cin>>t;
	while(t--)
	{
	long long int n,a,b;
	cin>>n;
		if(n<=2)
	{
		cout<<1<<" "<<0<<" "<<0<<endl;
	}
	else
	if(n<=10)
	{
		cout<<0<<" "<<1<<" "<<0<<endl;
	}
	else
	if(n<=26)
	{
		cout<<0<<" "<<0<<" "<<1<<endl;
	}
	else
	{
		a=n/26;
		if(n%26==0)
		a--;
		b=pow(2,a);
		n-=26*a;
		if(n<=2)
		{
			cout<<b<<" "<<0<<" "<<0<<endl;
		}
		if(n<=10&&n>2)
		{
			cout<<0<<" "<<b<<" "<<0<<endl;
		}
		if(n>10)
		{
			cout<<0<<" "<<0<<" "<<b<<endl;
		}
			
	}
	}
	return 0;
}


