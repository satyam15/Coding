#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int info;
    struct Node *next;
};

typedef struct Node node;
int top=-1;
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
node* delete(node *head)
{
node *p=head,*q;

    if(head->next==NULL)
    {

        free(head);
        return NULL;
    }
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    printf("%d\n",p->info);
    free(p);
    q->next=NULL;

    return head;
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
    printf("Enter size of stack");
    scanf("%d",&top);
    while(1)
    {
        printf("1.push\n2.pop\n3.exit\n4.display\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                i++;
                if(i>top)
                printf("overflow");
                else
                printf("Enter element:");
                scanf("%d",&y);
                head=insert(head,y);
                break;
            case 2:
                i--;
                if(i<0)
                printf("\nunderflow\n");
                else
                head=delete(head);
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
