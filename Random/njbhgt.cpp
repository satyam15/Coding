#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
int info;
struct node *next,*prev;
};
typedef struct node NODE;

NODE *insertStart(NODE *head,int y)
{
	NODE *q,*p=head;
	q=(NODE*)malloc(sizeof(NODE));
	q->info=y;
	q->next=p->next;
	if(p->next!=NULL)
	p->next->prev=q;
	p->next=q;
	q->prev=p;
	return head;
}

NODE* insertEnd(NODE*head,int y)
{
	NODE *p=head,*q;
	q=(NODE*)malloc(sizeof(NODE));
	q->info=y;
	q->next=NULL;
	if(p->next==NULL)
	{
		p->next=q;
		q->prev=p;
		return head;
	}
	while(p->next!=NULL)
	p=p->next;
	p->next=q;
	q->prev=p;
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
	q=(NODE*)malloc(sizeof(NODE));
	q->info=y;
	if(p->next==NULL)
	{
		q->next=NULL;
		p->next=q;
		q->prev=p;
		return head;
	}

	if(p->next->info==x)
	{
		q->next=p->next;
		p->next->prev=q;
		p->next=q;
		q->prev=p;
		return head;
	}

	while( p->next!=NULL && p->next->info!=x)
	p=p->next;
	if(p->next->info==x)
	{
		q->next=p->next;
		p->next->prev=q;
		p->next=q;
		q->prev=p;
		return head;
	}
	printf("x is not there");
	return head;
}

NODE *insertAfter(NODE *head,int y,int x)
{
	NODE *p=head,*q;
	q=(NODE*)malloc(sizeof(NODE));
	q->info=y;
	if(p->next==NULL)
	{
		q->next=NULL;
		p->next=q;
		q->prev=p;
		return head;
	}
	
	while(p->next!=NULL && p->info!=x)
	p=p->next;
	if(p->info==x)
	{
		q->next=p->next;
		if(p->next!=NULL)
		p->next->prev=q;
		p->next=q;
		q->prev=p;
		return head;
	}

	printf("x is not there");
	return head;
} 

void display(NODE *head)
{
	NODE *p=head;
	if(head->next==NULL)
	printf("list is empty");
	while(p->next!=NULL)
	{
		printf("%d ",p->next->info);
		p=p->next;
	}
}

NODE *deleteStart(NODE *head)
{
	NODE *p=head;
	if(head->next==NULL)
	{
		printf("list is empty");
		return head;
	}
	head->next=head->next->next;
	if(head->next->next!=NULL)
	head->next->next->prev=head;
	return head;
}

NODE *deleteEnd(NODE *head)
{
	NODE *p=head,*q;
	if(head->next==NULL)
	{
		printf("list is empty");
		return head;
	}
	while(p->next!=NULL)
	{
		q=p;
		p=p->next;
	}	
	q->next=NULL;
	free(p);
	return head;
}

NODE *deleteElement(NODE *head,int x)
{
	NODE *p=head,*q;
	if(head->next==NULL)
	{
		printf("list is empty");
		exit(1);
	}
	while(p->next!=NULL && p->next->info!=x)
	p=p->next;
	if(p->next->info==x)
	{
		q=p->next;
		p->next=q->next;
		if(q->next!=NULL)
		q->next->prev=p;
		free(q);
		return head;
	} 
	printf("entered element is not in the list\n");
	return head;
}

main()
{
int choice,y,x;
NODE *head;
head=(NODE*)malloc(sizeof(NODE));
head->info=0;
head->next=NULL;
head->prev=NULL;
while(1)
{
printf("\n0.create a doubly header linked list\n");
printf("1.insert at start\n");
printf("2.insert at end\n");
printf("3.insert before x\n");
printf("4.insert after x\n");
printf("5.delete first element\n");
printf("6.delete last element\n");
printf("7.delete a particular element x\n"); 
printf("8.display linked list\n");
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
		printf("create a doubly header linked list\n");
		head=createList(head);
		break;
		default:
		printf("wrong choice");

	}
}
}

