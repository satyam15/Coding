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
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,d,tn,fl=0;
		cin>>n;
		int arr[n+1];
		for(int i=1;i<=n;i++) cin>>arr[i];
		//skip first
		d=arr[3]-arr[2];
		a=arr[2]-d;
		if((a+3*d)==arr[4])  fl=1;
		//skip 2
		if(fl==0)
		{
			d=(arr[3]-arr[1])/2;
			a=arr[1];
			if((a+3*d)==arr[4]) fl=1;
			
		}
		//skip 3
		if(fl==0)
		{
			d=(arr[2]-arr[1]);
			a=arr[1];
			if((a+3*d)==arr[4]) fl=1;
			
		}
		//skip 4
		if(fl==0)
		{
			d=(arr[2]-arr[1]);
			a=arr[1];
			if(a+2*d==arr[3]) fl=1;
			
		}
		for(int i=0;i<n;i++) cout<<a+(i)*d<<" ";
		cout<<endl;
	}
	return 0;
}