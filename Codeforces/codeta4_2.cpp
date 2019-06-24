#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define mod 1000000007
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
int main(void)
{
  FIO
  int n,m,a,b;
  cin>>n>>m;
  vector<pair<int,int>> arr;
  for(int i=0;i<m;i++)
  {
    cin>>a>>b;
    arr.pb(mk(a,b));
  }
  for(int i=1;i<=2;i++)
  {
    int freq=0;
    if(i==1) a=arr[0].ff;
    else a=arr[0].ss;
    vector<int> v(n+1);
    for(auto j : arr)
    {
      if(a!=j.ff&&a!=j.ss)
      {
        v[j.ff]++;
        v[j.ss]++;
        freq++;
      }
    }
    if(*(max_element(all(v)))==freq)
    {
      cout<<"YES"<<endl;
      return 0;
    }

  }
  cout<<"NO"<<endl;
  return 0;
}