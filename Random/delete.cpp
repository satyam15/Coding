#include<stdio.h>
#include<stdlib.h>


struct Node
{
	int info;
	struct Node *next;
};
typedef struct Node node;

node* insert(node *head,int y)
{
	node *p,*q=head;
	p=(node*)malloc(sizeof(node));
	p->info=y;
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
while(p!=NULL)
{
printf("%d ",p->info);
p=p->next;
}
printf("\n");
}
node* deletealt(node *head)
{
	node *p=head,*r,*q,*l;
	    q=head->next;
		while(q!=NULL)
		{
			if(q->next==NULL)
			{
				free(q);
				p->next=NULL;
				
				return head;
			}
		    p->next=q->next;
		    free(q);
		    p=p->next;
		    q=p->next;
	    }
	    printf("After deleting alternate element\n");
	    return head;
}
int main(void)
{
	node *head;
	head=NULL;
	int c,y,n1,i;
	printf("Enter number of element in list :");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
	printf("Enter element %d: ",i+1);
	scanf("%d",&y);
	head=insert(head,y);
	}
	printf("entered link list:\n");
	display(head);
	printf("\n");
   head=deletealt(head);
   display(head);
	    return 0;
	}
	
