#include<stdio.h>
#include<stdlib.h>
#define size 30
typedef struct Queue{
	int arr[size][2];
	int r;
}que;
void enqueue(que *q,int x,int p)
{
	int flag=0,j1;
	if(q->r==size-1)
	{
		printf("Overflow");
		return;
	}
	int i,j,k,p1;
	for(i=0;i<=(q->r);i++)
	{
		if((q->arr[i][1])>p)
		{
			flag=1;
			p1=q->arr[i][1];
			j=q->arr[i][0];
			q->arr[i][1]=p;
			q->arr[i][0]=x;
		k=++q->r;
		while(k!=i)
		{
			q->arr[k][0]=q->arr[k-1][0];
						q->arr[k][1]=q->arr[k-1][1];

			--k;
		}
		q->arr[k+1][0]=j;
		q->arr[k+1][1]=p1;
	    }
	    if(flag)
	    break;
	}
	i--;
	if(i==(q->r)&&flag==0||q->r==-1)
	{
		q->r++;
		q->arr[q->r][1]=p;
		q->arr[q->r][0]=x;
	}
}
int dequeue(que *q)
{
	int i,j;
	if(q->r==-1)
	{
		return -1;
	}
    j= q->arr[0][0];
    for(i=0;i<q->r;i++)
    {
    	q->arr[i][0]=q->arr[i+1][0];
    	q->arr[i][1]=q->arr[i+1][1];
	}
	q->r--;
	return j;
}
void display(que *q)
{
	int i;
	if(q->r==-1){
	printf("Empty");
	return ;}
	for(i=0;i<=(q->r);i++)
	printf("%d ",q->arr[i][0]);
}

int main(void)
{
que q;
q.r=-1;
int c,x,k,p;
while(1)
{
printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
scanf("%d",&c);
switch(c){
case 1:
	printf("enter value and priority:");
	scanf("%d%d",&x,&p);
	enqueue(&q,x,p);
	break;
case 2:
	k=dequeue(&q);
	if(k==-1)
	{printf("Underflow");
	break;}
	printf("%d ",k);
	break;
case 3:
	display(&q);
	break;
case 4:
	exit(0);
default:
	exit(0);}
}
return 0;
}
