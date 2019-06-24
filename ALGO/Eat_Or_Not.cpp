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
int flag=0;
void fun(int vi,int ci,int pi,int fi,int arr[][4],int n,int x)
{
	if(vi==0&&ci==0&&pi==0&&fi==0) 
	{
		flag=1;
		return;
	}
	if(x>=n)
	{
		return;
	}
	else if(vi<0||ci<0||pi<0||fi<0)
	{
		return;
	}
	fun(vi-arr[x][0],ci-arr[x][1],pi-arr[x][2],fi-arr[x][3],arr,n,x+1);
	fun(vi,ci,pi,fi,arr,n,x+1);
}
int main(void)
{
	FIO
	int n,vi,ci,pi,fi;
	flag=0;
	cin>>vi>>ci>>pi>>fi>>n;
	int arr[n][4];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3];
	}
	fun(vi,ci,pi,fi,arr,n,0);
	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}