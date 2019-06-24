#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<pair <ll,ll>, null_type,less<pair <ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
int main(void)
{
	int t;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n>>k;
    	int arr[n];
    	pair<int,int> pl;
    	int count=0;
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	for(int i=0;i<n;i++)
    	{
    		int freq[2001]={0};
    		ordered_set st;
    		for(int j=i;j<n;j++)
    		{
    			freq[arr[j]]++;
    			pl.first=arr[j];
    			pl.second=freq[arr[j]];
    			st.insert(pl);
    			int m=(int)(ceil((ld)k/(ld)(j-i+1)));
    			m=(int)(ceil((ld)k/(ld)m))-1;
    			int x=(*(st.find_by_order(m))).first;
    			x=freq[x];
    			if(freq[x]!=0)
    				count++;
    		}
    	}
    	cout<<count<<endl;
    }
    return 0;
}