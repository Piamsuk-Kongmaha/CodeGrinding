#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = 505;
const ll INF=LLONG_MAX/4;

int n,m;
ll a[N], b[N], dp[N][N], ans;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i<=n; i++) cin >> a[i] >> b[i];

	for(int i =0; i <= n; i++)
	{
		for(int j= 0; j<=n ;j++)
		{
			dp[i][j] = INF;
		}
	}

	dp[1][0] = 0;
	for(int i = 1; i <=n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			for(int v= 1; v<=n; v++)
			{
				dp[j][i] = min(dp[j][i],max(dp[v][i-1],(abs(a[j] - a[v]) + abs(b[j] - b[v]))));
			}
		}
	}

	while(m--)
	{
		ll s;
		cin >> s;

		int l = 1, r = n;
		while(l < r)
		{
			int mid = (l+r)/2;
			if(dp[n][mid] <= s) r=mid;
			else l = mid+1;
		}
		ans+=l;
	}

	cout << ans;
}