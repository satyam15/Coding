// #include <bits/stdc++.h>
// using namespace std;
// #define ld long double
// #define ll long long
// int main(void)
// {
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll a,b,c,d;
//     cin>>a>>b>>c>>d;
//     if(a==d)
//     {
//     	if(c==0 && a!=0 && b!=0)
//     		cout<<1;
//     	else if(c==0 && a==0 && b==0)
//     		cout<<0;
//     	else if(c==0 && a==0 && b!=0)
//     		cout<<1;
//     	else if(a!=0)
//     		cout<<1;
//     	else
//     		cout<<0;
//     }
//     else
//     	cout<<0;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==d)
    {
    	if(c==0)
    		cout<<1;
    	else if(a!=0)
    		cout<<1;
    	else
    		cout<<0;
    }
    else
    	cout<<0;
    return 0;
}