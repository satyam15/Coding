
// C++ program to find value of f(n) where f(n) 
// is defined as 
//    F(n) = F(n-1) + F(n-2) + F(n-3), n >= 3 
// Base Cases : 
//    F(0) = 0, F(1) = 1, F(2) = 1 
#include<bits/stdc++.h> 
using namespace std; 
  
// A utility function to multiply two matrices 
// a[][] and b[][].  Multiplication result is 
// stored back in b[][] 
void multiply(int a[5][5], int b[5][5]) 
{ 
    // Creating an auxiliary matrix to store elements  
    // of the multiplication matrix 
    int mul[5][5]; 
    for (int i = 0; i < 5; i++) 
    { 
        for (int j = 0; j < 5; j++) 
        { 
            mul[i][j] = 0; 
            for (int k = 0; k < 5; k++) 
                mul[i][j] += a[i][k]*b[k][j]; 
        } 
    } 
  
    // storing the muliplication resul in a[][] 
    for (int i=0; i<5; i++) 
        for (int j=0; j<5; j++) 
            a[i][j] = mul[i][j];  // Updating our matrix 
} 
  
// Function to compute F raise to power n-2. 
int power(int F[5][5], int n) 
{ 
    int M[5][5] = {{1,1,1,0,0}, {1,0,0,0,0}, {0,0,1,1,0},{0,0,0,1,2},{0,0,0,0,1}}; 
  
    // Multiply it with initial values i.e with 
    // F(0) = 0, F(1) = 1, F(2) = 1 
    if (n==1) 
        return F[0][0] + F[0][1]+F[0][2]+F[0][3]+F[0][4]; 
  
    power(F, n/2); 
  
    multiply(F, F); 
  
    if (n%2 != 0) 
        multiply(F, M); 
  
    // Multiply it with initial values i.e with 
    // F(0) = 0, F(1) = 1, F(2) = 1 
    return F[0][0] + F[0][1]+F[0][2]+F[0][3]+F[0][4];
} 
  
// Return n'th term of a series defined using below 
// recurrence relation. 
// f(n) is defined as 
//    f(n) = f(n-1) + f(n-2) + f(n-3), n>=3 
// Base Cases : 
//    f(0) = 0, f(1) = 1, f(2) = 1 
int findNthTerm(int n) 
{ 
    int F[5][5] = {{1,1,1,0,0}, {1,0,0,0,0}, {0,0,1,1,0},{0,0,0,1,2},{0,0,0,0,1}}; 
  
    return power(F, n-2); 
} 
  
// Driver code 
int main() 
{ 
   int n = 5; 
  
   cout << "F(3) is " << findNthTerm(n); 
  
   return 0; 
} 
