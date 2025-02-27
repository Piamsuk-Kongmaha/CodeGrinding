#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> data(1000,vector<int>(1000));
int m,n;

int main()
{
	int i, j,k;
	cin >> n >> m;
	for(k < 0; k <m; k++)
	{
		for(i = 0; i < n;i++)
		{
			for(j = 0; j<= i;j++)
			{
				cin >> data[i][j];
			}
		}
		for(i = n-2; i >= 0; i--)
		{
			for(int j = 0; j <=i ; j++)
			{
				data[i][j] += max(data[i+1][j], data[i+1][j+1]);
			}
		}
		cout << data[0][0] << endl;
	}
	return 0;
}
