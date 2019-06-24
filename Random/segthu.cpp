#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 30
typedef struct Stack
{
	char arr[size];
	int top;
}stack;

void push(stack *s,char c)
{
	s->arr[++s->top]=c;
}
char pop(stack *s)
{
	return s->arr[s->top--];
}
int isoprt(char c)
{
	if(c>='a'&&c<='z')
	return 1;
	else return 0;
}
void reverse(char arr[],int l)
{
	char temp[size];
	
	int i;
	for(i=0;i<l;i++)
	{
		if(arr[i]=='(')
		temp[l-i-1]=')';
		else
		if(arr[i]==')')
		temp[l-i-1]='(';
		else
		temp[l-i-1]=arr[i];
	}
	
	strcpy(arr,temp);
	
}
int prec(char c)
{
	switch(c)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
		return 3;		
	}
	return -1;
}
int main(void)
{
	stack *s;
	s=(stack *)malloc(sizeof(stack));
	s->top=-1;
	char arr[size];
	fgets(arr,30,stdin);
	int l,i,k=-1;
	l=strlen(arr);
	reverse(arr,l);
    
	for(i=0;i<l;i++)
	{
		if(isoprt(arr[i]))
		{
			arr[++k]=arr[i];
		}
		else
		if(arr[i]=='(')
		push(s,'(');
		else if(arr[i]==')')
		{
			while(s->arr[s->top]!='('&&s->top!=-1)
			arr[++k]=pop(s);
			if(s->arr[s->top]!='('&&s->top!=-1)
			{
				printf("invalid expression");
				return 1;
			}
			s->top--;
		}
		else 		
			if(prec(arr[i])>prec(s->arr[s->top])&&s->top==-1)
			push(s,arr[i]);
			else
			{
				while(prec(arr[i])<=prec(s->arr[s->top])&&s->top!=-1)
				arr[++k]=pop(s);
				push(s,arr[i]);
			}
	}
	while(s->top!=-1)
	arr[++k]=pop(s); 
	puts(arr);
	reverse(arr,l);
	arr[l]='\0';
	puts(arr);
	return 0;
}
