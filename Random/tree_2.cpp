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

void Postorder(node *root)
{
	if(root!=NULL)
	{
		Postorder(root->lchild);	
		Postorder(root->rchild);
		printf("%d ",root->info);
	}
}

node* insert(int inorder[],int postorder[],int ins,int ine,int *poe)
{
	int info,i;
	node *root;
	if(ins>ine||*poe==-1)
	return NULL;
	info=postorder[*poe];
	root=create(info);
	(*poe)--;
	if(ins==ine)
	 return root;
	 i=index(inorder,ins,ine,root->info);
	 root->lchild=insert(inorder,postorder,ins,i-1,poe);
	 root->rchild=insert(inorder,postorder,i+1,ine,poe);
	return root;
}


int main(void)
{
	node *root;
	printf("Enter numbere of nodes\n");
	int n,i,p;
	scanf("%d",&n);
	int inorder[n],postorder[n];
	printf("Enter inorder traversal\n");
	for(i=0;i<n;i++)
		scanf("%d",&inorder[i]);
	printf("Enter postorder traversal\n");
	for(i=0;i<n;i++)
		scanf("%d",&postorder[i]);
		p=n-1;
	root=insert(inorder,postorder,0,n-1,&p);
	printf("\npostorder traversal after making tree\n");
	Postorder(root);
}
