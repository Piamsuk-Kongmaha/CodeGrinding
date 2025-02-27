#include <bits/stdc++.h>

using namespace std;

pair<int, int> findResult(int arr[], int n)
{
	int sum = n*(n+1) /2;
	int sumSquare = n*(n+1) * (2*n+1) /6;
	
	int arrSum = 0, arrSumSquare = 0;
	for(int i = 0; i < n; i++)
	{
		arrSum += arr[i];
		arrSumSquare += arr[i] * arr[i];
	}
	
	int sumDiff = sum - arrSum;
	int sumSquareDiff = sumSquare - arrSumSquare;
	
	int repeating = (sumSquareDiff / sumDiff - sumDiff) / 2;
	int missing = (sumSquareDiff/ sumDiff + sumDiff) / 2;
	
	return {repeating, missing};
}


int main()
{
	int arr[] = {2, 3, 3, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	pair<int, int> result = findResult(arr,n);
	
	cout << result.first<< " " << result.second;
}
