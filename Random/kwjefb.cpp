#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Stack
{
    char arr[1000];
    int top;
}stack;
void push(stack *s,char c)
{
    s->arr[++(s->top)]=c;
}
void pop(stack *s)
{
    s->top--;
}
int main(void)
{
    stack *s;
    s=(stack*)malloc(sizeof(stack));
    s->top=-1;
    char arr[1000];
    int q,i,l,k,p=0;
    char c;
    scanf("%d\n",&q);
    for(i=0;i<q;i++)
    {
        s->top=-1;
        fgets(arr,1000,stdin);
        l=strlen(arr);        
        for(k=0;k<l-1;k++)
        {if((s->arr[s->top]=='['&&arr[k]==']')||(s->arr[s->top]=='('&&arr[k]==')')||(s->arr[s->top]=='{'&&arr[k]=='}'))
                     {
                     pop(s);}
                     else
                     push(s,arr[k]);        
        }
   
        if(s->top==-1)
            printf("YES\n"); 
        else printf("NO\n");
                for(k=0;k<l-1;k++)
                   s->arr[k]='\0';
    }
        return 0;
}
