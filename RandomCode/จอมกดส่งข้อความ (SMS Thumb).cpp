#include<bits/stdc++.h>

using namespace std;

string key[3][3] = {{"", "ABC", "DEF"},
					{"GHI", "JKL", "MNO"},
					{"PQRS", "TUV", "WXYZ"}};

string type(int x, int y, int m, string msg)
{
	if (x == 0 && y ==0)
	{
		for(int i = 0 ; i < m; i++)
		{
			if (msg.size() == 0)
			{
				break;
			}
			msg.pop_back();
		}
		return msg;
	}
	return msg+key[y][x][(m-1) % key[y][x].size()];
}

int main()
{
	int N,S,M,x,y,i,j,m;
	cin >> N >> S >> M;
	x = (S-1) % 3;
	y = (S-1) / 3;
	
	string msg;
	msg = type(x,y,M,msg);
	for(int k = 0 ; k < N-1; k++)
	{
		cin >> i >> j >> m;
		x += i;
		y += j;
		msg = type(x,y,m,msg);
	}
	
	if (msg.size() == 0)
	{
		cout << "null";
	}else
	{
		cout << msg;
	}
}
