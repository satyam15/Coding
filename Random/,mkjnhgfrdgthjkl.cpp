#include<bits/stdc++.h>
using namespace std;
map<string,long long>m;
map<string,long long>::iterator x;
int main(void)
{
int t;
cin>>t;

while(t--)
{
string s;
m.clear();
long long  i,n;
cin>>n;
for(i=0;i<n;i++)
{
cin>>s;
m[s]++;
}
for(x=m.begin();x!=m.end();x++)
{
if(x->second>1)
{
cout<<x->first<<endl;
break;
}
}
}
return 0;
}
