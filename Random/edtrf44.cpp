#include<stdlib.h>
#include<stdio.h>
int min(int b[],int ,int);
int main(void)
{
	int a[50],i,j,c=0,t,g;
	for(i=0;i<50;i++)
	a[i]=rand();
	for(i=1;i<49;i++)
	{
	t=min(a,i,49);
	c++; 
	if(a[i-1]>=a[t])
	{
		
		g=a[i-1];
		a[i-1]=a[t];
		a[t]=g;
	}
	}
	for(i=0;i<49;i++)
	printf("%d ",a[i]);
	printf("\n%d",c);
	return 0;
	
}
int min(int a[],int x,int y)
{
	int p,m,i;
	m=a[x];
	for(i=x;i<=y;i++)
	{
		if(a[i]<=m)
		{
			p=i;
			m=a[i];
		}
	}
	
	return p;
}
