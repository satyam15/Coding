#include<stdio.h>
#include<stdlib.h>

struct Node{
	int info,count;
	struct Node *lchild,*rchild;
};

typedef struct Node node;

int index(int inOrder[], int start, int end, int data)
 {
		for (int i = start; i <= end; i++)
		{
			if (inOrder[i] == data)
			{
				return i;
			}
		}
		return -1;
}

node* create(int info)
{
	node *p=(node*)malloc(sizeof(node));
	p->info=info;
	p->lchild=NULL;
	p->rchild=NULL;
	p->count=1;
	return p;
}

void Preorder(node *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->info);
		Preorder(root->lchild);	
		Preorder(root->rchild);
	}
}


node* insert(int inorder[],int preorder[],int ins,int ine,int *poe)
{
	int info,i;
	node *root;
	if(ins>ine)
	return NULL;
	info=preorder[*poe];
	root=create(info);
	(*poe)++;
	if(ins==ine)
	 return root;
	 i=index(inorder,ins,ine,root->info);
	 root->lchild=insert(inorder,preorder,ins,i-1,poe);
	 root->rchild=insert(inorder,preorder,i+1,ine,poe);
	return root;
}


int main(void)
{
	node *root;
	printf("Enter numbere of nodes\n");
	int n,i,p;
	scanf("%d",&n);
	int inorder[n],preorder[n];
	printf("Enter inorder traversal\n");
	for(i=0;i<n;i++)
		scanf("%d",&inorder[i]);
	printf("Enter preorder traversal\n");
	for(i=0;i<n;i++)
		scanf("%d",&preorder[i]);
		p=0;
	root=insert(inorder,preorder,0,n-1,&p);
	printf("\npostorder traversal after making tree\n");
	Preorder(root);
}
