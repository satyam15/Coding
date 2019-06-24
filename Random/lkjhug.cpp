#include<stdio.h>
#include<stdlib.h>
#define boolean bool
struct NODE
{
	struct NODE *left;
	boolean lthread;
	int info;
	boolean rthread;
	struct NODE *right;
};
#define node struct NODE
node *insert(node *root,int key)
{
	node *tmp,*par,*ptr;
	int found=0;
	ptr=root;
	par=NULL;
	while(ptr!=NULL)
	{
		if(key==ptr->info)
		{
			found=1;
			break;
		}
		par=ptr;
		if(key<ptr->info)
		{
			if(ptr->lthread==false)
			ptr=ptr->left;
			else
			break;
		}
		else
		{
			if(ptr->rthread==false)
			ptr=ptr->right;
			else
			break;
		}
	}
	if(found)
	printf("duplicate\n");
	else
	{
		tmp=(node *)malloc(sizeof(node));
		tmp->info=key;
		tmp->lthread=true;
		tmp->rthread=true;
		if(par==NULL)
		{
			root=tmp;
			tmp->left=NULL;
			tmp->right=NULL;
			
		}
		else if(key<par->info)
		{
			tmp->left=par->left;
			tmp->right=par;
			par->lthread=false;
			par->left=tmp;
		}
		else
		{
			tmp->left=par;
			tmp->right=par->right;
			par->rthread=false;
			par->right=tmp;
		}
	}
	return root;
}
node *in_succ(node *ptr)
{
	if(ptr->rthread==true)
	return ptr->right;
	else
	{
		ptr=ptr->right;
		while(ptr->lthread==false)
		ptr=ptr->left;
		return ptr;
	}
}
node *in_pred(node *ptr)
{
	if(ptr->lthread==true)
	{
		return ptr->left;
	}
	else
	{
		ptr=ptr->left;
		while(ptr->rthread==false)
		ptr=ptr->right;
		return ptr;
	}
}
node *case_a(node *root,node *par,node *ptr)
{
	if(par==NULL)
	return NULL;
	else if(ptr==par->left)
	{
		par->lthread=true;
		par->left=ptr->left;
	}
	else
	{
		par->rthread=true;
		par->right=ptr->right;
	}
	free(ptr);
	return root;
}
node *case_b(node *root,node *par,node *ptr)
{
	node *child;
	node *s;
	node *p;
	if(ptr->lthread==false)
	{
		child=ptr->left;
	}
	else
	child=ptr->right;
	if(par==NULL)
	root=child;
	else if(ptr==par->left)
	par->left=child;
	else
	par->right=child;
	s=in_succ(ptr);
	p=in_pred(ptr);
	if(ptr->lthread==false)
	p->right=s;
	else
	{
		if(ptr->rthread==false)
		s->left=p;
	}
	free(ptr);
	return root;
}
node *case_c(node *root,node *ptr)
{
	node *succ;
	node *parsucc;
	parsucc=ptr;
	succ=ptr->right;
	while(succ->left !=NULL)
	{
		parsucc=succ;
		succ=succ->left;
	}
	ptr->info=succ->info;
	if(succ->lthread==true && succ->rthread==true)
	root=case_a(root,parsucc,succ);
	else
	root=case_b(root,parsucc,succ);
	return root;
}
node *del(node *root,int key)
{
	node *par,*ptr;
	int found=0;
	ptr=root;
	par=NULL;
	while(ptr!=NULL)
	{
		if(key==ptr->info)
		{
			found=1;
			break;
		}
		par=ptr;
		if(key<ptr->info)
		{
			if(ptr->lthread==false)
			ptr=ptr->left;
			else
			break;
		}
		else
		{
			if(ptr->rthread==false)
			ptr=ptr->right;
			else
			break;
		}
	}
	if(found==0)
	printf("key is not present in tree\n");
	else if(ptr->lthread==false && ptr->rthread==false)
	root=case_c(root,par,ptr);
	else if(ptr->lthread==false)
	root=case_b(root,par,ptr);
	else if(ptr->rthread==false)
	root=case_b(root,par,ptr);
	else
	root=case_a(root,par,ptr);
	return root;
}
void inorder(node *root)
{
	node *ptr;
	if(root==NULL)
	{
		printf("tree is empty\n");
		return;
	}
	ptr=root;
	while(ptr->lthread==false)
	{
		ptr=ptr->left;
	}
	while(ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=in_succ(ptr);
	}
}
void preorder(node *root)
{
	node *ptr;
	if(root==NULL)
	{
		printf("tree is empty\n");
		return;
	}
	ptr=root;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->info);
		if(ptr->lthread==false)
		{
			ptr=ptr->left;
		}
		else if(ptr->rthread==false)
		ptr=ptr->right;
		else
		{
			while(ptr!=NULL && ptr->rthread==true)
			ptr=ptr->right;
			if(ptr!=NULL)
			ptr=ptr->right;
		}
	}
}
void postorder(node *root){

    if(root==NULL)

        return;

    postorder(root->left);

    if(!(root->r_child))

        postorder(root->right);

    printf("%d ",root->info);

}
main(){

	int a,b;

	node *root;

	root=NULL;

	while(1){

		printf("enter 1 for insertion\nenter 2 for postorder display\nenter 3  for deletion\n");

		int a;

		scanf("%d",&a);

		if(a==1){

			printf("enter the number u wanna insert\n");

			int b;

			scanf("%d",&b);

			root=insert(root,b);

		}




		if(a==2){

			postorder(root);

			printf("\n");

		}

		if(a==3)
		{
			
		}

	}

	

}
	
}
