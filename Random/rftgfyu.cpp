#include<stdio.h>
int min(int b[],int m,int n);
int main(void)
{
	int x,y,i,j;
	scanf("%d",&x);
	int a[x];
	for(i=0;i<x;i++)
	scanf("%d",&a[i]);
	for(i=0;i<x-1;i++)
	{
		y=min(a,i,x);
		j=a[i];
		a[i]=a[y];
		a[y]=j;
	}
	for(i=0;i<x;i++)
	printf("%d ",a[i]);
	return 0;
}
int min(int a[],int m,int n)
{
	int i,c;
	c=m;
	for(i=m;i<n-1;i++)
	if(a[c]>=a[i+1])
	c=i+1;
	return c;
}
