#include <bits/stdc++.h>

using namespace std;
long long  HCF[100005];
long long  p=0;
long long  ans[100009];
long long  value;
long long  gcd(long long  a, long long  b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void DFS(vector<long long >g[],long long  n,long long  v[],long long  m[],long long  src,long long  par)
{
    long long  f=0;
    value=gcd(v[src],value);
   // cout<<par<<" "<<src<<" ";
    for(auto i:g[src])
    {
        if(i==par)
            continue;
            //f=1;
        DFS(g,n,v,m,i,src);
        f=1;
    }
    if(f==0)
    {
         
         if(m[src]%value==0)
                    ans[p++]=((m[src]*value)+(((m[src]/value)-1)*value))%m[src];
                 else
                 {
                    ans[p++]=((m[src]*value)+(((m[src]/value))*value))%m[src];
             
            }
               value=v[0];
         //src=0;
    }
}
int  main()
{
    long long  t;
    cin>>t;
     long long  n;
    while(t--)
    {
        cin>>n;
          vector<long long >g[100009];
        long long  x,y;
         long long  i;
         for(i=0;i<n-1;i++)
         {
             cin>>x>>y;
             x--;
             y--;
             g[x].push_back(y);
             g[y].push_back(x);
         }
         for(i=0;i<n-1;i++)
            sort(g[i].begin(),g[i].end());
         long long  v[n+100],m[n+100];
         for(i=0;i<n;i++)
            cin>>v[i];
         for(i=0;i<n;i++)
            cin>>m[i];
            value=v[0];
         DFS(g,n,v,m,0,-1);
         //cout<<"ddwaferfwaf";
         /*for(i=0;i<n;i++)
         {
             if(HCF[i]!=0)
             {
                 /*if(m[i]%HCF[i]==0)
                    ans[p++]=((m[i]*HCF[i])+(((m[i]/HCF[i])-1)*HCF[i]))%m[i];
                 else
                    ans[p++]=((m[i]*HCF[i])+(((m[i]/HCF[i]))*HCF[i]))%m[i];
                    ans[p++]=m[i]-gcd(m[i],HCF[i]);
             }
         }*/
         for(i=0;i<p;i++)
         {
             cout<<ans[i]<<" ";
         }
         printf("\n");
         p=0;
    }

}