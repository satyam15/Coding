#include<stdio.h>
#include<stdlib.h>
#define stksize 30
typedef struct Queue{
	int arr[stksize];
	int front ,rear;
}que;
void display(que *q)
{
	int i;
	for(i=(q->front);i<(q->front);i++)
	printf("%d ",q->arr[i]);
}
void enqueue(que *q,int x)
{
	if(q->rear==stksize-1)
	{
		printf("overflow");
		return ;
	}
	q->arr[++(q->rear)]=x;
}
int dequeue(que *q)
{
	if(q->front==(q->rear-1))
	{
		printf("underflow");
		return 0;
	}
	return q->arr[(q->front)++];
}
int main(void)
{
	que *q;
	int c,x;
	q=(que *)malloc(sizeof(que));
	q->rear=-1;
	q->front=0;
	while(1)
	{
		printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter a number:");
				scanf("%d",&x);
				enqueue(q,x);
				break;
			case 2:
				int p;
				p=dequeue(q);
				if(p!=0)
				printf("%d",p);
				break;
			case 3:
				display(q);
				break;
			default:
				exit(0);
		}
	}
	return 0;
}
