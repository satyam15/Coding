#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	int p=pow(2,n)-1;
	char sour,auxil,dest;
	if(n%2==0)
	{
		sour='C';
		auxil='B';
		dest='A';
	}
	else
	{
		sour='A';
		auxil='B';
		dest='C';
	}
	for(i=1;i<=p;i++)
	{
		if(i%3==1)
		printf("%c-->%c\n",sour,dest);
		if(i%3==2)
		printf("%c-->%c\n",sour,auxil);
		if(i%3==0)
		printf("%c-->%c\n",dest,auxil);
	}
	return 0;
}
