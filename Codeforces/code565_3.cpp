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
	ll n,a;
    cin>>n;
    int arr[100]={0},arr1[6]={0};
    arr[4]=0;arr[8]=1;arr[15]=2;arr[16]=3;arr[23]=4;arr[42]=5;
    for(int i=0;i<n;i++)
    {
      cin>>a;
      a=arr[a];
      if(a==0)arr1[a]++;
      else if(arr1[a-1]>0){arr1[a-1]--;arr1[a]++;}

    }
    cout<<n-(arr1[5]*6)<<endl;
    return 0;
}