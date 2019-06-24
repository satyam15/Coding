#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 30
typedef struct Stack {
	int arr[size];
	int top;
}stack;
stack s;
typedef struct Node{
	int info;
	struct Node *next;
}node;
node* insertstart(node *head,int y)
{
	node *p;
	p=(node *)malloc(sizeof(node));
	p->next=head;
		p->info=y;
	    return p;
}
node* insertend(node *head,int y)
{
	node *p,*q=head;
	p=(node *)malloc(sizeof(node));
	p->next=NULL;
	p->info=y;
	if(head==NULL)
	return p;
	while(q->next!=NULL)
	q=q->next;
	q->next=p;
	return head;
}
node* insertafter(node *head,int x,int y)
{
	node *p=head,*q;
	if(head==NULL)
	{
		return head;
	}
	while(p->info!=x&&p!=NULL)
	p=p->next;
	if(p==NULL)
	{
		printf("%d not found\n",x);
		return head;
	}
	q=(node*)malloc(sizeof(node));
	q->info =y;
	q->next=p->next;
	p->next=q;
	return head;	
}
node* insertbefore(node *head,int x,int y)
{
	node *p=head,*q;
	if(head==NULL)
	{
		printf("Empty\n");
		return head;
	}
	while(p->next!=NULL&&p->info==x)
	{
		p=p->next;
	}
	if(p->next==NULL)
	{
		printf("%d note found\n",x);
		return head;
	}
	q=(node*)malloc(sizeof(node));
	q->info=x;
	
	q->next=head;
	return q;
}
void display(node *head)
{
	node *p=head;
	while(p!=NULL)
	{
		printf("%d ",p->info);
		p=p->next;
	}
}
node* delet(node *head,int x)
{
	node *p=head,*q;
	if(head==NULL)
	{
		printf("empty \n");
		return head;
	}
	while(p->next!=NULL&&p->info!=x)
	{
		q=p;
		p=p->next;
	}
	if(p->next==NULL)
	{
		printf("%d note found\n",x);
		return head;
	}
    free(p);
	q->next=NULL;
	return head;	
}

node* deletestart(node *head)
{
	if(head==NULL)
	return head;
	node *p=head->next;
	free(head);
	return p;
}

node* deleteend(node *head)
{
	if(head==NULL)
	return head;
	node *p=head;
	while(p->next->next!=NULL)
     {
     	p=p->next;
	 }
	 free(p->next->next);
	 p->next =NULL;
	 return head; 
}

node* reverse(node *head)
{
	node *p,*q,*r;
	p=NULL;
	q=head;
	while(q!=NULL)
	{
		r->next=q;
		q->next=p;
		p=q;
		q=r;
	}
	return p;
}
int palindrome(node *head)
{
	node *p=head,*q=head;
	int arr[size],i=0;
	if(head==NULL)
	{
		printf("Empty\n");
		return -1;
	}
	if(head->next==NULL)
	{
		printf("Palindrome (only one element)\n");
		return 1;
	}
	while(p!=NULL)
	{
		arr[i]=p->info;
		p=p->next;
		i++;
	}
	p=head;
	while(p!=NULL&&i!=0)
	{
		i--;
		if(p->info!=arr[i])
		return -1;
		p=p->next;
	}
	return 1;	
}
int main(void)
{
	node *head;
	head=(node*)malloc(sizeof(node));
	head=NULL;
	int c,x,y,k,i;
	while(1)
	{
		printf("1.insertstart\n2.insertend\n3.insert after\n4.insert before\n5.delet\n6.delete end\n7.delete start\n8.reverse\n9.palindrome\n10.display\n");
	    scanf("%d",&c);
	    switch(c)
	    {
	    	case 1:
	    		printf("Enter a number");
	    		scanf("%d",&x);
	    		head=insertstart(head,x);
	    		break;
	    	case 2:
	    		
		}
	}
	return 0;
}

