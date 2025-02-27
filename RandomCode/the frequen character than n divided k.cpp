#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int arr[], int n, int k)
{
	unordered_map<int, int> freqHash;
	for(int i = 0 ;i < n ;i++)
	{
		freqHash[arr[i]] += 1;
	}
	vector<int> result;
	
	for(auto i : freqHash)
	{
		if (i.second > n/k)
		{
			result.push_back(i.first);
		}
	}
	return result;
}

int main()
{
	int arr[] = {3, 1, 2, 2, 1, 2, 3, 3}, k = 4;
	int n = (sizeof(arr)/sizeof(arr[0]));
	
	vector<int> result = solution(arr, n, k);
	
	for(int i : result)
	{
		cout << i << ", ";
	}
}
