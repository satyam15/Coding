#include<stdio.h>
#include<stdlib.h>
#define size 30
typedef struct Que{
int arr[size];
int front,rear;
}que;
que q1;
void push(que *q,int x)
{
    if(q->rear==size-1)
    {
        printf("overflow\n");
        return;
    }
    q->arr[++q->rear]=x;

}
int pop(que *q)
{
    int x;
    if(q->front==(q->rear+1))
    {
        return -1;
    }
    return q->arr[q->front++];

}
void display(que *q)
{
    if(q->rear==size-1)
    {
        printf("Empty\n");
        return;
    }
    int i;
    for(i=(q->rear);i>=(q->front);i--)
        printf("%d ",q->arr[i]);
        printf("\n");
}
int main(void)
{

    que *q,*q1,*temp;
    int c,x,y;
    q=(que *)malloc(sizeof(que));
    q1=(que *)malloc(sizeof(que));
    q1->front=0;
    q1->rear=-1;
    q->front=0;
    q->rear=-1;
        while(1)
    {
        printf("1.push\n2.pop\n3.display\n4.exit\n");
        scanf("%d",&c);
        switch(c)
        {
         case 1:
            printf("Enter an element:");
            scanf("%d",&x);
            push(q,x);
            break;
         case 2:
           if(q->front==(q->rear+1))
           {
               printf("empty stack\n");
               break;
           }
            while(q->front!=q->rear)
             {y=pop(q);
              push(q1,y);}
           printf("%d\n",pop(q));
           temp=q;
           q=q1;
           temp->front=0;
           temp->rear=-1;
           q1=temp;
           break;
         case 3:
            display(q);
            break;
         case 4:
            exit(0);
         default:
            printf("invalid input\n");
            exit(0);
        }
    }
    return 0;
}
