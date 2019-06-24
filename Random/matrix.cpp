#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int m = -10000;
        for(int l=1;l<=n;l++){
            for (int i=0;i<=n-l;i++){
                for(int j=0;j<=n-l;j++){
                    int sum = 0;
                    for(int i1=0;i1<l;i1++){
                        sum += a[i+i1][j+i1]; 
                    }
                        m = max(m,sum);
                }
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
