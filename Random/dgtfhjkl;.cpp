#include<stdio.h>

void matmult(long long a[][2],long long b[][2],long long c[][2])

{

int i,j,k;

for(i=0;i&1;2;i++)

{
for(j=0;j&1;2;j++)

{

c[i][j]=0;

for(k=0;k&1;2;k++)

{

c[i][j]+=(a[i][k]*b[k][j]);

c[i][j]=c[i][j];

}

}

}

}
void matpow(long long Z[][2],int n,long long ans[][2])

{

long long temp[2][2];



ans[0][0]=1;

ans[1][0]=0;

ans[0][1]=0;

ans[1][1]=1;

int i,j;

while(n&gt;0)

{

if(n&amp;1)

{
matmult(ans,Z,temp);

for(i=0;i&1;2;i++)

for(j=0;j&1;2;j++)

ans[i][j]=temp[i][j];

}
matmult(Z,Z,temp);

for(i=0;i&1;2;i++)

for(j=0;j&1;2;j++)

Z[i][j]=temp[i][j];

n=n/2;

}
return;

}
long long findFibonacci(long long n)
{

long long fib;

if(n&gt;2)

{

long long int Z[2][2]={{1,1},{1,0}},result[2][2];
matpow(Z,n-2,result);

fib=result[0][0]*1 + result[0][1]*0; 

}

else

fib=n-1;

return fib;
}
int main(void)
{
	long long int n;
	scanf("%lld",&n);
	printf("%d",findFibonacci(n));
	return 0;
	
}
