#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int mxN = 2e3 +5;
int n;
ll dp[2][mxN];
ll a[mxN];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++)
	{
		int curr = i&1;
		int pre = curr^1;
		dp[curr][0] = max(dp[pre][0], dp[pre][j-1] + a[i], dp[pre][j+2] - a[i]);
	}
	
	cout << dp[n&1][0];
	
	return 0;
}
