#include<stdio.h>
#include<stdlib.h>
int n=7;
int visited[7];
struct Queue
{
	int arr[20];
	int front,rear;
};
typedef Queue que;
void enqueue(que *q,int x)
{
	if(q->rear==19)
	return;
	q->arr[++q->rear]=x;
}
int dequeue(que *q)
{
	if(q->front==q->rear+1)
	return -1;
	else return q->arr[q->front++];
}

int isempty(que *q)
{
	return (q->front==q->rear+1);
}
void bfs(int x,que *q,int graph[][7])
{
	
	int v,i;
	if(!isempty(q))
	{
		v=dequeue(q);
		if(visited[i]==0)
		{
		printf("%d ",v);
		visited[i]=1;
		}
		for(i=0;i<n;i++)
		{
			if(graph[v][i]!=0)
			{
				enqueue(q,i);
				bfs(i,q,graph);
			}
		}
	}
	

}
int main(void)
{
	int graph[7][7]= {
		{0, 1}, {0, 2}, {0, 3}, {0, 4}, {1, 5}, {2, 5},
		{3, 6}, {4, 6}, {5, 7}, {6, 7}};
		
	
}
