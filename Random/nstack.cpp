#include<stdio.h>
#include<stdlib.h>
int n,k;
void pop(int sn,int arr[],int top[])
{
if(top[sn-1]==((sn-1)*(n/k)-1))
    {
    printf("underflow\n");
    return;
    }

printf("%d\n",arr[top[sn-1]--]);
}
void push(int sn,int x,int arr[],int top[])
{
    if(top[sn-1]==top[sn])
    {
    printf("Underflow\n");
    return;
    }
arr[++top[sn-1]]=x;
}


void display(int arr[],int top[])
{
int i,l,temp;
for(i=0;i<k;i++)
    {
    printf("\nstack %d has elements: \n",i+1);
    temp=(i*(n/k)-1);
    for(l=top[i];l>temp;l--)
        printf("%d ",arr[l]);   
    }
printf("\n");
}
int main(void)
{
int i,c,x,sn;
printf("Enter size of array:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
arr[i]=0;
printf("Enter number of stack:");
scanf("%d",&k);
int top[k];
for(i=0;i<k;i++)
    {
    top[i]=i*(n/k)-1;
    }
for(i=0;i<k-1;i++)
    printf("%d.stack size %d\n",i+1,top[i+1]-top[i]);
printf("%d.stack size %d\n",k,n-top[k-1]-1);
while(1)
    {
    printf("1.display\n2.exit\n3.push\n4.pop\n");
    scanf("%d",&c);
    switch(c)
        {
        case 3:
            for(i=0;i<k;i++)
                printf("%d.push in stack %d\n",i+1,i+1);
            printf("Enter stack number and element:");
            scanf("%d%d",&sn,&x);
            push(sn,x,arr,top);
            break;
        case 1:
            display(arr,top);
            break;
        case 4:
            for(i=0;i<k;i++)
                printf("%d.pop in stack %d\n",i+1,i+1);
            printf("Enter stack number:");
            scanf("%d",&sn);
            pop(sn,arr,top);
            break;
           
        case 2:
            exit(0);
           
        }
    }
}
