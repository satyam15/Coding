#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node *next;
    int vertex;
}node;

node *G[20];
int v[20];
void dfs(int i)
{
	node *p=G[i];
		printf("%d ",i);
	v[i]=1;
	while(p!=NULL)
	{
		i=p->vertex;
		if(v[i]==0)
		{
			dfs(i);
		}	
		p=p->next;
	}	
}

void insert(int u,int v)
{
	node *p=(node*)malloc(sizeof(node));
		p->vertex=v;
		p->next=NULL;
		if(G[u]==NULL)
		{
			G[u]=p;
			return;
		}
		node *q=G[u];
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
}

void createmat()
{
	int n,i,e,j,u,v;
	printf("Enter number of vertices:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		G[i]=NULL;
		printf("Enter nuber of edge:");
		scanf("%d",&e);
		for(i=0;i<e;i++)
		{
	        printf("Enter an edge(u,v):");
	        scanf("%d%d",&u,&v);
	        insert(u,v);
		}
	}
}
int main(void)
{
	int i;
	for(i=0;i<20;i++)
	{
		v[i]=0;
	}
	createmat();
	dfs(0);
	return 0;
}
