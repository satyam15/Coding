#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[10];
	fgets(a,10,stdin);
	printf("%d",strlen(a));
}
