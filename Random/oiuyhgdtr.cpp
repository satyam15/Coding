#include<stdio.h>
#define MIN(a,b)  ((a>b)?b:a)
#define P 1000000007
int main()
{
	long long int n,m,k,maxadd,minadd;
	long long int i;
	int T;
	scanf("%d",&T);
	while(T--)
	{
	scanf("%lld%lld",&n,&k);
	long long int t,sum=0,max=0;
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%lld",&arr[i]);
	m=arr[0];
	for(i=0;i<n;i++)
	{
		if(m>arr[i])
		m=arr[i];
	}
	for(i=0;i<n;i++)
	{
		t=arr[i];
		sum=sum + 1 + (t+m)/k;
		max= MIN(max,1 + (t+m)/k);
	}
	
	maxadd=sum/2;
	// printf("\n%lld\n",maxadd);
	if((sum-max)%2==0)
		minadd=(sum-max)/2;
	else
	   minadd= (sum-max)/2+1;
// printf("%lld\n",minadd);
	printf("%lld\n",(maxadd-minadd+1)%P);
	}
	return 0;
}
