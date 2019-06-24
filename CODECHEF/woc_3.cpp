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
bool prime[100001]; 
void SieveOfEratosthenes(int n) 
{ 

    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {   
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
} 
long long c[100]; 
 
void coef(int n) 
{ 
	c[0] = 1; 
	for (int i = 0; i < n; c[0] = -c[0], i++) { 
		c[1 + i] = 1; 

		for (int j = i; j > 0; j--) 
			c[j] = c[j - 1] - c[j]; 
	} 
} 

bool isPrime(int n) 
{ 
	if(n<=100000) { return (prime[n]>0); }
	coef(n); 
	c[0]++, c[n]--; 
	int i = n; 
	while (i-- && c[i] % n == 0) 

	return i < 0; 
} 


int gcd(int a, int b) 
{ 
	if (b == 0) 
		return a; 
	return gcd(b, a % b); 
} 

ll findlcm(int arr[], int n) 
{ 

	ll ans = arr[0]; 
	//cout<<ans<<" ";
	for (int i = 1; i < n; i++) 
		{
			ans = (((arr[i] * ans)) / (gcd(arr[i], ans))); 
		//	cout<<ans<<" ";
		}

	return ans; 
} 
int main() 
{ 
	FIO
	int t;
	SieveOfEratosthenes(100000);
	cin>>t;
	while(t--)
	{
		int n,flag;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) 
			cin>>arr[i];
		//for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		ll lcm=findlcm(arr,n); 
	//	cout<<lcm<<endl;
		//cout<<lcm<<endl;
		for(int i=0;i<n;i++)
		{
			//cout<<"prime "<<lcm/arr[i]<<endl;
			bool fal=isPrime(lcm/arr[i]);
			if(!fal)
			{
				flag=0;
				break;
			}
		} 
		if(flag==0) cout<<"-1"<<endl;
		else cout<<lcm<<endl;
	}
	return 0; 
} 
