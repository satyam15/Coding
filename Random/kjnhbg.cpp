#include<stdio.h>
#include<string.h>
#define stksize 20
typedef struct Stack{
	char arr[stksize];
	int top;
}stack;
int pop(stack *s1)
   {
   	if(s1->top==-1)
   	{
   		printf("underflow");
   		return NULL;
	   }
	   return (s1->arr[(s1->top)--]);
   }
   void push(stack * s1,char x)
   {
   	if(s1->top==stksize-1)
   	{
   		printf("overflow");
   		return ;
	   }
	   s1->arr[++(s1->top)]=x;
	   return;
   }
   int isoperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int prec(char ch)
{
    switch (ch)
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
int main(void)
{
	stack s1;
	int k=-1,i,flag=1;
	s1.top=-1;
	char exp[]="a+b*(c^d-e)^(f+g*h)-i";
	scanf("%s",exp);
	for(i=0;i<strlen(exp);i++)
	{
	if(isoperand(exp[i]))
		exp[++k]=exp[i];
		else if(exp[i]=='(')
		{
			push(&s1,exp[i]);
		}
		else if(exp[i]==')')
			{	while(s1.top!=-1&&s1.arr[s1.top]!='(')
				{exp[++k]=pop(&s1);
				}
               if(s1.top==-1)
				return -1;
				s1.top--;		
			}
			else
			{	while((prec(s1.arr[s1.top])>prec(exp[i]))&&s1.top!=-1)
				exp[++k]=pop(&s1);
				push(&s1,exp[i]);
			}
		
		
		
	}
	 while (s1.top!=-1)
        exp[++k] = pop(&s1);
 
    exp[++k] = '\0';
    printf( "%s", exp );
    return 0;
	
}

