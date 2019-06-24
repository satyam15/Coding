#include<stdio.h>
int gcd(int,int);
int main(void)
{
	int n,m;
  scanf("%d %d",&n,&m);
  printf("%d ",gcd(m,n));
	return 0;
}
int gcd(int m,int n)
{ 
if(n==0)
return m;
return gcd(n,m%n);
}
