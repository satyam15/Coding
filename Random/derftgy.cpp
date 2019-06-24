#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 1000
typedef struct Stack{
    char arr[size];
    int top;
}stack;

char pop(stack *s)
{
    if(s->top==-1)
    return NULL;
   return s->arr[s->top--];
}

int main(void)
{
    stack *s1;
    char c;
    int i,n,k,y;
    int arr[3]={0,0,0};
    s1=(stack *)malloc(sizeof(stack));
    scanf("%d\n",&n);
    for(k=0;k<n;k++){
    fgets(s1->arr,size,stdin);
    s1->top=strlen(s1->arr)-1;
    while(y){
        y=s1->top+1;
        c=pop(s1);
        if(c=='(')
            arr[40-'(']++;
        if(c==')')
            arr[40-'(']--;
        if(c=='{')
            arr[124-'{']++;
        if(c=='}')
            arr[124-'{']--;
        if(c=='[')
            arr[93-'[']++;
        if(c=='[')
            arr[93-'[']--;
        
    }
	if(arr[0]==0&&arr[1]==0&&arr[2]==0)
            printf("YES\n");
        else 
            printf("NO\n");
	}
    return 0;
    
}
