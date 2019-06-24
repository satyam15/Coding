#include<bits/stdc++.h>
using namespace std;
int main(void)
{
int n;
long long int m;
long long int a[n],b[n];
int i;
cin>>n>>m;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
cin>>b[i];
cout<<b[n-1]*(a[n-1]-m-1);	
}
