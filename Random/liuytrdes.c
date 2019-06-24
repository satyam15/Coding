#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node {
	char info;
	int freq;
	struct Node *lchild,*rchild;
};
typedef struct Node node;
node* newNode(node *lnode,node *rnode,int freq)
{
	node *temp=(node*)malloc(sizeof(node));
	temp->lchild=lnode;
	temp->rchild=rnode;
	temp->freq=freq;
	temp->info='$';
	return temp;
}
node* Node(node *lnode,node *rnode,int freq,char c)
{
	node *temp=(node*)malloc(sizeof(node));
	temp->lchild=lnode;
	temp->rchild=rnode;
	temp->freq=freq;
	temp->info=c;
	return temp;
}
void print(node *root,int top,int arr[])
{
	int i;
	if(root==NULL)
	{
		return;
	}
	if(root->lchild!=NULL)
	{
		arr[++top]=0;
		print(root->lchild,top+1,arr);
	}
	else
	if(root->rchild!=NULL)
	{
		arr[++top]=1;
		print(root->rchild,top+1,arr);
	}
	else
	{
		printf("%c :",root->info);
		for(i=0;i<=top;i++)
		{
			printf("%d",arr[i]);
		}
		top=-1;
	}
}
int main(void)
{
	int n,b,i;
	char a;
	scanf("%d",&n);

	printf("%d",n);
	char arr[n];
	int fq[n];
	for(i=0;i<n;i++)
	{

		scanf("%c",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&fq[i]);
	}
	node *p,*q,*root,*newRoot;
	p=newNode(NULL,NULL,fq[0]);
	q=newNode(NULL,NULL,fq[1]);

	root=newNode(p,q,fq[0]+fq[1]);
	for(i=2;i<n;i++)
	{
		newRoot=Node(NULL,NULL,fq[i],arr[i]);
		if(newRoot->freq<=fq[i-1]+fq[i-2])
		{
			root=newNode(newRoot,root,newRoot->freq+root->freq);
		}
		else if(newRoot->freq>fq[i-1]+fq[i-2])
		{
			root=newNode(root,newRoot,newRoot->freq+root->freq);
		}
	}
	int top=-1;
	int ar[10];
	print(root,top,ar);
}
