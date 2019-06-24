#include<stdio.h>
#include<stdlib.h>
struct Node {
	int info;
	struct Node *lchild,*rchild;
};

typedef struct Node node;
int count(node* root)
{
	if(root==NULL)
	return 0;
	return (1+count(root->rchild)+count(root->lchild));
}
node* insert(node *root,int x)
{
	if(root==NULL)
	{
		root=(node*)malloc(sizeof(node));
		root->info=x;
		root->lchild=NULL;
		root->rchild=NULL;
		return root;
	}
	else if(x<root->info)
	{
		root->lchild=insert(root->lchild,x);
	}
	else if(x>root->info)
	{
		root->rchild=insert(root->rchild,x);
	}
	return root;
}
void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->lchild);
		printf("%d ",root->info);
		inorder(root->rchild);
	}
}
node *minval(node *root)
{
	node *temp=root;
	while(temp->lchild!=NULL)
	{
		temp=temp->lchild;
	}
	return temp;
}
node *delet(node *root,int x)
{
	if(root==NULL)
	{
		printf("x not found");
		return NULL;
	}
	if(x<root->info)
	{
		root->lchild=delet(root->lchild,x);
	}
	else
	if(root->info<x)
	{
		root->rchild=delet(root->rchild,x);
	}
	else
	{
		if(root->lchild==NULL)
		{
			node *temp=root->rchild;
			free(root);
			return temp;
		}
		if(root->rchild==NULL)
		{
		node *temp=root->lchild;
			free(root);
			return temp;	
		}
		else
		{
			node *temp=minval(root->rchild);
			root->info=temp->info;
			root->rchild=delet(root->rchild,temp->info);
		}
		return root;
	}
}

int main(void)
{
	int x;
	int c;
	node *root=NULL;
	while(1)
	{
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				scanf("%d",&x);
				root=insert(root,x);
				break;
			case 2:
				inorder(root);
				break;
			case 4:
				printf("\n\n%d ",count(root));
				break;
			case 3:
				exit(0);
				break;
			case 5:
				scanf("%d",&x);
				delet(root,x);
				break;
		}
	}
	return 0;
}
