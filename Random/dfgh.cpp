#include<bits/stdc++.h>

using namespace std;

struct dqueue

{

       struct dqueue* pre;

       int data;

       struct dqueue* next;

};

typedef struct dqueue dq;

dq* front;

dq* rear;

void push(int x)

{

       dq* tmp=(dq*)malloc(sizeof(dq));

       tmp->data=x;

       if(front==NULL&&rear==NULL)

       {

              tmp->pre=NULL;

              tmp->next=NULL;

              front=tmp;

              rear=tmp;

       }

       else

       {

              tmp->pre=rear;

              tmp->next=NULL;

              rear->next=tmp;

              rear=tmp;

       }

      

}

void pop()

{

       dq* crnt;

       if(front==NULL&&rear==NULL)

       {

              printf("Empty queue\n");

              return;

       }

       if(front==rear)

       {

              int x=front->data;

              crnt=front;

              front=NULL;

              rear=NULL;

              free(crnt);

              printf("%d\n",x);

             

       }

       else

       {

              int x=front->data;

              crnt=front;

              front=front->next;

              front->pre=NULL;

              free(crnt);

              printf("%d\n",x);

       }

}

void display()

{

       dq* tmp1;

       tmp1=front;

       while(tmp1!=NULL)

       {

              printf("%d\n",tmp1->data);

              tmp1=tmp1->next;

       }

}

int main()

{

       int x,n;

       while(1)

       {

              printf("1-enqueue\n2-dequeue\n3-display\n4-exit\n");

              scanf("%d",&x);

              if(x==1)

              {

                     printf("Enter an element\n");

                     scanf("%d",&n);

                     push(n);

              }

              else if(x==2)

              pop();

              else if(x==3)

              display();

              else

              break;

       }

       return 0;

}
