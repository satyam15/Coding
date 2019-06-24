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
	int n,m,r;
	cin>>n>>m>>r;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++) cin>>arr1[i];
	for(int i=0;i<m;i++) cin>>arr2[i];
	auto it1=min_element(arr1,arr1+n);
	auto it2=max_element(arr2,arr2+m);
	if((*it1)>(*it2)) cout<<r<<endl;
	else
	{
		int kh=r/(*it1);
		int ans=r-(kh*(*it1));
		kh*=(*it2);
		cout<<ans+kh<<endl;
	}
	return 0;
}