#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node {
	char info;
	struct Node *lchild,*rchild;
};
typedef struct Node node;
struct Stack{
	node* arr[30];
	int top;
};
typedef struct Stack stack;
node* newNode(char v) 
{ 
    node *temp = (node*)malloc(sizeof(node)); 
    temp->lchild = temp->rchild = NULL; 
    temp->info = v; 
    return temp; 
}; 
void push(stack *s,node* c)
{
	s->arr[++s->top]=c;
}
node* pop(stack *s)
{
	return s->arr[s->top--];
}
typedef struct Stack stack;



int isOperator(char c) 
{ 
    if (c == '+' || c == '-' ||  c == '*' || c == '/' ||  c == '^') 
        return 1; 
    return 0; 
} 

void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->lchild);
		printf("%c ",root->info);
		inorder(root->rchild);
	}
}
int main(void)
{
	char s[100];
	node *p,*q,*root=NULL;
	scanf("%s",s);
	int i;
	stack *S;
	S=(stack*)malloc(sizeof(stack));
	S->top=-1;
	for(i=0;i<strlen(s);i++)
	{
		if(isOperator(s[i])==0)
		{
			root=newNode(s[i]);	 
			push(S,root);
		}
		if(isOperator(s[i])==1)										//ab+ef*g*-
		{
			root=newNode(s[i]);
			p=pop(S);
			q=pop(S);
			root->lchild=q;
			root->rchild=p;
			push(S,root);
		}
	}
	root=pop(S);
	inorder(root);
	return 0;
}
