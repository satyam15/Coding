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
		int n,k,ans=0;
		cin>>n>>k;
		k-=1;
		int temp=n;
		int arr[10]={0};
		while(temp)
		{
			arr[temp%10]+=2;
			temp/=10;
		}
		k-=1;
		temp=n;

		while(k--){	temp*=(k+1);
			while(temp)
			{
				arr[temp%10]+=k;
				temp/=10;
			}
		
		for(int i=0;i<=9;i++) cout<<arr[i]<<" ";
		int count=0,nz;
		for(int i=0;i<=9;i++)
		{
			if(arr[i] !=0) count++;
		}
		nz=count;
		ans=(count)*(count-1)*(count-2)/6;
		count=0;
		for(int i=0;i<=9;i++)
		{
			if(arr[i]>=2) count++;
		}
		ans+=3*(nz-1)*count;
		count=0;
		for(int i=0;i<=9;i++)
		{
			if(arr[i]>=3) count++;
		}
		ans+=count;
		n=ans;

	}
		cout<<ans<<endl;
	}
}