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
	char t,arr[]={'a','e','i','o','u'};
	int n,r=0,c;
	cin>>n;
	if(n<25) cout<<-1<<endl;
	else
	{
		for(int i=5;n/i>=5;i++)
		{
			if(n%i==0)
			{
				r=i;
				break;
			}
		}
		if(r==0) cout<<-1<<endl;
		else
		{
			c=n/r;
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
					cout<<arr[(i+j)%5];
			}
			cout<<endl;
		}
	}
}