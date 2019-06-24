#include <bits/stdc++.h> 
using namespace std; 

void kFactors(int n, int k) 
{ 
    // A vector to store all prime factors of n 
    vector<int> P; 
  
    // Insert all 2's in vector 
    while (n%2 == 0) 
    { 
        P.push_back(2); 
        n /= 2; 
    } 
  
    // n must be odd at this point 
    // So we skip one element (i = i + 2) 
    for (int i=3; i*i<=n; i=i+2) 
    { 
        while (n%i == 0) 
        { 
            n = n/i; 
            P.push_back(i); 
        } 
    } 
  
    // This is to handle when n > 2 and 
    // n is prime 
    if (n > 2) 
        P.push_back(n); 
  
    // If size(P) < k, k factors are not possible 
    if (P.size() < k) 
    { 
        cout << "-1" << endl; 
        return; 
    } 
  
    // printing first k-1 factors 
    for (int i=0; i<k-1; i++) 
        cout << P[i] << ", "; 
  
    // calculating and printing product of rest 
    // of numbers 
    int product = 1; 
    for (int i=k-1; i<P.size(); i++) 
        product = product*P[i]; 
    cout << product << endl; 
}
