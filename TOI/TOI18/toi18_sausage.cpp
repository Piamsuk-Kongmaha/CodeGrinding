#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	vector<int> arr(n+1,0);
	vector<vector<int>> dp(n+1,vector<int>(n+1,0));
	for(int i =1; i <= n; i++)
	{
		cin >> arr[i];
		dp[i][i] = arr[i];
	}


	for(int len = 2; len <= n; len++)
	{
		for(int j = len; j <=n; j++)
		{
			int i = j-len+1;
			dp[i][j] = max(dp[i-1][j] + arr[i], dp[i][j-1] + arr[i]) + abs(arr[i] - arr[j]);
		}
	}

	for(int i = 2; i <=n; i++)
	{
		for(int j=  1; j < i; j++)
		{
			dp[1][i] = max(dp[1][i], dp[1][j] + dp[j+1][i]);
		}
	}
	cout << dp[1][n];
}