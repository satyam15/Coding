#include<stdio.h>
#include<string.h>
#define stksize 20
typedef struct Stack{
	char arr[stksize];
	int top;
}stack;
void push(stack *s,char ch)
{
	if(s->top==stksize-1)
     {
     	printf("overflow");
     	return ;
	 }
	 s->arr[++(s->top)]=ch;
	 return;
}
char pop(stack *s)
{
	if(s->top==-1)
	{
		printf("underflow");
		return NULL;
	}
	return s->arr[s->top--];
}
int prec(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':
		   return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
	}
	return -1;
}
int opnd(char ch)
{
	return (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z');
}
int main(void)
{
	char exp1[30],exp[30];
	stack s;
	int i,k=-1,l=-1;
	fgets(exp1,30,stdin);
	for(i=strlen(exp1);i>=0;i--){
	if(exp1[i]=='(')
	exp[++l]=')';
	else if(exp1[i]==')')
	exp[++l]='(';
	else
	exp[++l]=exp1[i];}
	s.top=-1;
	for(i=0;i<strlen(exp);i++)
	{
		if(opnd(exp[i]))
		{
			exp[++k]=exp[i];
		}
		else if(exp[i]=='(')
		     push(&s,'(');
		     else if(exp[i]==')')
		     {
		     	while(s.arr[s.top]!='('&&s.top!=-1)
		     	exp[++k]=pop(&s);
		     	if(s.arr[s.top]!='('&&s.top!=-1)
		     	{
		     		printf("Invalid expression");
		     		return -1;
				 }
		     	--s.top;
			 }
			 else 
			 {
			 while(prec(exp[i])<=prec(s.arr[s.top])&&s.top!=-1)
			 exp[++k]=pop(&s);
			 push(&s,exp[i]);
			 }
	}
	while(s.top!=-1)
	exp[++k]=pop(&s);
	exp[++k]='\0';
	l=-1;
    for(i=strlen(exp);i>=0;i--)
	printf("%c",exp[i]);
	return 0;
}
