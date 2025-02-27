#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(vector<int> arr)
{
	int n = arr.size();
	sort(arr.begin(), arr.end());
	vector<vector<int>> result;
	
	for(int i = 0; i < n-1; i++)
	{
		int left = i +1;
		int right = n - 1;
		
		while (left < right)
		{
			int sum = arr[i] + arr[left] + arr[right];
			if (sum == 0)
			{
				result.push_back({arr[i], arr[left], arr[right]});
				left++;
				right--;
			}else if (sum < 0)
			{
				left++;
			}else
			{
				right--;
			}
		}
	}
	return result;
}

int main()
{
	vector<int> arr = {0, -1, 2, -3, 1};
	vector<vector<int>> result = solution(arr);
	for(auto r: result)
	{
		for(auto num : r)
		{
			cout << num << " ";
		}
		cout << '\n';
	}
	
	return 0;
}
