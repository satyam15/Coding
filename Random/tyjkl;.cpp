#include<stdio.h>
#include<string.h>

int n;

int f( int steps ,int x,int y)
{
	if(steps<1)
		return 0;
	if(x<0 || y<0 || x>n-1 || y>n-1)
		return 1;
	int p=steps-1;
	return f(p,x+2,y+1)+ f(p,x+2,y-1)+ f(p,x+1,y+2)+ f(p,x+1,y-2)+ f(p,x-2,y+1)+ f(p,x-2,y-1)+ f(p,x-1,y+2)+ f(p,x-1,y-2);
}


int main(void)
{
	int k,x,y;
	printf("Enter n and k\n");
	scanf("%d%d%d%d",&n,&k,&x,&y);
	int i,j;
	int arr=f(k,x,y);
	
	printf("\n%d",arr);
	return 0;
}
