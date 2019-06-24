// #include <bits/stdc++.h>
// using namespace std;
// #define ld long double
// #define ll long long
// #define mod 1000000007
// void ARRAY(ll arr[],ll arr1[],ll n)
// {
// 	ll j=1,x=0;
// 	ll ans=0;
// 	for(ll i=1;i<=n;i++)
// 	{
// 		ans=0;
// 		j=1;
// 		for(ll k=i;k<=n;k++,j++)
// 		{
// 			ans+=arr[k]/j;
// 		}
// 		arr1[++x]=ans;
// 	}
// }
// int main(void)
// {
// 	ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//     	ll n,k;
//     	cin>>n>>k;
//     	ll arr[n+1];
//     	for(ll i=1;i<=n;i++)
//     		cin>>arr[i];
//     	ll arr1[n+1];
//     	ARRAY(arr,arr1,n);
//     	ll i,flag=0;
//     	for(i=1;i<=n;i++)
//     	{
//     		if(arr[i]<=k)
//     		{
//     			flag=1;
//     			break;
//     		}
//     	}
//     	if(flag)
//     	cout<<i<<endl;
//     	else
//     		cout<<n+1<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int check_anger(int *a, int size, int position, int k) {
    int s = 0, denom = 1;
    for (int i = position; i < size; i++, denom++) {
        s += a[i] / denom;
        if (s > k)
            return 0;
    }
    return s;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d%d", &n, &k);
        int const size = n;
        int a[size];
        n = 0;
        while (n < size)
            scanf("%d", &a[n++]);
        if (size > 98000) {
            if (!check_anger(a, size, 95000, k))
                n = 9 * size / 10;
            else
                n = 0;
        } else
            n = 0;
        int flag = 0;
        while (n < size) {
            if (check_anger(a, size, n, k)) {
                printf("%d\n", n + 1);
                flag = 1;
                break;
            }
            ++n;
        }
        if (!flag)
            printf("%d\n", n + 1);
    }
}
