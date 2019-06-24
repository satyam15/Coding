#include <bits/stdc++.h>

using namespace std;
map<string,long long>m;
map<string,long long>::iterator it;



int main() {
    long long t,i,n;
    cin>>t;
    while(t--)
    {
        string s;
        m.clear();
        cin>>n;
        for(i=1;i<=n;i++)
        {
                cin>>s;
        m[s]++;
        }
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second>1)
            {
                cout<<it->first<<endl;
                break;
            }
        }
        
    }
    return 0;
}

