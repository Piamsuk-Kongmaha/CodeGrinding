#include <bits/stdc++.h>

using namespace std;



int main() 
{
	int d,g;
	cin >> d >> g;
	
	int m1[d][g],m2[d][g],ans[d][g];
	
	for (int i = 0; i < d ; i++)
	{
		for (int j = 0; j < g ; j++)
		{
			cin >> m1[i][j];
		}
	}
	for (int i = 0; i < d ; i++)
	{
		for (int j = 0; j < g ; j++)
		{
			cin >> m2[i][j];
		}
	}
	for (int i = 0; i < d ; i++)
	{
		for (int j = 0; j < g ; j++)
		{
			ans[i][j] = m1[i][j] + m2[i][j];
		}
	}
	for (int i = 0; i < d ; i++)
	{
		for (int j = 0; j < g ; j++)
		{
			cout << ans[i][j] << " ";
		
		}
		cout << endl;
	}
		
}
