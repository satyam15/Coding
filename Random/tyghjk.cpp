#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node Node;
Node* addbeg(Node *head,int item)
{
    Node *tmp=(Node*)malloc(sizeof(Node));
    tmp->info=item;
    tmp->link=NULL;
    head=tmp;
    return head;
}
Node* addend(Node *head,int item)
{
	
    Node* p=head;
    Node *q;
	q=(Node*)malloc(sizeof(Node));
    q->info=item;
    while(p->link!=NULL)
        p=p->link;
        p->link=q;
        q->link=NULL;
        return head;
}
main()
{
    int item,ch=1;
    Node* head=NULL;
    printf("enter info:\n");
    scanf("%d",&item);
    head=addbeg(head,item);
    while(ch)
    {
        printf("enter info:\n");
        scanf("%d",&item);
        head=addend(head,item);
       
        printf("enter choice:\n");
        scanf("%d",&ch);
        
    }
    Node* p=head;
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->link;
    }
}
