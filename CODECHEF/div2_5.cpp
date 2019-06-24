
#include <bits/stdc++.h> 
using namespace std; 
int findMaxSubarraySum(int arr[], int n, int sum) 
{ 

	int curr_sum = arr[0], max_sum = 0, start = 0; 
	for (int i = 1; i < n; i++) { 
		if (curr_sum <= sum) 
		max_sum = max(max_sum, curr_sum); 

		// If curr_sum becomes greater than 
		// sum subtract starting elements of array 
		while (curr_sum + arr[i] > sum && start < i) { 
			curr_sum -= arr[start]; 
			start++; 
		} 
		
		// Add elements to curr_sum 
		curr_sum += arr[i]; 
	} 

	// Adding an extra check for last subarray 
	if (curr_sum <= sum) 
		max_sum = max(max_sum, curr_sum); 

	return max_sum; 
} 

// Driver program to test above function 
int main() 
{ 
	int arr[] = {6, 8, 9}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int sum = 20; 

	cout << findMaxSubarraySum(arr, n, sum); 

	return 0; 
} 
