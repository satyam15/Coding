#include <stdio.h>
#include  <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,k,l;
    scanf("%d", &n);
    
    for(j=n;j>=1;j--)
    {
        for(i=n;i>=j;i--)
            printf("%d ",i);
        for(k=i;k>=1;k--)
        {
            printf("%d ",i+1);
        }
        for(i=1;i<j;i++)
            printf("%d ",j);
        for(i=j+1;i<=n;i++)
            printf("%d ",i);
        printf("\n");
    }
    for(j=2;j<=n;j++)
    {
        for(i=n;i>=j;i--)
            printf("%d ",i);
        for(k=1;k<=2*i;k++)
            printf("%d ",i+1);
        for(k=i+2;k<=n;k++)
            printf("%d ",k);
            printf("\n");
    }

    return 0;
}
