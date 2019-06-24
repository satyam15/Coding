#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int n;
scanf("%d",&n);
int arr[n];
int c[n+1];
for(int i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
int k=50;
int f[51];
for(int i=0;i<51;i++)
f[i]=0;

for(int i=0;i<n;i++) f[arr[i]]++;
	for(int i=1;i<=50;i++) f[i]+=f[i-1];
for(int i=n-1;i>=0;i--)
{
	c[f[arr[i]]-1]=arr[i];
	printf("%d ",arr[i]);
	f[arr[i]]--;
}
for(int i=0;i<n;i++) printf("%d ",c[i]);
}