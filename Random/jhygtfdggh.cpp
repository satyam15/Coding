#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
 {
   int t;
    cin>>t;
     while(t--)
      {
         long long  int n;
        cin>>n;
        long long int arr[n+10];
        long long int dp[n+10];
         for(int i=0;i<n;i++)
          {
             scanf("%d",&arr[i]);
          }
           dp[n]=0;
           dp[n+1]=0;
           dp[n+2]=0;
           dp[n+3]=0;
        dp[n-1]=arr[n-1];
        dp[n-2]=arr[n-2]+dp[n-1];
        dp[n-3]=arr[n-3]+dp[n-2];
         
         
            for(int i=n-4;i>=0;i--)
             {
               dp[i]=max(arr[i]+dp[i+2],max(arr[i]+arr[i+1]+dp[i+4],arr[i]+arr[i+1]+arr[i+2]+dp[i+6]));
             }
              cout<<dp[0]<<endl;
          
          
      }
 }
