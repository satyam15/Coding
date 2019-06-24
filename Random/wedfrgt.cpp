#include<stdio.h>
#include<stdlib.h>
typedef struct Stack {
	int arr[100000];
	int top;
}stack;
void push(int x,stack *s)
{
	s->arr[++(s->top)]=x;
}
int main(void)
{
	stack *s;
	s=(stack *)malloc(sizeof(stack));
	s->top=-1;
	int N,Q,i,j,x,y,ans=0,L,R,max,count,c;
	long int a[100000];
	scanf("%d%d",&N,&Q);
	s->top=-1;
	for(i=0;i<N;i++)
		scanf("%ld",&a[i]);
		push(a[0],s);
		max=a[0];
		for(i=1;i<N;i++)
		{
			if(max<a[i])
			{
				push(a[i],s);
				max=a[i];
			}
		}
	while(Q--)
	{
	
		count=0;
		scanf("%d%d",&x,&y);
		L=(x+ans)%N;
		R=(y+ans)%N;
		if(L>R)
		{
			j=L;
			L=R;
			R=j;
		}
		
		int i=s->top;
		for(j=0;j<=i;j++)
		{
		    c=s->arr[j];
		    if(c>=L&&c<=R)
		    count++;
		}
		ans=count;
		ans++;
		printf("%d\n",count+1);
	}
		return 0;
}
