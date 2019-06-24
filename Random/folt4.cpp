#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,k;
	printf("Enter n and k\n");
	scanf("%d%d",&n,&k);
	int i,j;
	int arr[n+1];
	for(i=1;i<=n;i++)
	arr[i]=0;
	arr[0]=1;
	for(i=1;i<=k;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(j>=i)
			{
				arr[j]+=arr[j-i];
			}
		}
	}
	printf("\n%d",arr[n]);
	return 0;
}
