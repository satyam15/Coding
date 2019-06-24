#include<stdio.h>
#include<math.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	long long int x1,x2,x3,y1,y2,y3,a1,a2,b1,b2,c1,c2,ans,x,y,z;
	while(t--)
	{
	scanf("%lld%lld%lld%lld%lld%lld",&x1,&y1,&x2,&y2,&x3,&y3);
	a1=abs(x1-x2)-1;
	a2=abs(y1-y2)-1;
	x=(a1>a2)?a1:a2;
	b1=abs(x2-x3)-1;
    b2=abs(y2-y3)-1;
    y=(b1>b2)?b1:b2;
	c1=abs(x1-x3)-1;
	c2=abs(y1-y3)-1;
	z=(c1>c2)?c1:c2;
	ans=((x%1000000009)*(y%1000000009)*(z%1000000009))%1000000009+1;
	printf("%lld\n",ans);
    }
    return 0;
}
