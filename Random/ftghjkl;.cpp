#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,maximum=0;
    long int M=1,N=1;
    int a1[26],b1[26];
    cin>>n;
    memset(a1,0,sizeof(a1));
    memset(b1,0,sizeof(b1));
    string a,b;
    cin>>a;
    cin>>b;
    for(int i=0;i<a.size();i++)
    {
        a1[a[i]-'a']++;
    }
        for(int i=0;i<b.size();i++)
    {
        b1[b[i]-'a']++;
    }
    int a1_max,b1_max;
    for(int i=0;i<26;i++)
    {
        if((a1[i]!=0&&b1[i]==0)||(a1[i]==0&&b1[i]!=0))
            maximum++;
            
    }
    maximum/=2;
    sort(a1,a1+26);
    sort(b1,b1+26);
    
    for(int i=0;i<26;i++)
    {
     if(a1[i]!=0)
     {
         a1_max=i;
         break;
     }
    }
    for(int i=0;i<26;i++)
    {
     if(b1[i]!=0)
     {
         b1_max=i;
         break;
     }
    }
    M=pow(26-a1_max,a1[a1_max]);
        M%=1000000007;
    
     N=pow(26-b1_max,b1[b1_max]);
        N%=1000000007;
    for(int i=a1_max+1;i<26;i++)
    {
        M*=pow(26-i,a1[i]-a1[i-1]);
        M%=1000000007;
     
    }
    for(int i=b1_max+1;i<26;i++)
    {
        N*=pow(26-i,b1[i]-b1[i-1]);
        N%=1000000007;

    }
    int s=1;
    //maximum=a1[25]>b1[25]?a1[25]:b1[25];
    for(int i=maximum;i>=1;i--)
    {
       s*=2;
        s%=1000000007;
    }
    int x=(N%1000000007*M%100000007*s%100000007)%1000000007;
    cout<<x;
    return 0;
}







