#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define stksize 20
typedef struct Stack{
	char arr[stksize][stksize];
	int top;
}stack;
void push(stack *s,char *ch,int n)
{
	int i;
	
	if(n==1)
	strcpy(s->arr[++(s->top)],ch);
	else {
		s->top++;
	strcpy(s->arr[(s->top)],"(");
		strcat(s->arr[(s->top)],ch);
			strcat(s->arr[(s->top)],")");


	}
}
int oprt(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
 return 1;
	return 0;
}
char* pop(stack *s)
{
	return (s->arr[s->top--]);
}
int main(void)
{
	char *c2,*c1;
	stack s;
	c2=(char *)malloc(20*sizeof(char));
	c1=(char *)malloc(20*sizeof(char));
	int i;
	s.top==-1;
	char exp[stksize];
	printf("enter expression:");
	fgets(exp,30,stdin);
	for(i=0;i<strlen(exp);i++)
	{
		if(oprt(exp[i]))
		{
			c1=pop(&s);
			c2=pop(&s);
			strcat(c2,&exp[i]);
			strcat(c2,c1);
			push(&s,c2,3);
		}
		else {
			push(&s,&exp[i],1);
		}
	}
	printf("%s",*(pop(&s)));
	return 0;
}
