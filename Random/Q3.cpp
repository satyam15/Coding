#include <vector>
#define REP(i,n) for (int i = 0; i < n; i++)
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef vector<vector<ll> > matrix;

const ll MOD = 1000000007;

const int K = 5;

 



matrix mul(matrix A, matrix B)

{

    matrix C(K, vector<ll>(K));

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

    

    vector<ll> F1(K);

    F1[0] = 1;

    F1[1] = 1;
 	F1[2]=9;
 	F1[3]=7;
 	F1[4]=1;

    matrix T(K, vector<ll>(K));

    T[0][0] = 1, T[0][1] = 1 ,T[0][2]=1,T[0][3]=0,T[0][4]=0;

    T[1][0] = 1, T[1][1] = 0,T[1][2] =0,T[1][3] =0,T[1][4] =0;
	T[2][0] = 0, T[2][1] = 0,T[2][2] =1,T[2][3] =1,T[2][4] =0;    
	T[3][0] = 0, T[3][1] = 0,T[3][2] =0,T[3][3] =1,T[3][4] =2;
	T[4][0] = 0, T[4][1] = 0,T[4][2] =0,T[4][3] =0,T[4][4] =1;
 


    if (N == 1)

        return 1;

    T = pow(T, N-1);

 


    ll res = 0;

    REP(i, K)

        res = (res + T[0][i] * F1[i]) % MOD;

    return res;
}
int main(void)
{
	long long int n;
	cin>>n;
	if(n==1)
	{
		cout<<1<<endl;
		return 0;
	}
	n--;
	cout<<fib(n)<<endl;
	return 0;
}


