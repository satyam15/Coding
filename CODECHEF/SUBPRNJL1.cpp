#include <bits/stdc++.h>
#define ll int
#define ld double
using namespace std;

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
  
#define ordered_set tree<pair <ll,ll>, null_type,less<pair <ll,ll>>, rb_tree_tag,tree_order_statistics_node_update> 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n],i,j;
        for(i=0;i<n;i++){
            cin>>a[i];
            //hash1[a[i]]++;
        }
        ll c = 0;
        for(i=0;i<n;i++){
            ordered_set o;
            ll hash2[2001] = {0};
            for(j=i;j<n;j++){
                hash2[a[j]]++;
                pair <ll,ll> p;
                p.first = a[j];
                p.second = hash2[a[j]];
                o.insert(p);
                ll m = (ll)(ceil((ld)k/(ld)(j-i+1)));
                //cout<<"H "<<m<<" ";
                ll ele = (ll)(ceil((ld)k/(ld)m));
                //cout<<"I "<<ele<<" ";
                ele = ele-1;
                cout<<ele<<endl;
                ll e = (*(o.find_by_order(ele))).first;
                
                ll f = hash2[e];
                if(hash2[f]!=0)
                    c++;
                //cout<<"\n";
            }
        }
        cout<<c<<"\n";
    }
	return 0;
}
