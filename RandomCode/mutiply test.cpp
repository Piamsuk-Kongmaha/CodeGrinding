#include <bits/stdc++.h>

using namespace std;

int time(int x, int y)
{
	if (y == 1)
	{
		return x;
	}
	return x+time(x,y-1);
}

int main()
{
	int x = 5;
	int y = 10;
	
	cout << time(x,y);
}
