#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second

int main()
{
	int n,x,y;
	int tx[4] = {0,1,0,-1};
	int ty[4] = {-1,0,1,0};
	cin >> n;
	int mt[n][n];
	cin >> y >> x;
	x --;
	y--;
	for(int i = 0 ; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> mt[i][j];
		}
	}
	
	int max = mt[x][y];
	queue<pair <int,int> > tv;
	bool visited[n][n];
	memset (visited, false, sizeof(visited));
	visited[x][y] = true;
	tv.push({x,y});
	while(!tv.empty())
	{
		pair<int , int> recent = tv.front();
		tv.pop();
		for(int i =  0; i < 4; i++)
		{
			int ax = recent.f + tx[i];
			int ay = recent.s + ty[i];
			if (mt[ax][ay] > mt[recent.f][recent.s] && mt[ax][ay] != 100 & ax >= 0 && ax < n && ay >= 0 && ay < n && !visited[ax][ay])
			{
				visited[ax][ay] = true;
				tv.push({ax,ay});
				if (mt[ax][ay] > max)
				{
					max = mt[ax][ay];
				}
			}
		}
		
	}
	cout << max;
}
