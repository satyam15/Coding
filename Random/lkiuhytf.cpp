#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Node{
	int f;
	char c;
	struct node *rchild,*lchild;
};


typedef Node node;
struct Stack{
	node* arr[30];
	int top;
};
typedef struct Stack stack;
void push(stack *s,node* c)
{
	s->arr[++s->top]=c;
}
node* pop(stack *s)
{
	return s->arr[s->top--];
}
node* newNode(char v,int x) 
{ 
    node *temp = (node*)malloc(sizeof(node)); 
    temp->lchild = temp->rchild = NULL; 
    temp->c = v; 
    temp->f=x;
    return temp; 
};
int main(void)
{
	scanf("%d",&n);
	int arr[n],freq[n];
	int i,x,y,p,q;
	stack *s;
	s=(stack*)malloc(sizeof(s));
	node *root;
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x,&y);
		arr[i]=x;
		freq[i]=y;
	}
	x=0;
	y=0;
	i=n;
	for(i=0;i<n;i++)
			{
				if(freq[i]<x)
				{
					x=freq[i];
				}
			}
			p=i;
	for(i=0;i<n;i++)
			{
				if(freq[i]<y&&y>x)
				{
					y=freq[i];
				}
			}
			q=i;
			i-=2;
	while(i--)
	{
		root=newNode(arr[])	
	}
	
	
	
}
