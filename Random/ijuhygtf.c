#include<stdio.h>
#include<stdbool.h>
#include <limits.h>
#define V 5

void print(int tree[],int n,int adj[][V])
{
	int i;
	printf("Edge \tWeight\n");
	for (i = 1; i < V; i++)
	{
		printf("%d--%d\t%d\n",tree[i],i,adj[tree[i]][i]);
	}
}

 int minkey(int key[],bool mst[])
 {
 	int i;
 	int x=INT_MAX,y;
 	for(i=0;i<V;i++)
 	{
 		if(mst[i]==false&&x>key[i])
 		{
 			x=key[i];
 			y=i;
		 }
	 }
	 return y;
 }
 void create(int adj[][V])
 {
 	int i,tree[V];
 	int key[V];
 	bool mst[V];
 	for(i=0;i<V;i++)
 	{
 		mst[i]=false;
 		key[i]=INT_MAX;
	 }
	 //mst[0]=true;
	 key[0]=0;
	 tree[0]=-1;
	 for(i=0;i<V-1;i++)
	 {
	 	int u=minkey(key,mst);
	 	mst[u]=true;
	 	int j;
	 	for(j=0;j<V;j++)
	 	{
	 		if(adj[u][j]!=0&&mst[j]==false&&adj[u][j]<key[j])
	 		{
	 			tree[j]=u;
	 			key[j]=adj[u][j];
			 }
		 }
	 }
	 print(tree,V,adj);
 }

int main(void)
 {
 	int adj[V][V]={{0, 2, 0, 6, 0},
					{2, 0, 3, 8, 5},
					{0, 3, 0, 0, 7},
					{6, 8, 0, 0, 9},
					{0, 5, 7, 9, 0}};
 	//printf("Enter adjacency matrix\n");
 	int i,j;
 /*	for(i=0;i<V;i++)
 	{
 		for(j=0;j<V;j++)
 		{
 			scanf("%d",&adj[i][j]);
		 }
	 }*/
	 create(adj);
	 return 0;
 }
