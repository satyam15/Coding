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
    ll t;
    cin>>t;
    while(t--)
    {
    	cin.clear();
    	int n,q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int b[n];
        memset(b,0,n);
        while(q--)
        {
            int k,id;
            cin>>id>>k;
            b[id-1]=1;
            int ans=lower_bound(a.begin(),a.end(),k+1)-a.begin();
            while(ans<n && b[ans]==1) ans++;
            if(ans==n) cout<<-1<<' ';
            else cout<<ans+1<<' ';
        }
        cout<<endl;
    }
    return 0;
}