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
	while(t--)
	{
		int n,a,b,x,y,z,x,sum=0,flag=1;
		cin>>n>>a>>b>>X>>y>>z;
		priority_queue<int> q;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			q.push(x);
		}
		float t1,t2;
		t1=(z-a)/(float)x;
		t2=(z-b)/(float)x;
		if(t1>=t2)
		{
			while(!q.empty())
			{
				x=q.pop();
				sum+=x/2;
				q.push(x-x/2);
				if(sum>=z) 
				{
					flag=0;
					break;
				}
			}
			if(flag=0)
			{
				cout<<sum<<endl;
			}
			else
				cout<<"RIP"<<endl;
		}
		else
		{
			cout<<"RIP"<<endl;
		}
	}
	return 0;
}