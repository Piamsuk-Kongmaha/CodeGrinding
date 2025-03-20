#include <bits/stdc++.h>

using namespace std;


bool isvisit[1008][1008];
char grid[1008][1008];
int n,m;


bool isValid(int i, int j)
{
	if(i<0)return false;
	if(j < 0) return false;
	if(i >= n) return false;
	if(j >= m) return false;
	if(grid[i][j] == '#') return false;
	return true;
}

void dfs (int i, int j)
{
	isvisit[i][j] = true;
	int dx[4] = {0,0,1,-1};
	int dy[4] = {1,-1,0 ,0};

	for(int s =0; s< 4; s++)
	{
		int n1 = i + dx[s];
		int n2 = j + dy[s];

		if(isValid(n1,n2)){
			if(!isvisit[n1][n2])
			{
				dfs(n1,n2);
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	for(int i =0; i < n; i++)
	{
		for(int j = 0; j< m; j++)
		{
			cin >> grid[i][j];
			isvisit[i][j] = 0;
		}
	}

	int ans = 0;

	for(int i =0; i < n; i++)
	{
		for(int j = 0; j< m; j++)
		{
			if(grid[i][j] == '.' && !isvisit[i][j])
			{
				dfs(i,j);
				ans++;
			}
			isvisit[i][j] = true;
		}
	}

	cout << ans;
}	