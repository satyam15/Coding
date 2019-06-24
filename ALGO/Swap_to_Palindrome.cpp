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
// 	int t;
// 	// ll x=numeric_limits<ll>::max();
// 	// cout<<x<<endl;
// 	cin>>t;
// 	while(t--)
// 	{
// 		string s;
// 		cin.clear();
// 		cin>>s;
// 		int sz,flag=0,arr[26]={0};
// 		sz=s.size();
// 		for(int i=0;i<sz;i++)
// 		{
// 			arr[s[i]-'a']++;
// 		}
// 		if(sz%2==0)
// 		{
// 			for(int i=0;i<26;i++)
// 			{
// 				if(s[i]%2==1)
// 				{
// 					cout<<"No"<<endl;
// 					break;
// 				}
// 				cout<<"Yes"<<endl;
// 			}
// 		}
// 		else
// 		{
// 			for(int i=0;i<26;i++)
// 			if(s[i]%2==1)
// 			{
// 				flag++;
// 			}
// 			if(flag==1)
// 				cout<<"Yes"<<endl;
// 			else 
// 				cout<<"No"<<endl;
// 		}
// 	}
// 	return 0;
// }
#include<bits/stdc++.h>
#define PI acos(-1.0)
#define X first
#define Y second
#define mpp make_pair
#define nl printf("\n")
#define SZ(x) (int)(x.size())
#define pb(x) push_back(x)
#define pii pair<int,int>
#define pll pair<ll,ll>
///---------------------
#define S(a) scanf("%d",&a)
#define P(a) printf("%d",a)
#define SL(a) scanf("%lld",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define SL2(a,b) scanf("%lld%lld",&a,&b)
///------------------------------------
#define all(v) v.begin(),v.end()
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a) memset(a,-1,sizeof(a))
#define fr(i,a,n) for(int i=a;i<=n;i++)
using namespace std;
typedef long long ll;
/// Digit 0123456789012345678 ///
#define MX 200005
#define inf 100000001LL
#define MD 1006000007LL
#define eps 1e-9
///===============================///
int main() {
// freopen("input8.txt","r",stdin);
// freopen("output8.txt","w",stdout);
int tc;
cin>>tc;
while(tc--) {
string s;
cin>>s;
int n=s.size();
int l=0,r=n-1;
char a,b,c,d;
int cnt=0;
while( l<r ) {
	if( s[l]!=s[r] ) {
		cnt++;
		if( cnt==1 ) {
			a=s[l],b=s[ r ];
		} else if( cnt==2 ) {
			c=s[l],d=s[ r ];
		} else
		 break;
	}
	l++,r--;
}
//cout<<cnt<<endl;
if( cnt>2 ) cout<< "No\n";
else
 if( cnt==2 ) {
if( (a==c && b==d) || (a==d && c==b) ) cout<< "Yes\n";
else cout<< "No\n";
} 
else if( cnt==1 ) {
if( n%2==0 )cout<< "No\n";
else if( s[n/2]==a || s[n/2]==b ) cout<< "Yes\n";
else cout<< "No\n";
} 
else cout<< "Yes\n";
}
return 0;
}