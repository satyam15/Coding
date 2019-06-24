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
	int n,x;
	cin>>n;
	
	
	int arr[3]={0};
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr[x]++;
	}
	if(arr[1]==0)
	{
		for(int i=0;i<n;i++) cout<<2<<" ";
		cout<<endl;
	}
	else if(arr[2]==0)
	{
	for(int i=0;i<n;i++) cout<<1<<" ";
		cout<<endl;	
	}
	else
	{
		cout<<"2 1 ";
		arr[2]--;
		arr[1]--;
		while(arr[2]>0)
		{
			cout<<2<<" ";
			arr[2]--;
		}
		while(arr[1]>0)
		{
			cout<<1<<" ";
			arr[1]--;
		}
	}
	return 0;
}