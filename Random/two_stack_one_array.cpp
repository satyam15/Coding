#include<stdio.h>
#include<stdlib.h>
#define stksize 30
typedef struct Stack{
	int arr[stksize];
	int top1,top2;
}stack;
void display2(stack *s)
{
	if(s->top2==stksize-1)
	{
		printf("empty");
		return ;
	}
	int i;
	for(i=s->top2;i<stksize;i++)
	printf("%d ",s->arr[i]);
}
void display1(stack *s)
{
	if(s->top1==-1)
	{
		printf("empty");
		return ;
	}
	int i;
	for(i=s->top1;i>=0;i--)
	printf("%d ",s->arr[i]);
}
void push1(stack *s,int x)
{
	if(s->top1==stksize-1||s->top1==s->top2)
	{
		printf("overflow");
		return;
	}
	s->arr[++(s->top1)]=x;
}
int pop1(stack *s)
{
	if(s->top1==-1)
	{return -1;}
	return s->arr[(s->top1)--];
}
void push2(stack *s,int x)
{
	if(s->top2==-1||s->top1==s->top2)
	{
		printf("overflow");
		return;
	}
	s->arr[--(s->top2)]=x;
}
int pop2(stack *s)
{
	if(s->top2==stksize-1)
	{
		return -1;
	}
	return s->arr[(s->top2)++];
}
int main(void)
{
	stack s;
	s.top1=-1;
	s.top2=stksize-1;
	int c,x,k;
	while(1)
	{
		printf("\n1.push through stack 1 \n2.push through stack 2\n3.pop from stack 1\n4.pop from stack 2\n5.display stack 1\n6.display stack 2\n7.exit\n");
	    scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter element:");
				scanf("%d",&x);
				push1(&s,x);
				break;
			case 2:
				printf("Enter element:");
				scanf("%d",&x);
				push2(&s,x);
				break;
			case 3:
				k=pop1(&s);
				if(k==-1){
				printf("underflow");
				break;}
				printf("%d ",k);
				break;
			case 4:
				k=pop2(&s);
				if(k==-1){
				printf("underflow");
				break;}
				printf("%d ",k);
				break;
			case 5:
				display1(&s);
				break;
			case 6:
				display2(&s);
				break;
			default:
				exit(0);
		}
	}
	
}
