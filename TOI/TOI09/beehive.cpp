#include <bits/stdc++.h>

using namespace std;

int m,n;
vector<vector<int>> mp, dp;
vector<vector<long long>> ways;

pair<int, long long> think(int i, int j)
{
	if(i == m-1) return {mp[i][j], 1LL};

	if(dp[i][j] != -1) return {dp[i][j] , ways[i][j]};

	int maxh = -1e9;
	long long cnt = 0;
	vector<pair<int , int>> moves;

	if(i % 2 == 0)
	{
		if(j - 1 >= 0) moves.push_back({i+1, j-1});
		if(j < n) moves.push_back({i+1, j});
	}else
	{
		if(j < n) moves.push_back({i+1, j});
		if(j+1 < n) moves.push_back({i+1, j+1});
	}

	for(auto &itr : moves)
	{
		int ni = itr.first, nj = itr.second;
		auto res = think(ni,nj);
		int cad = mp[i][j] + res.first;
		if(cad > maxh)
		{
			maxh = cad;
			cnt = res.second;
		}else if (cad == maxh)
		{
			cnt += res.second;
		}
	}

	dp[i][j] = maxh;
	ways[i][j] = cnt;
	return {maxh, cnt};
}

int main()
{
	cin >> m >> n;
	mp.assign(m, vector<int>(n));
	dp.assign(m, vector<int>(n,-1));
	ways.assign(m, vector<long long>(n, -1));

	for(int i =0; i < m; i++)
	{
		for(int j = 0;j < n; j++)
		{
			cin >> mp[i][j];
		}
	}


	int maxo = -1e9;
	long long wayso = 0;

	for(int j = 0; j < n; j++)
	{
		auto res = think(0,j);
		if(res.first > maxo)
		{
			maxo = res.first;
			wayso = res.second;
		}else if (res.first == maxo)
		{
			wayso += res.second;
		}
	}

	cout << maxo << " " << wayso;
}