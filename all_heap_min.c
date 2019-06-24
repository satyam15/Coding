#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
typedef struct Ed
{
	int s;
	int d;
	int w;
}edge;
typedef struct subset 
{ 
    int parent; 
    int rank; 
}subset; 
int size,e;
edge arr[1000];
void heapify(int i)
{
	int l=2*i;
	int r=2*i+1;
	int max=i;
	if(l<=size && arr[max].w>arr[l].w)
		max=l;
	if(r<=size && arr[max].w>arr[r].w)
		max=r;
	if(max != i)
	{
		int temp=arr[max].w;
		arr[max].w=arr[i].w;
		arr[i].w=temp;
		heapify(max);
	}
}

void Build()
{
	for(int i=size/2;i>=1;i--)
	{
		heapify(i);
	}
}


void Decrease_key(int i,int val)
{
	arr[i].w=val;
	while(i > 1 && arr[i/2].w < val)
	{
		int temp=arr[i/2].w;
		arr[i/2].w=arr[i].w;
		arr[i].w=temp;
		i/=2;
	}
}

int extract_min()
{
	int temp=arr[1].w;
	arr[1].w=arr[size].w;
	size--;
	heapify(1);
	return temp;
}
void insert(int val)
{
	arr[++size].w=-1;
	Decrease_key(size,val);
}
int main(int argc, char const *argv[])
{
	printf("enter vertex");
	scanf("%d",&e);
	printf("Enter edge:\n");
	scanf("%d",&size);
	int temp=size;
	for(int i=1;i<=size;i++)
		scanf("%d %d %d",&arr[i].w,&arr[i].s,&arr[i].d);
	Build();
	for(int i=1;i<=size;i++) printf("%d ",arr[i].w);
		printf("\n");
	subset sb[e+1];
	for(int i=1;i<=e;i++)
		{
			sb[i].parent=i;
			sb[i].rank=0;
		}
	for(int i=1;i<=temp;i++)
	{
		printf("%d ",extract_min());
	}
	return 0;
}