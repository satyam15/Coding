#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
int info;
struct node *next;
};
typedef struct node NODE;

NODE *insertStart(NODE *head,int y)
{
	NODE *q,*p=head;
	q=(NODE*)malloc(sizeof(NODE));
	q->info=y;
	if(head==NULL)
	{
		q->next=q;
		return q;
	}
	q->next=head;
	while(p->next!=head)
	p=p->next;
	p->next=q;
	return q;
}

NODE* insertEnd(NODE*head,int y)
{
	NODE *p=head,*q;
	q=(NODE*)malloc(sizeof(NODE));
	q->info=y;
	if(head==NULL)
	{
		q->next=q;
		head=q;
		return head;
	}
	while(p->next!=head)
	p=p->next;
	q->next=head;
	p->next=q;
	return head;
}

NODE *createList(NODE *head)
{
	int n,i,y;
	printf("enter the no of nodes:");
	scanf("%d",&n);
	head==NULL;
	if(n==0)
	return head;
	printf("enter the element to be inserted:");
	scanf("%d",&y);
	head=insertStart(head,y);
	for(i=1;i<n;i++)
	{
		printf("enter the element to be inserted:");
		scanf("%d",&y);
		head=insertEnd(head,y);
	}
	return head;
}

NODE* insertBefore(NODE *head,int y,int x)
{
	NODE *p=head,*q;
	if(p==NULL)
	{
		printf("list is empty\n");
		return q;
	}
	q=(NODE*)malloc(sizeof(NODE));
	q->info=y;
	if(head->info==x)
	{
		while(p->next!=head)
		p=p->next;
		q->next=head;
		p->next=q;
		return q;
	}
	while( p->next!=head && p->next->info!=x)
		p=p->next;
	if(p->next->info==x)
	{
		q->next=p->next;
		p->next=q;
		return head;
	}
	printf("x is not there");
}

NODE *insertAfter(NODE *head,int y,int x)
{
	NODE *p=head,*q;
	if(p==NULL)
	{
		printf("list is empty\n");
		return q;
	}
	q=(NODE*)malloc(sizeof(NODE));
	q->info=y;
	while(p->next!=head && p->info!=x)
	p=p->next;
	if(p->info==x)
	{
		q->next=p->next;
		p->next=q;
		return head;
	}
	printf("x is not there");
	return head;
} 

void display(NODE *head)
{
	NODE *p=head;
	if(head==NULL)
	{
		printf("list is empty");
		return;
	}
	do
	{
		printf("%d ",p->info);
		p=p->next;
	}
	while(p!=head);
}

NODE *deleteStart(NODE *head)
{
	NODE *p=head,*q=head;
	if(head==NULL)
	{
		printf("list is empty\n");
		return NULL;
	}
	while(p->next!=head)
	p=p->next;
	p->next=q->next;
	q=q->next;
	free(head);
	return q;
}

NODE *deleteEnd(NODE *head)
{
	NODE *p=head,*q;
	if(head==NULL)
	{
		printf("list is empty\n");
		return NULL;
	}
	if(p->next==head)
	{
		free(p);
		return NULL;
	}
	while(p->next!=head)
	{
		q=p;
		p=p->next;
	}
	q->next=head;
	free(p);
	return head;
}

NODE *deleteElement(NODE *head,int x)
{
	NODE *p=head,*q=head;
	if(head==NULL)
	{
		printf("list is empty\n");
		exit(1);
	}
	if(p->info==x)
	{
		while(p->next!=head)
		p=p->next;
		p->next=q->next;
		q=q->next;
		free(head);
		return q;
	}
	while(p->next!=head && p->info!=x)
	{
	 	q=p;
		p=p->next;
	}
	if(p->info==x)
	{
		q->next=p->next;
		free(p);
		return head;
	}
	printf("entered element is not in the list\n");
	return head;
}

main()
{
int choice,y,x;
NODE *head=NULL;
while(1)
	{
	printf("\n0.create a cicular linked list\n");
	printf("1.insert at start\n");
	printf("2.insert at end\n");
	printf("3.insert before x\n");
	printf("4.insert after x\n");
	printf("5.delete first element\n");
	printf("6.delete last element\n");
	printf("7.delete a particular element x\n"); 
	printf("8.display circular linked list\n");
	printf("9.quit\n");
	printf("enter choice\n");
	scanf("%d",&choice);
	switch(choice)
		{
		case 1:
		printf("enter the element\n");
		scanf("%d",&y);
		head=insertStart(head,y);
		break;
		case 2:
		printf("enter the element\n");
		scanf("%d",&y);
		head=insertEnd(head,y);
		break;
		case 3:
		printf("enter the element to be inserted\n");
		scanf("%d",&y);
		printf("enter the element before which to insert\n");
		scanf("%d",&x);
		head=insertBefore(head,y,x);
		break;
		case 4:
		printf("enter the element to be inserted\n");
		scanf("%d",&y);
		printf("enter the element after which to be inserted\n");
		scanf("%d",&x);
		head=insertAfter(head,y,x);
		break;
		case 5:
		head=deleteStart(head);
		break;
		case 6:
		head=deleteEnd(head);
		break;
		case 7:
		printf("enter the element to be deleted\n");
		scanf("%d",&x);	
		head=deleteElement(head,x);
		break;
		case 8:
		printf("display list\n");
		display(head);
		break;
		case 9:
		exit(1);
		break;
		case 0:
		printf("create a linked list\n");
		head=createList(head);
		break;
		default:
		printf("wrong choice");
		}
	}
}

