#include<stdio.h>
#include<stdlib.h>
void dfs(int adj[][3],int i,int v[])
{
	int j;
	v[i]=1;
	printf("%d ",i);
	for(j=1;j<3;j++)
	{
		if(adj[i][j]==1&&v[j]==0)
		{
			dfs(adj,j,v);
		}
		
	}
}
int main(void)
{
	int i,j,v[3];
	int adj[3][3];
	for(i=0;i<3;i++)
	{
		v[i]=0;
	}
	printf("Enter adjency matrix for graph");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		scanf("%d",&adj[i][j]);
	}
	dfs(adj,0,v);
	return 0;
}
