#include <bits/stdc++.h>

using namespace std;

int dp[1 << 8];
int main()
{
	int n,k;
	int work;
	cin >> n >> k;
	int perfect = (1 << k) -1;
	for(int i = 1; i <= perfect; i++)
	{
		dp[i] = 1e9;
	}
	for(int i = 0; i < n; i++)
	{
		int cost, mask = 0;
		cin >> cost;
		for(int j = 0; j <k; j++)
		{
			cin >> work;
			mask |= work << j;
		}
		for(int wstate = 0; wstate <= perfect; wstate++)
		{
			dp[wstate|mask] = min(dp[wstate | mask], dp[wstate] + cost);
		}
	}
	cout << dp[perfect];
}
