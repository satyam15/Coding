#include<stdio.h>
#include<math.h>
#define max 100001
int* sieve(int n)
{
	int arr[n+1],i,j;
	for(i=0;i<=n;i++)
	arr[i]=1;
	arr[0]=0;
	arr[1]=0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(arr[i]==1)
		{
			for(j=1;j*i<=n;j++)
			{
				arr[j*i]=0;
			}
		}
	}
	j=0;
	for(i=0;i<max;i++)
    {
    	if(arr[i]==1)
    	j++;
	}
	static int prime[j];
	j=0;
	for(i=0;i<max;i++)
    {
    	if(arr[i]==1)
    	prime[++j]=arr[i];
	}
}
void segmented_sieve(long long int a,long long int b)
{
	int isprime[b-a+1];
	int i,*prime;
	long long int cprime,base,j;
	for(i=0;i<b-a;i++)
	isprime[i]=1;
	prime=sieve(max);
	for(i=0;(long long)*(prime+i)*(prime+i)<=b;i++)
	{
		cprime=*(prime+i);
		base=(a/cprime)*cprime;
		if(base<a)
		{
			base+=cprime;
		}
		if(isprime[i]==1)
		for(j=a;j*i<b;j++)
		{
			isprime[j*i-a]=0;
		}
	
	}
	for(i=0;i<b-a;i++)
	{
		if(isprime[i]==1)
		printf("%lld",a+i);
	}
}
int main(void)
{
	long long int a,b;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		segmented_sieve(a,b);
	}
	return 0;
}
