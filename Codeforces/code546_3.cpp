#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define pb push_back
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin.clear();
    ll m,n,x;
    cin>>n>>m;
    vector<ll> v1[m+n+1],v2[m+n+1];
    for(ll i=1;i<=n;i++)
    {
    	for(ll j=1;j<=m;j++)
    	{
    		cin>>x;
    		v1[i+j].push_back(x);
    	}
    }
    for(ll i=1;i<=n;i++)
    {
    	for(ll j=1;j<=m;j++)
    	{
    		cin>>x;
    		v2[i+j].push_back(x);
    	}
    }
    for(ll i=2;i<=m+n;i++)
    {
    	sort(v1[i].begin(), v1[i].end()); 
	    sort(v2[i].begin(), v2[i].end()); 
    }
    	int flag=1;
    	if(v1[2] != v2[2] || v1[m+n] != v2[m+n] )
    	{
    		cout<<"NO"<<endl;
    	}
    	else
    	{
	    for(ll i=3;i<=m+n-1;i++)
	    {
	    	if(flag==0)
	    		break;
	    	sort(v1[i].begin(), v1[i].end()); 
	    	sort(v2[i].begin(), v2[i].end()); 
	    	if(v1[i] != v2[i])
	    	{
	    		flag=0;
	    		//cout<<i<<endl;
	    		break;
	    	}
	    }
	    if(flag == 1)
	    	cout<<"YES"<<endl;
	    else
	    	cout<<"NO"<<endl;
	}

}