#include<stdio.h>
#include<stdlib.h>
#define stksize 100000
typedef struct Queue{
	int arr[stksize];
	int front ,rear;
}que;

void enqueue(que *q,int x)
{
	
	q->arr[++(q->rear)]=x;
}
int dequeue(que *q)
{
	return q->arr[(q->front)++];
}
int main(void)
{
	que *q;
	int c,x,r,i;
	q=(que *)malloc(sizeof(que));
	q->rear=-1;
	q->front=0;
	scanf("%d",&r);
for(i=0;i<r;i++)
	{
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				scanf("%d",&x);
				enqueue(q,x);
				break;
			case 2:
				int p;
				p=dequeue(q);
				printf("%d",p);
				break;
		    case 3:
		    	printf("%d",q->arr[q->front]);
		    	break;
		}
	}
	return 0;
}
