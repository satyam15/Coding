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
		int n,x;
		cin>>n;
		int count=0;
		for(int i=0;i<n;i++)
        {
        	cin>>x;
            if(x%2!=0)
            	count++;
        }
        if(count%2!=0) cout<<"2"<<endl;
        else cout<<"1"<<endl;
	}
	return 0;
}