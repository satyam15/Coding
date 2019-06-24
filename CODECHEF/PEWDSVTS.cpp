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
		int n,a,b,y,z,X,x,flag=1;
		cin>>n>>a>>b>>x>>y>>z;
		priority_queue<int> q;
		for(int i=0;i<n;i++)
		{
			cin>>X;
			q.push(X);
		}
		float t1,t2;
		t1=(z-a)/(float)x;
		t1=ceil(t1);
		t2=ceil(t2);
		t2=(z-b)/(float)y;
		int sum=a+x*((int)t2);
		int cnt=0;
		if(t1>=t2 && sum<z)
		{
			while(!q.empty())
			{
				x=q.top();
				//cout<<x<<" ";
				q.pop();
				sum+=x;
				cnt++;
				if(floor(x/2)!=0)
				q.push(floor(x/2));
				if(sum>=z) 
				{
					flag=0;
					break;
				}
			}
			// cout<<sum<<endl;
			if(flag==0)
			{
				cout<<cnt<<endl;
			}
			else
				cout<<"RIP"<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
	return 0;
}