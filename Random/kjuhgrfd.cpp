#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
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
void all(int arr[],int top)
{
		int i;
		for(i=0;i<top;i++)
		{
			printf("%d  ",arr[i]);
		}
		printf("\n");
	
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
		arr[top]=0;
		print(root->lchild,top+1,arr);
	}

	if(root->rchild!=NULL)
	{
		arr[top]=1;
		print(root->rchild,top+1,arr);
	}
	if(root->rchild==NULL&&root->lchild==NULL)
	{	printf("%c : ",root->info);
		all(arr,top);
		top=0;}
	
}
void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->lchild);
		printf("\n%c  :  %d \n",root->info,root->freq);
		inorder(root->rchild);
	}
}
int main(void)
{
	int n,b,i,j;
	char a;
	scanf("%d",&n);
	node *nd[n];
	for(i=0;i<n;i++)
	{

		cin>>nd[i]->info;
	nd[i]->lchild=NULL;
	nd[i]->rchild=NULL;
	
	}
		
	for(i=0;i<n;i++)
	{
			cin>>nd[i]->freq;
	}
	node *q,*root,*newRoot;
	
	while(n!=1){
	root=newNode(nd[0],nd[1],nd[1]->freq+nd[0]->freq);
	for(i=2;i<n;i++)
	{
		
		nd[i-2]=nd[i];
	}
	n-=2;
	for(i=0;i<n;i++)
	{
		if(nd[i]->freq > root->info)
		{
			break;
		}
	}
	
	for(j=n;j>i;j--)
	{
		nd[j]=nd[j-1];
	}
	nd[i]=root;
}
	
	/*for(i=2;i<n;i++)
	{
		newRoot=Node(NULL,NULL,fq[i],arr[i]);
		if(newRoot->freq<=root->freq)
		{
			root=newNode(newRoot,root,newRoot->freq+root->freq);
		}
		if(newRoot->freq>root->freq)
		{
			root=newNode(root,newRoot,newRoot->freq+root->freq);	
		}
	}*/
	int top=0;
	int ar[10];

	print(root,top,ar);
}
