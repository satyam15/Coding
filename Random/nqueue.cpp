#include<stdio.h>
#include<stdlib.h>
int n,k;
void display(int arr[],int front[],int rear[])
{
int i,l;
for(i=0;i<k;i++)
    {
    printf("\nqueue %d has elements: \n",i+1);
    for(l=front[i]+1;l<=rear[i];l++)
        printf("%d ",arr[l]);
    }
}


void enq(int sn,int x,int arr[],int rear[],int front[])
{
if(rear[sn-1]==front[sn])
    {printf("overflow\n");
    return;}
 arr[++rear[sn-1]]=x;
}
void deq(int sn,int arr[],int front[],int rear[])
{
if(rear[sn-1]==front[sn-1])
    {
    printf("underflow\n");
    }
printf("%d \n",arr[++front[sn-1]]);
}
int main(void)
{
int i,c,x,sn;
printf("Enter size of array:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
arr[i]=0;
printf("Enter number of queue:");
scanf("%d",&k);
int front[k],rear[k];
for(i=0;i<k;i++)
    {
    front[i]=i*(n/k)-1;
    rear[i]=i*(n/k)-1;
    }
for(i=0;i<k-1;i++)
    printf("%d.queue size %d\n",i+1,rear[i+1]-rear[i]);
printf("%d.queue size %d\n",k,n-rear[k-1]-1);
while(1)
    {
    printf("1.display\n2.exit\n3.enqueu\n4.dequeue\n");
    scanf("%d",&c);
    switch(c)
        {
        case 3:
            for(i=0;i<k;i++)
                printf("%d.enqueue in queue %d\n",i+1,i+1);
            printf("Enter queue number and element:");
            scanf("%d%d",&sn,&x);
            enq(sn,x,arr,rear,front);
            break;
        case 1:
            display(arr,front,rear);
            break;
        case 4:
            for(i=0;i<k;i++)
                printf("%d.dequeue in queue %d\n",i+1,i+1);
            printf("Enter queue number:");
            scanf("%d",&sn);
            deq(sn,arr,front,rear);
            break;
           
        case 2:
            exit(0);
           
        }
    }
return 0;
}
