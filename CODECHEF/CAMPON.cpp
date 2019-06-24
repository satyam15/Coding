#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define ppi pair<int,int>
#define mod 1000000007
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
//bool cmp(const ppi &l,const ppi &r) {return l.first < r.first;}
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		int d,a,b,c=0;
		cin>>d;
		int arr[32]={0};
		for(int i=0;i<d;i++)
		{
			cin>>a>>b;
			arr[a]=b;
		}
		for(int i=1;i<=31;i++) arr[i]+=arr[i-1];
		int q;
		cin>>q;
		for(int i=0;i<q;i++)
		{
			cin>>a>>b;
			if(arr[a]>=b) cout<<"Go Camp"<<endl;
			else cout<<"Go Sleep"<<endl;
		}
	}
	return 0;
}