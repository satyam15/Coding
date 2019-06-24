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

	if(root->lchild!=NULL)
	{
		arr[top]=0;
		print(root->lchild,top+1,arr);
	}
	if(root->rchild!=NULL)
	{
		arr[top]=1;
		print(root->rchild,top+1,arr);
	}
	if(root->lchild==NULL&&root->rchild==NULL)
	{
		printf("%c :",root->info);
		for(i=0;i<top;i++)
		{
			printf("%d",arr[i]);
		}
		printf("\n");
		top=0;
	}
}

int main(void)
{
	int n,b,i;
	char a;
	printf("Enter number of character\n");
	scanf("%d",&n);
	char arr[n];
	int fq[n];
	printf("Enter character and its frequency in increasing order\n");
	for(i=0;i<n;i++)
	{
		scanf("\n%c",&arr[i]);
		scanf("%d",&fq[i]);
		
	
	}
	for(i=0;i<n;i++)
	{
		printf("%c %d\n",arr[i],fq[i]);
	}
	node *p,*q,*root,*newRoot;
	p=Node(NULL,NULL,fq[0],arr[0]);
	q=Node(NULL,NULL,fq[1],arr[1]);
	
	root=newNode(p,q,fq[0]+fq[1]);
	for(i=2;i<n;i++)
	{
		newRoot=Node(NULL,NULL,fq[i],arr[i]);
		if(newRoot->freq<=root->freq)
		{
			root=newNode(newRoot,root,newRoot->freq+root->freq);
		}
		else if(newRoot->freq>root->freq)
		{
			root=newNode(root,newRoot,newRoot->freq+root->freq);	
		}
	}
	
	printf("huffman decoding\n");
	int top=0;
	int ar[10];
	print(root,top,ar);
	return 0;
}
