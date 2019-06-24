#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


int main() {
    int t;
    double pi=atan(1)*4;
    cin>>t;
    int n,i;
    int x,y,a,b;
    double arr[100000];
    while(t--)
    {
       cin>>n;
        cin>>x;
        cin>>y;
    for(i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        a-=x;
        b-=y;
        if(a==0)
        {
            if(b>0)
                arr[i]=pi/2.0;
            else arr[i]=3*(pi/2.0);
        }
        else
            if(b==0)
        {
            if(a>0)
                arr[i]=0;
            else arr[i]=pi;
        }
        else
        {
            if(b>0&&a<0)
            arr[i]=pi-atan((double)b/a);
            else
                if(b<0&&a>0)
                arr[i]=2*pi-atan((double)b/a);
            else
                if(b<0&&a<0)
                arr[i]==pi+atan((double)b/a);
            else
                arr[i]=atan((double)b/a);
        }
    }
    cout.precision(12);
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
        
        double ans =arr[n-1]-arr[0];
        ans=ans*180/pi;
        
        cout<<ans<<endl;
        
    }
    
    return 0;
}
