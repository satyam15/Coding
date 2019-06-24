#include<stdio.h>
#include<stdlib.h>
struct Node{
	int info;
	struct Node *next;
};
typedef struct Node node;

node* insert_end(node *head,int y)
{
	node *p,*q=head;
	p=(node*)malloc(sizeof(node));
	p->info=y;
	if(head==NULL){
	p->next=p;
	return p;}
	p->next=head;
	while(q->next!=head)
	q=q->next;
	q->next=p;
	return head;
}
node* delete_end(node *head)
{
	node *p=head,*q=head;;
	if(head==NULL)
	return NULL;
	while(p->next!=head)
   {
   	q=p;
		p=p->next;
	}
	q->next=head;
	free(p);
	return head;
}

node* create(int x,node *head)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		printf("Enter element %d :",i+1);
		scanf("%d",&j);
		head=insert_end(head,j);
	}
	return head;
}

void display(node* head)
{
	if(head==NULL)
	{
		printf("List is empty\n");
		return;
	}
	node *p=head;
	do
	{
		printf("%d ",p->info);
		p=p->next;
		
	}while(p!=head);
	printf("\n");
}
int main(void)
{
	node *head;
	head=NULL;
	int c,x,y;
	while(1)
	{
		printf("0.create list\n1.insert\n2.delete\n3.display\n");
		scanf("%d",&c);
		switch(c)
		{
			case 0:
				printf("Enter no nodes:");
				scanf("%d",&x);
				head=create(x,head);
				break;
			case 1:
				printf("Enter element:");
				scanf("%d",&x);
				head=insert_end(head,x);
				break;
			case 2:
				head=delete_end(head);
				break;
			case 3:
				display(head);
				break;
			default:
				exit(0);
		}
	}
	return 0;
}
