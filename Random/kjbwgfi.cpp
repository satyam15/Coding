#include<bits/stdc++.h>
using namespace std;
long long int arr[500002];
#define mod 100000007
int main(void)
{
int t;
cin>>t;
arr[0]=0;
arr[1]=1;
for(int i=2;i<=500001;i++)
{
	arr[i]=(arr[i-1]%mod+arr[i-2]%mod)%mod;
}
while(t--)
{
	long long int s;
	scanf("%lld",&s);
	printf("%lld\n",arr[s]);
}
	return 0;	
}
