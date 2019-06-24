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
	int freq[200001],x;
	memset(freq,0,sizeof(freq));
	vector<int> arr,v1,v2;
	while(n--)
	{
		cin>>x;
		freq[x]++;
		arr.pb(x);
	}
	int flag=0;
	for(int i=0;i<200001;i++)
	{
		if(freq[i]>2)
		{
			flag=1;
			break;
		}
	}
	if(flag==1) cout<<"NO"<<endl;
	else
	{
		for(int i=0;i<200001;i++)
		{
			if(freq[i]==2) {v1.pb(i); freq[i]--;}
			if(freq[i]==1){v2.pb(i);}
		}

		cout<<"YES"<<endl;
		if(v1.size()>=v2.size())
		{
			sort(all(v2));
			sort(all(v1),greater<int>());
			cout<<v2.size()<<endl;
			for(auto j:v2) cout<<j<<" ";
				cout<<endl;
			cout<<v1.size()<<endl;
			for(auto j:v1) cout<<j<<" ";
				cout<<endl;
		}
			else
			{
			sort(all(v1));
			sort(all(v2),greater<int>());
			cout<<v1.size()<<endl;
			for(auto j:v1) cout<<j<<" ";
				cout<<endl;
			cout<<v2.size()<<endl;
			for(auto j:v2) cout<<j<<" ";
				cout<<endl;
			}
	}
	return 0;
}