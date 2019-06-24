#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define stksize 30
typedef struct Stack{
	char arr[stksize][stksize];
	int top;
}stack;
int oprt(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
	return 1;
	return 0;
}
void push(stack *s,char ch)
{
	s->arr[++(s->top)][0]=ch;
}
void pop(stack *s,char ch)
{
	char c1[stksize],c2[stksize];
	strcpy(c1,s->arr[s->top--]);
	strcpy(c2,s->arr[s->top]);
	strcpy(s->arr[s->top],"(");
	strcat(s->arr[s->top],c2);
	strcat(s->arr[s->top],&ch);
	strcat(s->arr[s->top],c1);
	strcat(s->arr[s->top],")");
}
void reverse(char exp[],int len)
{
	char exp1[len];
	strcpy(exp1,exp);
	strrev(exp1);
	int i,l=-1;
		for(i=len-1;i>=0;i--)
	{
		if(exp1[i]=='(')
		exp1[i]=')';
		if(exp1[i]==')')
		exp1[i]='(';
		
	}
	strcpy(exp,exp1);
	
}

int main(void)
{
	stack *s;
	s=(stack *)malloc(sizeof(stack));
	s->top=-1;
	char exp[30];
	scanf("%s",exp);
	int i;
	reverse(exp,strlen(exp));
	printf("%s",exp);
while(exp[i]!='\0')
	{
		if(oprt(exp[i]))
		{
			pop(s,exp[i]);
		}
		else 
		push(s,exp[i]);
		i++;
	}
	printf("\n");
	reverse(s->arr[0],strlen(s->arr[0]));
	puts(s->arr[0]);

free(s);
return 0;
}

