#include <bits/stdc++.h>

using namespace std;

int main()
{
	int g[9] = {};
	int n = 0;
	
	for (int i = 0; i < 9; i++)
	{
		cin >> g[i];
		n+=g[i];
	}
	
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (g[i]+g[j] == n-100)
			{
				g[i] = -1;
				g[j] = -1;
			}
		}
	}
	
	for (int i = 0; i < 9; i++)
	{
		if (g[i] > 0)
		{
			cout << g[i] << '\n';
		}
	}
	return 0;
}
