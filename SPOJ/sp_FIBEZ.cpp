	#include <bits/stdc++.h>
	using namespace std;
	#define ld double
	#define ll long long
	#define pb push_back
	#define mk make_pair
	#define mod 100000007
	#define ff first
	#define ss second
	#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	#define all(x) x.begin(),x.end()
	int main(void)
	{
		FIO
		int t,n;
		ll fib[500001];
		fib[0]=0;
		fib[1]=1;
		fib[2]=1;
		for(int i=3;i<500001;i++)
			fib[i]=(fib[i-1]%mod+fib[i-2]%mod)%mod;
		scanf("%d",&t);
		while(t--)
		{
			scanf("%d",&n);	
			printf("%lld\n",fib[n]);
		}
		return 0;
	}