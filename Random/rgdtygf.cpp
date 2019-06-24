#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,w;
        scanf("%d %d",&h,&w);
        ll arr[h][w];
       
        
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                scanf("%lld",&arr[i][j]);
            }
        }
       
       for(int i=1;i<h;i++)
       {
           for(int j=0;j<w;j++)
           {
               ll a=INT_MIN;

               if(j==0)
               {
                  a=max(arr[i-1][j],arr[i-1][j+1]); 
               }
               else
                if(j==w-1)
               {
                   a=max(arr[i-1][j],arr[i-1][j-1]);
               }
               else
               {
                   a=max(arr[i-1][j+1],max(arr[i-1][j],arr[i-1][j-1]));
               }
               arr[i][j]=a+arr[i][j];
           }
       }
       ll a=INT_MIN;
       for(int j=0;j<w;j++)
       {
           a=max(a,arr[h-1][j]);
       }
        
    
        cout<<a<<endl;
    }
 
 return 0;
}
