#include<stdio.h>
#include<stdlib.h>
struct Node{
int x;
struct Node *next;
};
typedef struct Node node;
node* insert(node *head,int x)
{
    node *p,q=head;
    p=(node)malloc(sizeof(node));
    p->info=x;
    p->next=NULL;
    if(head==NULL)
    {
        return p;

    }
    while(q->next!=NULL)
    {
        q=q->next;

    }
    q->next=p;
    return head;

}
void display(node *head)
{
    node *p=head;
    while(p)
    {
        printf("%d ",p->info);
        p=p->next;
    }
}

int main(void)
{
    node *head,*p,*q,*l;
    head=NULL;
    printf("Enter no of nodes");
    int i,n,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter info for node %d:",i+1);
        scanf("%d",&y);
        head=insert(head,y);
    }
    p=head;
    printf("first half\n");
    for(i=0;i<n/2;i++)
    {
        printf("%d  ",p->info);
        q=p;
        p=p->next;
    }

    l=p;
    printf("\nsecond half\n");
    for(i=n/2+1;i<n;i++)
    {
        printf("%d  ",p->info);
        p=p->next;
    }
    head=l;
    q->next=NULL;




}
