#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define mod 1000000007
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<pair <ll,ll>, null_type,less<pair <ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
const long long MAX_SIZE = 1000001; 
string primes[1000001]; 
int p1[1000001];
int prime[10000001];  

int main() 
{ 
	memset(prime,1,sizeof(prime));prime[0]=0;prime[1]=0;
    for(int i=2;i*i<=1000000;i++){
        if(prime[i]){
            for(int j=2*i;j<=1000000;j+=i)
                prime[j]=0;
        }
    }
    int x=0;
    for(int i=0;i<=1000000;i++)
    {
    	if(prime[i])
    	{
    		x++;
    		primes[x]=to_string(i);
    		p1[x]=i;
    	}
    }
	int t;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--)
    {
    	int n,k,a,max_ans,min_ans;
    	cin>>n>>k;
    	int min=MAX_SIZE;
    	int max=0;
    	int b=0;
    	string str[k+1];
    	for(int i=1;i<=k;i++)
    	{
    		cin>>a;
    		str[i]=to_string(a);
    	}
    	for(int i=1;i<=k;i++)
    	{
    		b=0;
    		for(int j=0;p1[j]<=n;j++){
                size_t found = primes[j].find(str[i]); 
                if (found != string::npos)
                    b++; 
            }
    		//cout<<b<<endl;
    		if(min>=b) {min=b; min_ans=i;}
    		if(max<b) {max=b; max_ans=i;}
    	}
    	if(min != max) cout<<min_ans<<" "<<max_ans<<endl;
    	else
    	{
    		int ans=min_ans>max_ans?max_ans:min_ans;
    		cout<<ans<<" "<<ans<<endl;
    	}
    } 

	return 0; 
} 
