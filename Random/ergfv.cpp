#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
void calculate_the_maximum(int,int);

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

void calculate_the_maximum(int n, int k) {
  int i,j,kp,l,m;
    kp=1&2;
    l=1|2;
    m=1^2;
    for(i=1;i<n;i++){
    for(j=i+1;j<=n;j++)
    {if((kp<i&j)&&(i&j<k))
        kp=i&j;
     if((l<i|j)&&(i|j<k))
         l=i|j;
     if((m<i^j)&&(i^j<k))
         m=i^j;
        
    }
}
        printf("%d\n%d\n%d",kp,l,m);   
}


