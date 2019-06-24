#include<stdio.h>
int main(void)
{
    int n,k,i,l,m,a[6]={0,0,0,0,0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        a[k]++;
    }
    l=a[0];
    m=1;
    for(i=1;i<6;i++)
    {
        if(l<a[i])
        {
            l=a[i];
            m=i;
        }
    }
    printf("%d",m);
    return 0;
}
