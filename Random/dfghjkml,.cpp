#include <vector>
#define REP(i,n) for (int i = 1; i <= n; i++)
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef vector<vector<ll> > matrix;

const ll MOD = 1000000007;

const int K = 2;

 



matrix mul(matrix A, matrix B)

{

    matrix C(K+1, vector<ll>(K+1));

    REP(i, K) REP(j, K) REP(k, K)

        C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;

    return C;

}

 

matrix pow(matrix A, int p)

{

    if (p == 1)

        return A;

    if (p % 2)

        return mul(A, pow(A, p-1));

    matrix X = pow(A, p/2);

    return mul(X, X);

}

 


int fib(int N)

{

    

    vector<ll> F1(K+1);

    F1[1] = 1;

    F1[2] = 1;
 

    matrix T(K+1, vector<ll>(K+1));

    T[1][1] = 0, T[1][2] = 1;

    T[2][1] = 1, T[2][2] = 1;

 


    if (N == 1)

        return 1;

    T = pow(T, N-1);

 


    ll res = 0;

    REP(i, K)

        res = (res + T[1][i] * F1[i]) % MOD;

    return res;

}
long long int modp(long long int a,long long int b,long long int c) {
        long long int ans=1;
        while(b != 0) {
                if(b%2 == 1)
                        ans=(ans*a)%c;

                a=(a*a)%c;
                b /= 2;
        }
        return ans;
}
int main(void)
{
    int n;
    cin >>n;
    int M;
    if(n==1||n==2)
    {
    	cout<<1;
    	return 0;
	}
    long long int a=6,b=1000000005,c=1000000007,N;
    N=modp(a,b,c);
    M=((((n%MOD)*(n+1)%MOD)%MOD*(2*(n%MOD)+1)%MOD)%MOD*N)%MOD;
   
    cout<<fib(n)<<endl;
    int ans=fib(n)+M-5;
    cout<<ans<<endl;
    return 0;
    
}
