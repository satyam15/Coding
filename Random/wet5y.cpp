#include<stdio.h>
int rev(int);
int main(void)
{
	int n;
	scanf("%d",&n);
    printf("%d",rev(n));
	return 0;
}
int rev(int n)
{
	int x=0;
	while(n>0)
	{
		x=x*10+(n%10);
		n/=10;
	}
	return x;
}
