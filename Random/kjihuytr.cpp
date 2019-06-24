#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t,a,b,c=0,n;
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>n;
		while(n--)
		{
		cin>>a>>b;
		if(b-a>5)
		c++;
		}
		cout<<c<<endl;
	}
	return 0;
}
