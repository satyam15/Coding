// #include <bits/stdc++.h>
// using namespace std;
// #define ld double
// #define ll long long
// #define pb push_back
// #define mk make_pair
// #define mod 1000000007
// #define ff first
// #define ss second
// #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define all(x) x.begin(),x.end()
// int main(void)
// {
// 	FIO
// 	int n;
// 	cin>>n;
// 	int arr[n],ans=0;
// 	int arr1[200005]={0};
// 	for(int  i=0;i<n;i++) cin>>arr[i];
// 	for(int i=0;i<n;i++)
// 	{
// 		memset(arr1,0,sizeof(arr1));
// 		int mx=1;
// 		for(int j=i;j<n;j++)
// 		{
// 			arr1[arr[j]]++;
// 			while(arr1[mx]) mx++;
// 			// cout<<mx<<endl;
// 			ans+=mx;
// 		}
// 	}
// 	cout<<ans<<endl;
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;
const int N = 5E3 + 5;
int a[N];
int f[N];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++)
        cin >> a[i];
    int ans = 0;
    for(int i = 0; i < n; i ++) {
        int mex = 1;
        memset(f, 0, sizeof f);
        for(int j = i; j < n; j ++) {
            if(a[j] < N)
                f[a[j]] = 1;
            while(f[mex])
                mex ++;
            ans += mex;
        }
    }
    cout << ans;
    return 0;
}