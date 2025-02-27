#include <bits/stdc++.h>

using namespace std;

char mine[102][102] = {};

int CM(int y, int x)
{
	char m = mine[y][x];
	mine[y][x] = '*';
	if(m == '*') return 0;
	if (m>0) return (int)m;
	if (!m) return CM(y+1,x) + CM(y-1,x)+ CM(y,x+1)+ CM(y,x-1)+ CM(y+1,x+1)+ CM(y+1,x-1)+ CM(y-1,x+1)+ CM(y-1,x-1);
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n,x,y;
	char ip;
	cin >> n >> x >> y;
	for(int i = 0; i <= n+1; i++)
	{
		mine[0][i] = mine[i][0] = mine[n+1][i] = mine[i][n+1] = '*';
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <=n; j++)
		{
			cin >> ip;
			if(ip == '*')
			{
				mine[i][j] ='*';
				if('*'!=mine[i-1][j-1]) mine[i-1][j-1]++;
				if('*'!=mine[i-1][j]) mine[i-1][j]++;
				if('*'!=mine[i-1][j+1]) mine[i-1][j+1]++;
				if('*'!=mine[i][j-1]) mine[i][j-1]++;
				if('*'!=mine[i+1][j+1]) mine[i+1][j+1]++;
				if('*'!=mine[i+1][j]) mine[i+1][j]++;
				if('*'!=mine[i+1][j-1]) mine[i+1][j-1]++;
				if('*'!=mine[i][j+1]) mine[i][j+1]++;
			}
		}
	}
	cout << CM(y,x);
}
