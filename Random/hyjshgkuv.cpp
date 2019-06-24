#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if(y-x+z==0||x-y+z==0||x+y-z==0||z-x-y==0||y-x-z==0||x-y-z==0)
		cout<<"yes"<<endl;
		else 
		cout<<"no"<<endl;
	}
}
