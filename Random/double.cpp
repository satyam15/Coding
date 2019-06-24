#include<stdio.h>
#include<stdlib.h>
#define size 30
int rr=size-1;
int ff=0;
typedef struct Stack {
	int arr[size];
	int f,r;
}que;
void enquefr(que *q,int x)
{
	if(q->f==q->r-1)
	{
		printf("overflow");
		return;
	}
	q->arr[++q->f]=x;
}
void enquerr(que *q,int x)
{
	if(q->r==q->f+1)
	{
		printf("overflow");
		return;
	}
	q->arr[--q->r]=x;
}
int dequeuefr(que *q)
{
	static int ff=0;
	if(q->f==q->r-1||ff>(q->f))
	{
	 return -1;
	}
	return q->arr[q->f++];
}
int dequeuerr(que *q)
{
	static int rr=size-1;
     if(q->r==(q->f)+1||rr>(q->r))
	 {
	 	return -1;
	 }	
	 if(rr<=q->r)
	 return q->arr[rr--];
	 
}
void display(que *q)
{
	int i;
	for(i=rr;i<=q->f;i++)
	printf("%d ",q->arr[i]);
		for(i=ff;i>=q->r;i--)
	printf("%d ",q->arr[i]);
}
int main(void)
{
	int c,x,i;
	que *q;
	q=(que *)malloc(sizeof(que));
	q->r=size;
	q->f=-1;
	while(1)
	{
		printf("\n1.Enqueue from front\n2.Enqueue from rear\n3.dequeue from front\n4.dequeue from rear\n5.Display\n6.exit\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter a number:");
				scanf("%d",&x);
				enquefr(q,x);
				break;
			case 2:
				printf("Enter a number:");
				scanf("%d",&x);
				enquerr(q,x);
				break;
			case 3:
				i=dequeuefr(q);
				if(i==-1)
				printf("empty");
				else
				printf("%d",i);
				break;
			case 4:
				i=dequeuerr(q);
				if(i==-1)
				printf("empty");
				else
				printf("%d",i);
				break;
			case 5:
				display(q);
				break;
			default:
				exit(0);
		}
	}
	return 0;
}
