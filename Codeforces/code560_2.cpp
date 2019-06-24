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
	int n,x,ans=0;
	cin>>n;
	int arr[200010];
	memset(arr,0,sizeof(arr));
	int arr1[n+1];
	arr1[0]=-1;
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i+1];
		arr[arr1[i+1]]++;
	}
	sort(arr1+1,arr1+n+1);
	int temp=1;
	for(int i=1;i<=n&&temp<=n;i++)
	{
			if(arr1[temp]>=i&&arr[arr1[temp]]>0){ arr[arr1[temp]]--; ans++;}
			else
				
				{
					while(temp<=n )
					{
						
						if(arr[arr1[temp]]>0&& arr1[temp]>=i)
						{
							arr[arr1[temp]]--; ans++;
							break;
						}
						temp++;
					}
					if(temp == n+1) break;		
				}
	}
	cout<<ans<<endl;
	return 0;
}