#include<stdio.h>
int main(void)
{
	int N,Q,i,j,x,y,ans=0,L,R,max,count;
	long int a[100000];
	scanf("%d%d",&N,&Q);
	for(i=0;i<N;i++)
		scanf("%ld",&a[i]);
	while(Q--)
	{
		count=1;
		scanf("%d%d",&x,&y);
		L=(x+ans)%N;
		R=(y+ans)%N;
		if(L>R)
		{
			j=L;
			L=R;
			R=j;
		}
		max=a[0];
		if(N==1)
		{
			if(a[0]>=L&&a[0]<=R)
			{
				count=1;
				ans=count;
		printf("%d\n",count);
		goto last;
			}
			else
			{
				count=0;
				ans=count;
		printf("%d\n",count);
		goto last;
			}
		}
		if(max==R)
		{
			count=1;
			ans=count;
		printf("%d\n",count);
		goto last;
		
		}
		if(max>R)
		{
			count=0;
			ans=count;
		    printf("%d",count);
		    goto last;
		}
		for(i=0;i<N-1;i++)
		{
			if(max>=L&&max<R)
			if(max<a[i+1])
			{
				max=a[i+1];
				if(max>=L&&max<R)
				count++;
				if(max==R)
				{
					count++;
					break;
				}
				if(max>R)
				break;
			}
		}		
		printf("%d\n",count);
		last:
			if(true);
		
	}
	return 0;
}
