#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
	int arr[100];
	int top;
}stack;

int pop(stack *s)
{
	return s->arr[(s->top)--];
}

void push(stack *s,int x)
{
	s->arr[++(s->top)]=x;
}
void rev(stack *s,int x)
{
	if(s->top==-1)
	{
		push(s,x);
		return;
	}
	int temp=pop(s);
	rev(s,x);
	push(s,temp);
}
void bottom(stack *s)
{
	if(s->top==-1)
	return;
	int temp=pop(s);
	bottom(s);
	rev(s,temp);
}
void display(stack *s)
{
	int top=s->top;
	int i;
	printf("\n");
	for(i=0;i<=top;i++)
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
	printf("%d\n",s->top);
	display(s);
	bottom(s);
	display(s);
	return 0;
	
}
