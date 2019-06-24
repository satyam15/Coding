#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int x;
	int i,j,s;
}node;
int size;
node* hp[1000];
void heapify(int i)
{
	node *temp;
	int l=2*i;
	int m=i;
	int r=2*i+1;
	if(l<=size && hp[m]->x<hp[l]->x)
		m=l;
	if(r<=size && hp[m]->x<hp[r]->x)
		m=r;
	if(m!=i)
	{
		temp=hp[i];
		hp[i]=hp[m];
		hp[m]=temp;
		heapify(m);
	}
}
void insert(int x,int i,int j)
{
	hp[++size]->x=x;
	hp[size]->i=i;
	hp[size]->j=j;
	int temp=size;
	node *tp;
	while(temp/2>=1 && hp[temp]->x<hp[temp/2]->x)
	{
		tp=hp[temp];
		hp[temp]=hp[temp/2];
		hp[temp/2]=tp;
		temp/=2;
	}
}
node* getmax()
{
node *temp=hp[1];
hp[1]=hp[size];
size--;
heapify(1);
}
void build()
{
	for(int i=size/2;i>=1;i--)
	{
		heapify(i);
	}
}
int main(void)
{
printf("Enter n,k:")
int n,k;
scanf("%d %d",&n,&k);
int arr[k+1][n+1];
int p=0;
size=k;
int count=0;
for(int temp=1;temp<=k-1;temp++)
for(int i=1;i<=n/k;i++)
{
	count++;
	scanf("%d",&p);
	arr[temp][i]=p;
}
for(int i=count;i<=n;i++) 
	{	scanf("%d",&p);
	arr[k][i]=p;}
	for(int i=1;i<=k;i++)
	{
		hp[i]->x=arr[i][0];
		hp[i]->s=sizeof(arr[i])/sizeof(int)-1;
		hp[i]->i=i;
		hp[i]->j=1;
		printf("%d ",arr[i][0]);
	}
	build();
	p=-1;
	int op[n];
	node *temp;
	for(int i=1;i<=n-k;i++)
	{
		temp=getmax();
		if(temp->j<temp->s)
		insert(arr[temp->i][temp->j],temp->i,temp->j+1);
		op[++p]=temp->x;
	}
	for(int i=0;i<n;i++) printf("%d ",op[i]);
}