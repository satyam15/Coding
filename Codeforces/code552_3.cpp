#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define mod 1000000007
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
int main() {
  FIO
  int arr[7] = {0,1,2,0,2,1,0};
  int ans = 0;
  int a, b, c;
  cin >> a >> b >> c;
  int w = min({a/3,b/2,c/2});
  for (int d = 0; d < 7; d++) {
    int A[3] = {a-w*3,b-w*2,c-w*2};
    // for(auto i: A) cout<<i<<" ";
    // 	cout<<endl;
    for (int i = 0; i < 7; i++) {
      ans = max(ans, w*7+i);
    //  cout<<d+i<<"="<<A[arr[(d+i)%7]]<<endl;
      if (!A[arr[(d+i)%7]]--) break;
    }
    // cout<<ans;
    // cout<<endl;
  }
  cout << ans << endl;
}
