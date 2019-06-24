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
		int n,k,m,n1,count=-1;
		cin>>n>>m>>k;
		n1=(n/m)*m;
	//	cout<<n1<<endl;
		while(n1>1)
		{
			if((n-n1)%k == 0)
			{
				count=(n-n1)/k;
				break;
			}
			n1-=m;
		//	cout<<n1<<endl;
		}
			cout<<count<<endl;
	}
	return 0;
}