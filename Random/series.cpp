#include<stdio.h>
float pow(int ,int );
float factorial(int);
int main(void)
{
	float sum=0;
	int i,n,x;
	scanf("%d",&n);
	printf("enter x:");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		sum=sum-pow(x,2*i-1)*pow(-1,i)/factorial(2*i-1);
	}
	printf("%f",sum);
	return 0;
}
float pow(int b,int p)
{
	int i;
	for(i=2;i<=p;i++)
	b*=b;
	return b;
}
float factorial(int n)
{
	if(n==0||1)
	return 1;
	return n*factorial(n-1);
}
