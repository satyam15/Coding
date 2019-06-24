#include<stdio.h>
#define stksize 30
typedef struct Stack {
int arr;
int top;}stack;
int pop(stack *s)
{
    return (s->arr[s->top--]);
}
void push(stack *s,int x)
{
    s->arr[++(s->top)]=x;
}
int oprt(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
        return 1;
    return 0;
}
int main()
{
   char exp[20];
   char *e;
   int n1,n2,n3,num;
   printf("Enter the expression :: ");
   scanf("%s",exp);
   e = exp;
   while(*e != '\0')
   {
   if(oprt(*e))
   {
   n1 = pop(&s);
   n2 = pop(&s);
   switch(*e)
     {
     case '+':
    n3 = n1 + n2;
     break;
     case '-':
     n3 = n2 - n1;
     break;
     case '*':
     n3 = n1 * n2;
     break;
    case '/':
    n3 = n2 / n1;
    break;
    }
    }
    else
     {
      num = *e - 48;
     push(num);
    }
    e++;
    }
    printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
    return 0;

}
