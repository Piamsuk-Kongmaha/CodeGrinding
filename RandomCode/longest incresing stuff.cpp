#include<bits/stdc++.h>

using namespace std;

int findLongestLength(vector<int> num)
{
	int n = num.size();
	vector<int> dp(n, 1);
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0 ; j< i; j++)
		{
			if (num[j] < num[i])
			{
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
	}
	
	return *max_element(dp.begin(), dp.end());
}

int main()
{
	vector<int> nums = {10,9,2,5,3,7,101,18};
	int longestLen = findLongestLength(nums);
	cout << "The Longest Length is :" << longestLen << endl;
}
