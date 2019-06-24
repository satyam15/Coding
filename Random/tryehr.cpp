#include<stdio.h>
int main(void)
{
    int n,i,j,r=0;
    scanf("%d",&n);
    int score[n];
    for(i=0;i<n;i++)
        scanf("%d",(score+i));
    int m;
    scanf("%d",&m);
    int alice[m];
    for(i=0;i<m;i++)
        scanf("%d",alice+i);
    for(i=0;i<m;i++)
    {
        r=0;
       for(j=0;j<n;j++) 
       {
           if(alice[i]<score[j])
               r++;
           else  if(alice[i]>=score[j])
               break;
       }
      printf("%d ",r);
    }
    return 0;
}
