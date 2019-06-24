#include<stdio.h>
#include<string.h>
#define size 30
typedef struct Stack{
	int arr[size];
	int top;
}stack;
 int oprt(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
	return 1;
	return 0;
}
char pop(stack *s)
{
	if(s->top==-1)
	return '@';
	return s->arr[s->top--];
}
void push(stack *s,int x)
{
	if(s->top==size-1)
	{
		printf("overflow");
		return;
	}
	s->arr[++(s->top)]=x;
}
int main(void)
{
	stack s;
	int i,j,k,n;
	s.top=-1;
	printf("Enter number of element in expression\n");
	scanf("%d\n",&n);
	char exp[n];
    fgets(exp,n,stdin);
	for(i=0;i<strlen(exp);i++)
	{
		if(oprt(exp[i]))
		{
			j=pop(&s);
			k=pop(&s);
			switch (exp[i])
            {
             case '+':
			 	 push(&s, k+j);
				  break;
             case '-': 
			 	push(&s, k-j);
			    break;
             case '*': 
			 	push(&s, k*j); 
				 break;
             case '/':
			 	 push(&s, k/j);
			     break;
            }
		}
		else push(&s,exp[i]-'0');
	}
	printf("%d",pop(&s));
	return 0;
}
