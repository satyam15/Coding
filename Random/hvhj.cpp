#include<stdio.h>
int main(void)
{
	int n,i,j;
	scanf("%d",&n);
	int a[n+1];
	for(i=0;i<=n;i++)
	a[i]=1;
	a[0]=0;
	a[1]=0;
	for(i=0;i*i<=n;i++)
	if(a[i]==1)
	{
		for(j=2;j*i<=n;j++)
		a[j*i]=0;
	}
	for(i=2;i<=n;i++){
	if(a[i]==1)
     printf("%d  ",i);}
	 return 0;	
	}
