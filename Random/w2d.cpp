#include<stdio.h>
#include<string.h>
int main(void)
{
	char *ch,e[3]={'a','b','e'};
	int i;

	strcpy(ch,e);
    printf("%c",*ch);
    printf("%d %d",strlen(ch),sizeof(ch));
}
