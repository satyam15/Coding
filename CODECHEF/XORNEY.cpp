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
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<pair <ll,ll>, null_type,less<pair <ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
int main(void)
{
    int t;
    cin>>t;
	while(t--)
	{
		ll l,r,n;
		cin>>l>>r;
		n = (r-l)+1;
		
		if(l%2==0){
			if((n/2)%2==0)
			cout<<"Even\n";
			else
			cout<<"Odd\n";
		}else{
			if((((n-1)/2)+1)%2==0){
				cout<<"Even\n";
			}else{
				cout<<"Odd\n";
			}
		}
	}
	return 0;
}	
		
		