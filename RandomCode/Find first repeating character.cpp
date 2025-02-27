#include <bits/stdc++.h>

using namespace std;

int firstRepeat(int arr[], int size)
{

	unordered_map<int,int> idxHash;
	int minIdx = size;
	for(int i = 0; i < size; i++)
	{
		if (idxHash.find(arr[i]) != idxHash.end())
		{
			minIdx = min(minIdx, idxHash[arr[i]]);
		}
		else
		{
			idxHash[arr[i]] = i;
		}
	}
	
	if (minIdx == size)
	{
		return -1;
	}else
	{
		return minIdx;
	}
	
}

int main()
{
	int arr[] = {10, 5, 3, 4, 3, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int resultIdx = firstRepeat(arr, n);
	cout << resultIdx;
}
