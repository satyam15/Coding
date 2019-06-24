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
		int n,k,x,y;
		cin>>n;
		int arr[n];
		int ch[n],chn[n],p=-1,q=-1;
		ll sum1=0;
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		cin>>k>>x;
		for(int i=0;i<n;i++)
		{
			y=(arr[i]^x)-arr[i];
			sum1+=y;
			if(y>=0)ch[++p]=y;
			else chn[++q]=y;
		}
		sort(ch,ch+p+1,greater<int>());
		sort(chn,chn+q+1,greater<int>());
		p++;
		q++;
		int stch=k;
		if(k==n){if(sum1>0) sum+=sum1;}
		else if(stch%2!=0){for(int i=0;i<p;i++) sum+=ch[i];}
		else
		{
		
			int z=p-1;
			ll sum3=0;
			if(p%2==0) z=p;
			for(int i=0;i<z;i++) sum3+=ch[i];
				// cout<<sum<<endl;
			if(z==p-1&&q!=0&&(ch[p-1]+chn[0])>0) sum3+=ch[p-1]+chn[0]; 

		}
		cout<<sum<<endl;
	}
	return 0;
}