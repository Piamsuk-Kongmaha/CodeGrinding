#include <bits/stdc++.h>

using namespace std;

int n,m,k;

const int N = 1e6+5;

int dp[N];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> k;
	int r = 1;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		dp[r] += 1;
		r+=x;
	}
	
	for(int i = 1; i <= r; i++) dp[i] += dp[i-1];
	int ans, mx = 0;
	
	for(int i = 1; i <= r; i++)
	{
		int v[10005] = {0};
		int vv = 0;
		
		for(int j = i, c = 0; j < r && c < m;j+=k, c++)
		{
			if (v[dp[j]] == 0)
			{
				vv++;
				v[dp[j]] += 1;
			}	
			
		}
		if (vv > mx)
			{
				mx = vv;
				ans = i;
			}	
	}
	
	
	cout << ans << " " << mx;
	return 0;
}

