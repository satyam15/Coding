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
		int n,k;
		cin>>n>>k;
		int candy=n;
		int rap=n;
		while(rap>=k)
		{
			candy+=rap/k;
			rap=rap-(rap/k)*k+rap/k;
		}
		cout<<candy<<endl;
	}
	return 0;
}