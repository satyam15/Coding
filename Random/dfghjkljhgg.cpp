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

int length(node *head)
{
	node *p=head;
	if(p==NULL)
	return 0;
	return (1+length(p->next));
}	

int main(void)
{
	node *head;
	head=NULL;
	int c,y;
	while(1)
	{
		printf("1.insert\n2.find length\n3.exit\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter element to be inserted\n");
				scanf("%d",&y);
				head=insert(head,y);
				break;
			case 2:
				printf("length = %d\n",length(head));
				break;
			case 3:
				exit(0);
				break;
		default:
				exit(0);
		}
	}
	return 0;
}

