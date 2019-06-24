#include<stdio.h>
int main(void)
{
	int a[5],i,j,t,b=0;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++){
		b++;
		if(a[j]>=a[j+1])
		{
			
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}}
	}
	printf("%d ",b);
	return 0;
	
}
