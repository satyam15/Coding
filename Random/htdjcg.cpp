#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void) 
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int h,w;
        scanf("%d %d",&h,&w);
        ll arr[h][w];
        for(int i=0;i<h;i++)
        {
        	for(int j=0;j<w;j++)
        	scanf("%d",&arr[i][j]);
		}
		ll a=-1;
		for(int i=1;i<h;i++)
       {
           for(int j=0;j<w;j++)
           {
           		a=INT_MIN;
           		if(j==0)
           		{
           			a=max(arr[i-1][j],arr[i-1][j+1]);	
				}
				else if(j==w-1)
				{
					a=max(arr[i-1][j],arr[i-1][j-1]);
				}
				else
				{
					a=max(arr[i-1][j+1],max(arr[i-1][j],arr[i-1][j-1]));
				}
				arr[i][j]+=a;
		   }
		}
		   a=INT_MIN;
		   for(int i=0;i<w;i++)
		   {
		   	a=max(a,arr[h-1][i]);
		   }
		   printf("%lld\n",a);
		}
		return 0;
	}

