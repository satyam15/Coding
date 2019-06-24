#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp> 
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
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main(void)
{
	FIO
	int n;
	cin>>n;
	int hcf[n+1];
	int arr[n+1];
	int x;
	cin>>x;
		hcf[1]=x;
	for(int i=2;i<=n;i++)
	{
		cin>>x;
		hcf[i]=gcd(hcf[i-1],x);
		arr[i]=x;
	}

}