#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y;
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			if(y-x>0)
			count++;
		}
		cout<<count<<endl;
	}
	return 0;	
}
