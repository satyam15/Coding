#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		set <pair<int,int> > s;
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			s.insert(make_pair(x,1));
			s.insert(make_pair(y,-1));
		}
		while(m--)
		{
			int k;
			cin>>k;
			set<pair<int,int> >::iterator itr;
			itr=s.upper_bound(make_pair(k,0));
			if(itr==s.end()){
				cout<<-1<<endl;
			}
			else {
			if(itr->second==1){
				
				cout<<(itr->first)-k<<endl;
			}
			else if(itr->second==-1){
				cout<<0<<endl;
			}
		}
	}
}
	return 0;
}
