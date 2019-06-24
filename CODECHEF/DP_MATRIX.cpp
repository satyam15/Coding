#include <iostream>
using namespace std;
#define M 3
#define N 3

bool isValid(int i, int j)
{
	return (i >= 0 && i < M && j >= 0 && j < N);
}
int totalWays(int i, int j, int k, bool isCol)
{
	if (k == -1 || !isValid(i, j)) return 0;
		
	if (k == 0 && i == M - 1 && j == N - 1) return 1;

	if (isCol)
	{
		return totalWays(i + 1, j, k, isCol) + 
			   totalWays(i, j + 1, k - 1, !isCol);
	}
	return totalWays(i, j + 1, k, isCol) + 
		   totalWays(i + 1, j, k - 1, !isCol);
}

int totalWays(int i, int j, int k)
{
	return totalWays(i + 1, j, k, true) + 	  
		   totalWays(i, j + 1, k, false); 	  
}

int main()
{
	int k = 2;
	cout << "Total number of ways is " << totalWays(0, 0, k);

	return 0;
}