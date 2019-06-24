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
	ll n,k;
	cin>>n>>k;
	ll arr[n+1],sum,dis1=0,dis2=0,dis3=0;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	ll cap,avg3,avg1=sum/n;
	ll avg2=avg1;
	avg3=avg1;
	int id1=0,id2=0,id3=0;
	int f1=0,f2=0,f3=0;
	cout<<avg1<<" "<<avg2<<endl;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==avg3&&f3==0)
		{
			f3=1;
			id3=i;
		}
		if(arr[i]<avg1)
		{
			if(f1==0)
			{ id1=i; f1=1;}
			else
			{
				if(arr[i]>arr[id1])
					id1=i;
			}
		}
		if(arr[i]>avg2)
		{
			if(f2==0)
			{ id2=i; f2=1;}
			else
			{
				if(arr[i]<arr[id2])
					id2=i;
			}
		}
	}
	cout<<id1<<" "<<id2<<" "<<id3<<endl;
	for(int i=1;i<=n;i++)
	{
		dis1+=abs(arr[i]-arr[id1]);
		dis2+=abs(arr[i]-arr[id2]);
		dis3+=abs(arr[i]-arr[id3]);
	}
	ll mn=min({abs(dis1-k),abs(dis2-k),abs(dis3-k)});
	if(dis1==dis2==dis3)
		cout<<min({id3,id1,id2})<<" "<<abs(dis2-k)<<endl;
	else if(mn==dis1&&dis1==dis2)
	{
		cout<<min(id1,id2)<<" "<<abs(dis2-k)<<endl;
	}
	else if(mn==dis2&&dis2==dis3)
	{
		cout<<min(id3,id2)<<" "<<abs(dis3-k)<<endl;
	}
	else if(mn==dis1&&dis2==dis3)
	{
		cout<<min(id3,id1)<<" "<<abs(dis3-k)<<endl;
	}
	else
	{
		if(mn==dis1) cout<<id1<<" "<<abs(dis1-k)<<endl;
		else if(mn==dis2) cout<<id2<<" "<<abs(dis2-k)<<endl;
		else if(mn==dis3) cout<<id3<<" "<<abs(dis3-k)<<endl;
	}
	return 0;
}