#include<stdio.h>
int main(void)
{
    int s,t,mgo=0,org=0;
    scanf("%d %d",&s,&t);
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    int m,n,i;
    scanf("%d %d",&m,&n);
    int ap[m],o[n];
    for(i=0;i<m;i++)
    { scanf("%d",&ap[i]);
      c=ap[i];
	  if(c>=s&&c<=t)
          mgo++;}
    for(i=0;i<n;i++)
    {  scanf("%d",&o[i]);
    d=o[i];
       if(d<=(-s)&&d>=(-t))
           org++;}
    printf("%d\n%d",mgo,org);
    return 0;
}
