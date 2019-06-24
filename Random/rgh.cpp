   #include<stdio.h>
   #include<stdlib.h>
   #define stksize 10
   typedef struct Stack{
   	int arr[stksize];
   	int top;
   }stack;
   void push(stack * s1,int x)
   {
   	if(s1->top==stksize-1)
   	{
   		printf("overflow");
   		return ;
	   }
	   s1->arr[++(s1->top)]=x;
	   return;
   }
   int pop(stack *s1)
   {
   	if(s1->top==-1)
   	{
   		printf("underflow");
   		exit(0);
	   }
	   return (s1->arr[(s1->top)--]);
   }
   void display(stack *s1)
   {
   	if(s1->top==-1)
   	{printf("empty");
     return;
	 }
	 int p;
	for(p=(s1->top-1);p>=0;p--)
	 printf("%d ",s1->arr[p]);}
   int main(void)
   {
   	stack s1,s2;
   	int c,x,z;
   	s1.top=-1;
   	while(1)
   	{
   		printf("\n1.push\n2.pop\n3.display\n4.display s2\n");
   		scanf("%d",&c);
   		switch(c)
   		{
   			case 1:
   					if(s1.top==-1){
   				scanf("%d",&x);
   				push(&s1,x);
   				}
   					else{ if(s1.arr[(s1.top-1)]>x)
   					push(&s2,x);
   						else 
						   {
						   z=pop(&s2);
						   push(&s2,s1.arr[(s2.top-1)]);
						   push(&s1,x);}
					   break;
   				
   			case 2:
   			
   				printf("%d",pop(&s1));
   				break;
   			
   			case 3:
   				display(&s1);
   				break;
   				case 4:
   					display(&s2);
   					break;
   			default:
   				exit(0);
		   }
	   }
	
}
   }
