#include <bits/stdc++.h>

using namespace std;

struct FOOT
{
	char name[20];
	int s;
	int d;
	int score;
};

bool cmp(FOOT a, FOOT b)
{
	if(a.score > b.score)
	{
		return a.score > b.score;
	}
	if (a.d > b.d)
	{
		return a.d > b.d;
	}
	return a.s > b.s;
}

FOOT team[4];
int goal[4][4];

int main()
{
	for (int i = 0; i < 4; ++i)
	{
		cin >> team[i].name;
	}
	
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cin >> goal[i][j];
		}
	}
	
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (i==j)
			{
				continue;
			}
			if (goal[i][j] > goal[j][i])
			{
				team[i].score+=3;
			}else if (goal[i][j] == goal[j][i])
			{
				team[i].score+=1;
			}
			
			team[i].d  += goal[i][j] - goal[j][i];
			team[i].s += goal[i][j];
		}
	}
	
	sort(team, team+4,cmp);
	
	for (int i = 0; i < 4; ++i)
	{
		cout << team[i].name << " " << team[i].score << endl;
	}
	
	
}
