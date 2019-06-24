#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(void)
{
	int t;
	cin>>t;
	int arr[1000001];
	while(t--)
	{
		int count=0;
		memset(arr,0,sizeof(arr));
		int n,x;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			arr[x]++;
		}
		for(int i=1;i<=100000;i++)
		{
		if(arr[i]!=0&&arr[arr[i]]!=0)
		{
			if(arr[i]>=i)
			count+=1;
			if(arr[arr[i]]>=i)
			count+=1;
		}
	}
		if(count!=1)
		count++;
		cout<<count<<endl;
	}
	return 0;
}
