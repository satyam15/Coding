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
	int n;
	cin>>n;
	int arr[n+1]={0},c=0;
	for(int i=2;i<=n;i++)
	{
		if(arr[i]==0)
		{
		c++;
		for(int j=i;j<=n;j+=i)
			arr[j]=c;
		}
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}