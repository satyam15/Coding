#include<stdio.h>
#include<stdlib.h>
typedef struct Bucket{
	int count;
	int *val;
}buc;

int conp(const void *p,const void *q)
{
	int x=*((int*)p);
	int y=*((int*)q);
	if(x==y) return 0;

	if(x<y) return -1;
	else return 1;
}

int main(void)
{
int n;
scanf("%d",&n);
int arr[n];
buc sh[3];
for(int i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
for(int i=0;i<3;i++)
{
	sh[i].count=0;
	sh[i].val=(int*)malloc(sizeof(int) * n);
}
for(int i=0;i<n;i++)
{
	if(arr[i]<0) {sh[0].val[sh[0].count++]=arr[i]; 
	else if(arr[i]<10) {sh[1].val[sh[1].count++]=arr[i]; }
	else if(arr[i]>10) {sh[2].val[sh[2].count++]=arr[i]; }
}
printf("\n");
for(int  i=0;i<3;i++)
{
qsort(sh[i].val,sh[i].count,sizeof(int),&conp);
for(int j=0;j<sh[i].count;j++)
	printf("%d ",sh[i].val[j]);
}
return 0;
}