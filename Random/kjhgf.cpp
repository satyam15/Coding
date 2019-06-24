#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,a[50],j,t;
	for(i=0;i<50;i++)
	a[i]=rand();
	for(i=0;i<49;i++)
	{
		t=a[i];
		for(j=i-1;j>=0&&a[j]>t;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=t; 
	}
		for(i=0;i<49;i++)
        printf("%d ",a[i]);
        return 0;
	
}
