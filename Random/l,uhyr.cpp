#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	long long t,x;
	cin>>t;
	while(t--)
	{
		long long n,a,b;
		cin>>n>>a>>b;
		int arr[n];
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++)
		{
			cin>>x;
			arr[x]++;
		}
		cout << setprecision(12);
		cout<<((float)arr[a]/n)*((float)arr[b]/n)<<endl;
	}
	return 0;
}
