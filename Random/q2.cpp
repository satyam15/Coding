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
    long long int n,i;
    long long int x,y,a,b; 
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
            if(b>0&&a<0){
                a*=-1;
            arr[i]=pi-atan((double)b/a);}
            else
                if(b<0&&a>0){
                    b*=-1;
                arr[i]=2*pi-atan((double)b/a);}
            else
                if(b<0&&a<0){
                    a*=-1;
                    b*=-1;
                     arr[i]==pi+atan((double)b/a);
                }
            else if(a==0&&b==0)
            {
                arr[i]=0;
            }
               
            else
                arr[i]=atan((double)b/a);
        }
    }
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
        double dif=arr[1]-arr[0];
        sort(arr,arr+n);
        for(i=1;i<n-1;i++)
        {
         if(dif<arr[i+1]-arr[i])
             dif=arr[i+1]-arr[i];
        }
        if(2*pi-arr[n-1]-arr[0]>dif)
            dif=2*pi-arr[n-1]-arr[0];
            cout.precision(12);
            if(dif==0)
            {
                cout<<0<<endl;
            }
            else {
        double ans =2*pi-dif;
        ans=ans*180/pi;
       
        cout<<ans<<endl;}}
        
    }
    
    return 0;
}