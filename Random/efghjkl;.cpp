#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int info;
    struct Node *next;
};

typedef struct Node node;

node* insert(node *head,int x)
{
    node *p,*q=head;
    p=(node*)malloc(sizeof(node));
    p->info=x;
    p->next=NULL;
    
    if(head==NULL)
    {    
        
        return p;
    }
    while(q->next!=NULL)
    q=q->next;
    q->next=p;
    return head;
}
node* enqueue(node *head,int x)
{
	node *p=head,*q;
	q=(node *)malloc(sizeof(node));
	q->info=x;
	q->next=NULL;
	if(head==NULL)
	return q;
	while(p->next!=NULL)
    {
        
        p=p->next;
    }
	p->next=q;
	return head;
	
}
node* dequeue(node *head)
{
node *p;
    
    if(head==NULL)
    {
    
        printf("underflow");
        return NULL;
    }
   
    p=head->next;
    free(head);
   

    return p;
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
    node *head;
    head=NULL;
    int c,y,i=0;
   
    while(1)
    {
        printf("1.enqueue\n2.dequeue\n3.exit\n4.display\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                
                
                printf("Enter element:");
                scanf("%d",&y); 
                head=enqueue(head,y);
                break;
            case 2:
                
                head=dequeue(head);
                break;
            case 4:
                display(head);    
                printf("\n");
                break;

            case 3:
                exit(0);
            default:
                exit(0);
        }
    }
    return 0;
}

