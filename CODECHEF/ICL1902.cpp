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
		int n,count=1;
		cin>>n;
		if(n<=3) cout<<n<<endl;
		else{
		ld n1=floor(sqrt(n));
		n-=(n1*n1);
		while(n>0)
		{
			//cout<<n<<endl;
		//n=n-(n1*n1);
			if(n<=3) {count+=n; break;}
		n1=floor(sqrt(n));
		n=n-(n1*n1);
		//cout<<n1<<endl;
		count++;
		//cout<<count<<endl;
		}
		cout<<count<<endl;
	}
	}
	return 0;
}