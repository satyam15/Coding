#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	stack<string>stk;
	int q;
	cin>>q;
	string st;
	while(q--)
	{
		int n;
		cin>>n;
		if(n==1)
		{
			string str;
			cin>>str;
			stk.push(st);
			st+=str;
		}
		else if(n==2)
		{
			int k;
			cin>>k;
			st.erase(st.size()-k);
		}
		else if(n==3)
		{
			int k;
			cin>>k;
			cout<<st[k-1]<<endl;
		}
		else
		{st=stk.top();
		stk.pop();
		}
		
	}
	return 0;
	
}
