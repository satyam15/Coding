#include<bits/stdc++.h>
using namespace std;
int main() {
	
	int t;
	cin >> t;
	while(t--){
	long long int l,r,i;
	cin >> l >> r;
	for(i=l;i<=r;i++)
	if(i!=1)
	{
		int flag=0;
		for(long long int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout << i << endl;
	}
}
	return 0;
}
