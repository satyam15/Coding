#include<stdio.h>
#include<stdlib.h>
struct Node{
int info;
struct Node *next;
};
typedef struct Node node;

node* insert_start(node* head,int y)
{

    node *p;
    p=(node*)malloc(sizeof(node));
    p->info=y;
    p->next=head;
    return p;
}

node* insert_end(node* head,int y)
{
    node *p,*q=head;
    p=(node*)malloc(sizeof(node));
    p->info=y;
    p->next=NULL;
    if(head==NULL)
    return p;    
    while(q->next!=NULL)
        q=q->next;
    q->next=p;
    return head;
}
node* insert_before(node* head,int y,int x)
{
    if(head==NULL)
        {printf("empty list\n");
        return NULL;}
    node *p,*q=head,*l;
    p=(node*)malloc(sizeof(node));
    p->info=y;
    l=q;
    while((q->next!=NULL)&&(q->info!=x))
        { l=q;
        q=q->next;}
    if(q->info==x)
        {
        p->next=l->next;
        l->next=p;
        return head;
        }
    printf("Element not present\n");
    return head;    
    
}

node* insert_after(node* head,int y,int x)
{
    if(head==NULL)
        return NULL;
    node *p,*q=head;
    p=(node*)malloc(sizeof(node));
    p->info=y;
    
    while(q->next!=NULL&&q->info!=x)
        q=q->next;
    if(q->info==x)
        {
        p->next=q->next;
        q->next=p;
        return head;
        }
    
    printf("Element not present\n");
    return head;
}

node* delete_first(node* head)
{
    if(head==NULL)
        return NULL;
    node *q;
    if(head->next==NULL)
        {
            free(head);
            return NULL;
        }
    q=head->next;
    free(head);
    return q;
}

node* delete_last(node* head)
{
    if(head==NULL)
        return NULL;
    node *q=head;
    if(head->next==NULL)
        {
            return NULL;
        }
    while(q->next->next!=NULL)
        q=q->next;
    free(q->next->next);
    q->next=NULL;
    return head;
}

node* delete_x(node* head,int x)
{
    node *q=head,*p;
    if(head==NULL)
        return NULL;
    if(head->info==x)
        {
            q=head->next;
            free(head);
            return q;
        }
    while(q->next->info!=x)
        q=q->next;
    p=q->next;
    q->next=q->next->next;
    free(p);
    return head;
}
void display(node* head)
{
    node *p=head;
    if(head==NULL)
        {
        printf("Empty\n");
        return;
        }
while(p!=NULL)
    {
    printf("%d ",p->info);
    p=p->next;
    }
    printf("\n");
}
int main(void)
{
    node *head;
    head=(node*)malloc(sizeof(node));
    head=NULL;
    int c,y,x;
    while(1)
        {
            printf("1. Create a linked list.\n2. Insert an element at the start of the linked list.\n3. Insert an element at the end of the linked list.    \n4.Insert an element before an existing element whose information is x in a linked list.\n5. Insert an element after an existing element whose information is x in a linked     list.\n6. Delete the first element of the linked list.\n7. Delete the last element of the linked list.\n8. Delete the element whose information is x from a linked list.\n9. Display the contents of the linked list.\n10.exit\n");
    scanf("%d",&c);        
    switch(c)
        {
        case 1:
            printf("link list created\n");
            break;
        case 2:
            printf("Enter element:");
            scanf("%d",&y);
            head=insert_start(head,y);
            break;
        case 3:
            printf("Enter element:");
            scanf("%d",&y);
            head=insert_end(head,y);
            break;

        case 4:
            printf("Enter existing element:");
            scanf("%d",&x);
            printf("Enter element to be inserted:");
            scanf("%d",&y);
            head=insert_before(head,y,x);
            break;
        case 5:
            printf("Enter existing element:");
            scanf("%d",&x);
            printf("Enter element to be inserted:");
            scanf("%d",&y);
            head=insert_after(head,y,x);
            break;

        case 6:
            head=delete_first(head);
            break;
        case 7:
            head=delete_last(head);
            break;
        case 8:
            printf("Enter element:");
            scanf("%d",&x);
            head=delete_x(head,x);
            break;
        case 9:
            display(head);
            break;
        default:
            exit(0);
        }
    }
    return 0;
    }

