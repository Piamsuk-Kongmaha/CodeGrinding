#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i =0;i < n; i++) cin >> a[i];

	int maxor = 0;
	for(int num : a) maxor |= num;


	vector<int> dp(maxor + 1, 0);
	dp[0] = 1;

	for(int num : a){
		for(int m = maxor; m >= 0; m--)
		{
			if(dp[m]){
				int newm = m|num;
				dp[newm] = (dp[newm] + dp[m]) % MOD;
			}
		}
	}

	cout << dp[maxor];
}