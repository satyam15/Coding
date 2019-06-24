#include<stdio.h>
#include<stdlib.h>
struct Node{
    int info;
    struct Node *next;
};
typedef struct Node node;
node* delete(node *p,node *head)
{
	node *q=head;
	while(q->next!=p)
	q=q->next;
	q->next=p->next;
	free(p);
	return head;
}
int len(node *head)
{
    node *p=head;
    int c=0;
    while(p!=NULL)
    {p=p->next;
     c++;
    }
    return c;
}
node* enqueue(node *head,int y)
{
    node *p,*q=head;
    p=(node *)malloc(sizeof(node));
    p->info=y;
    p->next=NULL;
    if(q==NULL)
    {
    	head=p;
    	return head;
	}
    while(q->next!=NULL)
    q=q->next;
    q->next=p;
    return head;
}

int main(void)
{
    node *head;
    int n;
    head=(node*)malloc(sizeof(node));
    head=NULL;
    scanf("%d",&n);
    int i,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&c);
        head=enqueue(head,c);
    }
    if(n==1)
    {
    	printf("0");
    	return 0;
	}
    node *p=head;
    int j,flag=1,l=0,le;
    while(flag==1)
    {
        flag=0;
        le=len(head);
        for(i=0;i<le;i++)
        {
           if((p->info)>(p->next->info))
           {
		   head=delete(p,head);
		   p=p->next;
            l++;
            flag=1;}
        }
    }
    printf("%d",l);
    return 0;
}

