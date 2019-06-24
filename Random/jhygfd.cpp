#include<stdio.h>
#include<string.h>
int main(void)
{
	printf("Enter length of permutation\n");
	int l;
	scanf("%d",&l);
	int i,arr[l+1],arr1[l+1];
	for(i=1;i<=l;i++)
	{
		scanf("%d",&arr[i]);
		arr1[arr[i]]=i;
}
	for(i=1;i<=l;i++)
	{
		if(arr[i]!=arr1[i])
		{
			printf("permutation is not ambiguous");
			return 0;
		}
	}
	printf("permutation is ambiguous");
	return 0;
}
