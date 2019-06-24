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
	if(n<=2)
	{
		cout<<n<<endl;
		if(n==1) cout<<"1 1"<<endl;
		else
		{
			cout<<"1 1"<<endl;
			cout<<"1 2"<<endl;
		}
	}
	else
	{
		if(n%2==1)
		{
			int j=1;
			cout<<(n+1)/2<<endl;
			for(int i=1;i<n;i++)
			{
				if(i%2==1) { cout<<j<<" "<<j<<endl; }
				else {cout<<j<<" "<<j+1<<endl; j++;}
			}
			cout<<j<<" "<<j<<endl;

		}
		else
		{
			cout<<n/2+1<<endl;
			int j=1;
			for(int i=1;i<=n;i++)
			{
				if(i%2==1) { cout<<j<<" "<<j<<endl; }
				else {cout<<j<<" "<<j+1<<endl; j++;}
			}
		}

	}
	return 0;
}