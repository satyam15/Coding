#include<stdio.h> 
int main() 
{ 
int n,i,j,k; 
printf("enter a odd number\n"); 
scanf("%d",&n); 
int magic[30][30]; 
for(i=0;i<30;i++) 
{ 
for(j=0;j<30;j++) 
{ 
 magic[i][j]=0; 
} 
} 
i=n/2; 
j=n-1; 
for(k=1;k<=n*n;) 
{ 
if(i==-1&&j==n) 
{ 
j=n-2; 
i=0; 
} 
else 
{ 
if(j==n) 
j=0; 
if(i<0) 
i=n-1; 
} 
if(magic[i][j]) 
{ 
j=j-2; 
i++; 
continue; 
} 

else 
magic[i][j]=k++; 
j++;i--; 
} 

for(i=0;i<n;i++) 
{ 
for(j=0;j<n;j++) 
{ 
 printf("%d ",magic[i][j]); 
} 
printf("\n"); 
} 
return 0; 
} 

