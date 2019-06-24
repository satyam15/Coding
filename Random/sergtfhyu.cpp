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
node* delete(node *head)
{
	node *p=head,*q;
	int x;
	while(p->next!=NULL)
	{
	x=p->info;
	q=p->next;
	if(q->info==x)
	{
	p->next=q->next;
	free(q);
	}
	else
	p=p->next;
	}
	return head;
	
}
int main(void)
{
	node *head1,*p;
	head1=NULL;
	int c,y,n1,i;
	printf("Enter number of element in list :");
	scanf("%d",&n1);
	printf("Enter element in sorted order\n");
	for(i=0;i<n1;i++)
	{
	printf("Enter element %d: ",i+1);
	scanf("%d",&y);
	head1=insert(head1,y);
	}
	p=head1;
	printf("\nlist before deleting dublicate element:\n");
	display(head1);
	printf("\nlist after deleting dublicate element:\n");
	head1=delete(head1);
	display(head1);
	return 0;
}
