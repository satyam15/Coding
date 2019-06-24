#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define stksize 30
typedef struct Stack{
char arr[stksize][stksize];
int top;
}stack;
void push(stack *s,char ch)
{
    s->arr[++(s->top)][0]=ch;
}
void pop(stack *s,char ch)
{
    char c1[stksize],c2[stksize];
    strcpy(c1,s->arr[s->top--]);
    strcpy(c2,s->arr[s->top]);
    strcpy(s->arr[s->top],&ch);
    strcat(s->arr[s->top],c2);
    strcat(s->arr[s->top],c1);

}
int oprt(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
        return 1;
    return 0;
}
int main(void)
{
    char exp[stksize];
    scanf("%s",exp);
    stack *s;
    s=(stack *)malloc(sizeof(stack));
    int i;
    s->top=-1;
    for(i=0;i<strlen(exp);i++)
    {
        if(oprt(exp[i]))
            pop(s,exp[i]);
            else
    push(s,exp[i]);
    }
    printf("%s",s->arr[0]);

}
