#include<stdio.h>
#include<stdlib.h>
#define stksize 10
typedef struct Stack{
	char arr[stksize];
	int top;
}stack;
void push(stack *s,char x)
{
	if(s->top==stksize-1)
	{
	printf("overflow");
    return ;
	}
    s->arr[++(s->top)]=x;
    return ;
}
char pop(stack *s)
{
	if(s->top==-1)
	{
		printf("underflow");
		return NULL;
	}
	return s->arr[(s->top)--];
}
void display (stack *s)
{
	int i;
	char c;
	if(s->top==-1)
	return ;
	for(i=0;i<=s->top;i++)
	printf("%c ",s->arr[i]);
}
int main(void)
{
	stack s;
	int n;
	char c;
	s.top=-1;
	while(1){
		printf("\n1.push\n2.pop\n3.display\n4.exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("enter a char\n");
				scanf("\n%c",&c);
				push(&s,c);
				break;
			case 2:
				c=pop(&s);
				if(c==NULL)
				{
					printf("Empty");
				}
				else printf("%c",c);
				break;
			case 3:
				display(&s);
				break;
			default:
				exit(0);
		}
		
	}
	return 0;
}










