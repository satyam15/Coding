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
	int t,x;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[3]={0};
		for(int i=0;i<n;i++)
		{
			cin>>x;
			arr[x%3]++;
		}
		int mn=min(arr[1],arr[2]);
		int mx=max(arr[1],arr[2]);
		cout<<arr[0]+mn+(mx-mn)/3<<endl;
	}
	return 0;

}