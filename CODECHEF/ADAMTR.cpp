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
    int t;
    cin>>t;
    while(t--)
    {  
        ll m,n,x=0,flag=1;
        cin>>n;
        int arr1[n+1][n+1],arr2[n+1][n+1];
        for(ll i=1;i<=n;i++) for(ll j=1;j<=n;j++) cin>>arr1[i][j];
        for(ll i=1;i<=n;i++) for(ll j=1;j<=n;j++) cin>>arr2[i][j];
        //for(int i=1;i<=n;i++) if(arr1[i][i]!=arr2[i][i]) {flag=0; break;}
        if(flag == 1)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(arr1[i][j] != arr2[i][j])
                    {
                        if(arr1[i][j] == arr2[j][i])
                        {
                            for(int k=1;k<=n;k++)
                            {
                                swap(arr1[j][k], arr1[k][j]);
                            }
                        }
                        else 
                        {
                            flag=0;
                            break;
                        }
                    }
                } 
                if(flag==0) break;               
            }
            for(int i=1;i<=n;i++)
            {
                if(flag == 0) break;
                for(int j=1;j<=n;j++)
                {
                    if(arr1[i][j]!=arr2[i][j])
                    {
                        flag=0;
                        break;
                    }
                }  
            }
             if(flag == 0)   cout << "No" << endl;
        else   cout << "Yes" << endl;
        }
    }
    return 0;
}