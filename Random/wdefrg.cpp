#include<stdio.h>
#include<string.h>
void reverse(char *exp)
{
	char exp1[strlen(exp)];
	int i,l=-1;
		for(i=strlen(exp)-1;i>=0;i--)
	{
		if(exp[i]=='(')
		exp1[++l]=')';
		else if(exp[i]==')')
		exp1[++l]='(';
		else exp1[++l]=exp[i];
	}
	strcpy(exp,exp1);
}
int main(void)
{
	char exp[]="a+b*(c^d-e)^(f+g*h)-i";
	
reverse(exp);

	printf("%s",exp);
    return 0;
}
