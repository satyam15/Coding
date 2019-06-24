#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        int t,p,j,i;
 
    long int arr[100000][100000];
    cin>>t;
    int a,b,c;
    
    while(t--)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        if(a==1)
        {
           for(i=0;i<100000;i++)
           {
               if(arr[c][i]==0)
                   break;
           }
            arr[b][i]=b;
        }
        if(a==2)
        {
            int x,y;
            for(i=0;i<100000;i++)
           {
               if(arr[b][i]==0)
                   break;
           }
            for( j=0;j<100000;j++)
           {
               if(arr[c][j]==0)
                  break;
           }
            j--;
            i--;
            if(i>j)
            {
               for( p=0;p<j;p++)
                arr[b][++i]=arr[c][p];
            }
            else
            {
                for(p=0;p<i;p++)
                arr[c][++j]=arr[b][p];
            }
            
        }
        if(a==3)
        {
            cout<<arr[c][b]<<endl;
        }
    }
        
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

