#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int size,arr[1000];
void heapify(int i)
{
	int l=2*i;
	int r=2*i+1;
	int max=i;
	if(l<=size && arr[max]<arr[l])
		max=l;
	if(r<=size && arr[max]<arr[r])
		max=r;
	if(max != i)
	{
		swap(&arr[i],&arr[max]);
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
void Descease_key(int i,int v)
{
	arr[i]=v;
	heapify(i);
}

void increase_key(int i,int val)
{
	arr[i]=val;
	while(i > 1 && arr[i/2] > val)
	{
		swap(&arr[i],&arr[i/2]);
		i/=2;
	}
}

void change_val(int i,int val)
{
	if(arr[i]<val) Descease_key(i,val);
	else increase_key(i,val);
}

int extract_max()
{
	int temp=arr[1];
	arr[1]=arr[size];
	size--;
	heapify(1);
	return temp;
}

void insert(int val)
{
	arr[++size]=-1;
	change_val(size,val);
}

int main(void)
{
	printf("Enter size of array\n");
	scanf("%d",&size);
	int n,val;
	for(int i=1;i<=size;i++) scanf("%d",&arr[i]);
	Build();
	printf("After build heap\n");
	for(int i=1;i<=size;i++) printf("%d ",arr[i]);
	printf("max ele:%d\n",extract_max());
	printf("Enter element to insert:\n");
	scanf("%d",&n);
	insert(n);
	printf("After insert\n");
	for(int i=1;i<=size;i++) printf("%d ",arr[i]);
	printf("Enter increase_key and val\n");
	scanf("%d %d",&n,&val);
	change_val(n,val);
	printf("After increase_key\n");
	for(int i=1;i<=size;i++) printf("%d ",arr[i]);
	printf("Enter decrease _key and val\n");
	scanf("%d %d",&n,&val);
	change_val(n,val);
	printf("After decrease_key\n");
	for(int i=1;i<=size;i++) printf("%d ",arr[i]);
	return 0;

}