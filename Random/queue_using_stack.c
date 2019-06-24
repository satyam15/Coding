 #include<stdio.h>
 #include<stdlib.h>
 #define size 30
 typedef struct Stack{
 int arr[size];
 int top;}stack;
int pop(stack *s)
{
    if(s->top==-1)
    {
      return -1;
    }
    return s->arr[s->top--];
}
void push(stack *s,int x)
{
    if(s->top==size-1)
        {printf("overflow\n");
    return;}
    s->arr[++(s->top)]=x;
}
void display(stack *s)
{
    int i=0;
    for(i=(s->top);i>=0;i--)
        printf("%d ",s->arr[i]);
    printf("\n");
}
int main(void)
{
    stack *s,*s1;
    s=(stack *)malloc(sizeof(stack));
    s1=(stack *)malloc(sizeof(stack));
    s->top=-1;
    s1->top=-1;
    int x,y,c;
        while(1)
    {
        printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        scanf("%d",&c);
        switch(c)
        {
         case 1:
            printf("Enter an element:");
            scanf("%d",&x);
             while(s->top!=-1)
             {y=pop(s);
              push(s1,y);}
              push(s,x);
              while(s1->top!=-1)
             {y=pop(s1);
              push(s,y);}
            break;
         case 2:
           if(s->top==-1)
           {
               printf("empty stack\n");
               break;
           }
           printf("%d\n",pop(s));
           break;
         case 3:
            display(s);
            break;
         case 4:
            exit(0);
         default:
            printf("invalid input\n");
            exit(0);
        }
        }
        return 0;
}
