#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
	int arr[100];
	int top;
}stack;

int pop(stack *s)
{
	return s->arr[s->top--];
}

void push(stack *s,int x)
{
	s->arr[++s->top]=x;
}
void rev(stack *s,int top)
{
	if(top==0)
	return ;
	int temp=pop(s);
	rev(s,s->top);
	push(s,temp);;
}
void display(stack *s)
{
	int top=s->top;
	int i;
	printf("\n");
	for(i=top;i<=top;i--)
	printf("%d ",s->arr[i]);
}

int main(void)
{
	stack *s;
	s=(stack*)malloc(sizeof(stack));
	s->top=-1;
	int n,x,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		push(s,x);
	}
	printf("\n");
	display(s);
	rev(s,s->top);
	display(s);
	return 0;

}
