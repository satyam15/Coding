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
int main(void)
{
	FIO
	int T;
    cin >> T;

    while(T--) {
        ll l,r,g;
        cin >> l >> r >> g;

        ll i = (l+g-1)/g;
        ll j = r/g;

        if(i>j) cout << "0\n";
        else if(i==j) {
            if(i==1) cout << "1\n";
            else cout << "0\n";
        } else {
            cout << (j-i+1) << "\n";
        }
    }
    return 0;
}