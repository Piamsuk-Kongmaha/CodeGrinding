#include<bits/stdc++.h>

using namespace std;

main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m,n,k,mx= 0,mem = 0;
	cin >> m >> n >> k;
	int a[m+1][n+1];
	for(int i = 1 ; i <= m; i++)
	{
		for(int j = 1; i <= n ;j++)
		{
			cin >> a[i][j];
			a[i][j] += a[i][j-1] - a[i-1][j-1] + a[i-1][j];
		}
	}
	
	for(int i = k; i <= m; i++)
	{
		for(int j = k; j <= n; j++)
		{
			mem = a[i][j] - a[i-k][j] - a[i][j-k] + a[i-k][j-k];
			mx = max(mx,mem);
		}
		
	
	}
	
	cout << mx;
	return 0;
}
