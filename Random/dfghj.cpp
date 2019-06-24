#include<string.h>
#include<stdio.h>
#define stksize 30
typedef struct Stack{
	char arr[stksize][stksize];
	int top;
}stack;
int oprt(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
	return 1;
}
void push(stack *s,char ch)
{
	if(s->top==stksize-1)
	{
		printf("overflow");
		return ;
	}
	s->arr[++(s->top)][0]=ch;
}
void pop(stack *s,char ch)
{
	char c1[stksize],c2[stksize];
	strcpy(c1,s->arr[(s->top)--]);
	strcpy(c2,s->arr[s->top]);
	strcpy(s->arr[s->top],"(");
	strcat(s->arr[s->top],c2);
	strcat(s->arr[s->top],&ch);
	strcat(s->arr[s->top],c1);
	strcat(s->arr[s->top],")");
}
int opnd(char c){
if(c>='a'&&c<='z')return 1;
return 0;}
int main(void)
{
	stack s;
	s.top=-1;
	char exp[30];
	scanf("%s",exp);
	int i;
	for(i=0;i<strlen(exp);i++)
	{
		if(oprt(exp[i]))
		{
			pop(&s,exp[i]);
		}
		else if(opnd(exp[i]))
		push(&s,exp[i]);
	}
printf("%s",s.arr[0]);
return 0;
}
