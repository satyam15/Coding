#include <stdio.h>
#include <stdlib.h>
struct mlnode
{
    int row,col,value;
    struct mlnode *nrow,*ncol;
};
typedef struct mlnode ml;
ml *above(ml *head,int r,int c);
ml *left(ml *head,int r,int c);
ml * insert(ml *head,int r,int c,int value);
void display(ml *head);
main()
{
    int i,r,v,c;
    ml *p;
    ml *head;
    head=(ml *)malloc(sizeof(ml));
    head->value=0;
    head->row=-1;
    head->col=-1;
    head->nrow=head;
    head->ncol=head;
    int m,n;
    printf("enter size of matrix:\n");
    scanf("%d%d",&m,&n);
    printf("m+n+1 heads are present\n");
    p=head;
    for(i=1;i<=m;i++)
	{
    ml *temp;
    temp=(ml*)malloc(sizeof(ml));
    temp->col=-1;
    temp->row=i-1;
    temp->nrow=head;
    p->nrow=temp;
    temp->ncol=temp;
    p=temp;
    }
    p=head;
        for(i=1;i<=n;i++)
{
    ml *temp;
    temp=(ml*)malloc(sizeof(ml));
    temp->row=-1;
    temp->col=i-1;
    temp->ncol=head;
    p->ncol=temp;
    temp->nrow=temp;
    p=temp;

}


    int ch;
    while(1)
    {
        printf("enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
         case 1:
             printf("enter value row col of item to be inserted:\n");
             scanf("%d%d%d",&v,&r,&c);
             head=insert(head,r,c,v);
             break;
         case 2:
            display(head);
            break;
         case 3:
            exit(1);

   } }
}
ml *above(ml *head,int r,int c)
{
    ml *p=head->ncol;
    ml *q;
    while(p->col!=c)
    p=p->ncol;
    do
    {
        q=p;
        p=p->nrow;
    }while(p->row<r  && p->row!=-1);

    return q;
}

ml *left(ml *head,int r,int c)
{
    ml *p=head->nrow;
    ml *q;
    while(p->row!=r)
    p=p->nrow;
    do
    {
        q=p;
        p=p->ncol;
    }while(p->col<c  && p->col!=-1);

    return q;
}

ml *insert(ml *head,int r,int c,int value)
{
    ml *p,*a,*l;
    p=(ml*)malloc(sizeof(ml));
    p->value=value;
    p->row=r;
    p->col=c;
    a=above(head,r,c);
    l=left(head,r,c);
    p->nrow=a->nrow;
    a->nrow=p;
    p->ncol=l->ncol;
    l->ncol=p;
    return head;
}
void display(ml *head)
{
    ml *p=head->nrow,*q;
    while(p!=head)
    {
        q=p->ncol;
        while(q!=p)
        {
            printf("%d\t",q->value);
            q=q->ncol;
        }
        p=p->nrow;
    }
}
