#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
	int x;
	struct Node *next;
};
typedef struct Node node;

node* insert(node *head,int x)
{
	node *p,*q=head;
	p=(node*)malloc(sizeof(node));
	p->next=NULL;
	p->x=x;
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

int main(void)
{
	char c2[100],c1[100];
	fgets(c2,100,stdin);
	fgets(c1,100,stdin);
	node *head,*head1,*head3;
	head=NULL;
	head1=NULL;
	head3=NULL;
	int x=0,p=0,c=1,i;
	for(i=strlen(c2)-1;i>=0;i--)
	{
		
		x+=(c2[i]-0)*c;
		p++;
		c*=10;
		if(p==4)
		{
			p=0;
			head=insert(head,x);
			x=0;
			c=1;
		}
	}
	c=1;
	p=0;
	x=0;
		for(i=strlen(c1)-1;i>=0;i--)
	{
		
		x+=(c1[i]-0)*c;
		p++;
		c*=10;
		if(p==4)
		{
			p=0;
			head1=insert(head1,x);
			x=0;
			c=1;
		}
	}
	int sum,carry=0;
	node *p1,*q;
	p1=head;
	q=head1;
	
	while(p1!=NULL&&q!=NULL)
	{
		if(carry!=0)
		{
		head3=insert(head3,p1->x + q->x - carry*100000);	
		}
		else
		head3=insert(head3,p1->x+q->x+carry*100000);
		carry=(p1->x  +  q->x)/100000;
		p1=p1->next;
		q=q->next;
	}
	node *l=head3;
	while(l==NULL)
	{
		printf("%d  ",l->x);
		l=l->next;
	}
	return 0;
	
}

