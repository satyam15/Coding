#include<stdio.h>
int main(void)
{
	int sum=10,n;
	scanf("%d",&n);
	while(sum>=9){
		sum=1;
	while(n>0)
	{ 
	sum*=(n%10);
	n/=10;
	}
	printf("%d ",sum);
	n=sum;
	}
	return 0;
}

