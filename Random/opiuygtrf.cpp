#include <vector>
#define REP(i,n) 
#include<bits/stdc++.h>
using namespace std;

const long long int MOD = 1000000007;

const int K = 5;

 



long long int* mul(long long int A[][5], long long int B[][5])

{

   static long long int C[5][5],i,j,k;

    for (i = 0; i < K; i++)
	{for ( j = 0; j < K; j++) 
	{for ( k = 0; k < K; k++)

        C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;}}

    return C;

}

 

long long int* pow(long long  A[][5], int p)

{

    if (p == 1)

        return A;

    if (p % 2)

        return mul(A, pow(A, p-1));

    long long int X[5][5] = pow(A, p/2);

    return mul(X, X);

}

 


int fib(int N)

{

    

    long long  F1[k];

    F1[0] = 1;

    F1[1] = 1;
 	F1[2]=9;
 	F1[3]=7;
 	F1[4]=1;
	
    long long k,T[5][5]=	{{1,1,1,0,0},{1,0,0,0,0},{0,0,1,1,0},{0,0,0,1,2},{0,0,0,0,1}};


   

 


    if (N == 1)

        return 1;

    T = pow(T, N-1);

 


    ll res = 0;

   for (k = 0; k < K; k++)

        res = (res + T[0][i] * F1[i]) % MOD;

    return res;

}
int main(void)
{
	cout<<fib(2);
	return 0;
}
