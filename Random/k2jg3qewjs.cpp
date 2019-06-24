#include<bits/stdc++.h>
using namespace std;
int dp[150];
int main()
{
	memset(dp,0,sizeof(dp));
	string str;
	cin>>str;
	long long int len,i,count=0,cc=0,dc=0;
	len=str.length();
	for(i=0;i<len;i++)
	{
		char ch=str.at(i);
		int j=ch;
	     dp[j]++;
	}
	for(i=45;i<125;i++)
	{
		if(dp[i]>1)
		{
			cc++;
			count=count+dp[i]-1;
			if(dp[i]==2)
			dc++;
		}
		
	}
	if(len>62)
	cout<<"-1"<<endl;
	else
	{
	
	long long int diff=62-cc;
	if(count<=diff)
	cout<<count<<endl;
	else
	{
	
	cout<<"-1"<<endl;
    }
}
	return 0;
}
