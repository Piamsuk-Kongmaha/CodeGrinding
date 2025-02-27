#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(NULL) -> sync_with_stdio(false);
	int K,N,M,u,v,ans{0},i,j;
	cin >> K >> N >> M;
	vector<vector<int>> stairs(N+1);
	vector<int> power(N + 1, 1e5);
	power[1] = 0;
	for(int i{1}; i <= M ; i++)
	{
		cin >> u >> v;
		stairs[u].push_back(v);
	}
	for(int i{1}; i <= N; i++)
	{
		int k{power[i] + 1};
		for(int j{0}; j < stairs[i].size(); j++)
		{
			int l{ stairs[i][j]};
			power[l] = min(power[l], k);
		}
	}
	while (power[N] > K) N--;
	cout << N << '\n';
}
