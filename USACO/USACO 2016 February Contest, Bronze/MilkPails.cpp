#include <bits/stdc++.h>

using namespace std;

int32_t main()
{
	freopen("pails.in", "r", stdin);
	int x,y,m;
	cin >> x >> y >> m;
	long long maxn = 0;

	for(long long i = 0; x*i <= m; i++)
	{
		for(int j = 0; j*y <= m; j++)
		{
			if(x*i + y*j > m) continue;
			maxn = max(maxn, x*i + y*j);
		}
	}
	freopen("pails.out", "w", stdout);
	cout << maxn;
	return 0;
}