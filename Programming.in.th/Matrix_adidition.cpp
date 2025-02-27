#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int m,n,temp;
	
	cin >> m >> n;
	int a[m][n];
	
	for(int i =0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i =0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> temp;
			a[i][j] += temp;
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
	
}
