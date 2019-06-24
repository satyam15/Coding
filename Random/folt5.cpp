  #include<stdio.h>
int main(void)
{
	int n,k,x,y;
	scanf("%d%d%d%d",&n,&k,&x,&y);
	int prob,a,b,min;
	a=n-x;
	b=n-y;
	
	if(a==k)//+ive x axis
	prob++;
	
	if(b==k)//-ive y axis
	prob++;
	
	if(x-1==k)//+ive y axis
	prob++;
	
	if(y-1==k)//-ive x axis
	prob++;

	min=y-1<a?y-1:a;
	if(min==k)//1 quad
	prob++;
	
	min=y<x?y-1:x-1;
	if(min==k)//2 quad
	prob++;
	
	min=x-1<b?x-1:b;
	if(min==k)//3 quad
	prob++;
	
	min=a<=b?a:b;
	if(min==k)//4 quad
	prob++;
	
	printf("%f",(float)prob/8.0);
	return 0;
	
	
}
