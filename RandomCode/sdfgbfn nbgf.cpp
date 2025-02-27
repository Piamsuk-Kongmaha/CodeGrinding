#include <bits/stdc++.h>

using namespace std;

int main()
{
	char ch = '*';
	int n;
	cin >> n;
	int x,y,l,s,dir[4][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}}, style[2] = {1,-1};
	cin >> x >> y >> l >> s;
	
	vector<vector<char> > screen(n,vector<char>(n,'.'));
	
	for(int i = 0; i< l ; i++)
	{
		for(int j = 0 ;j < i+1; j++)
		{
			if(x >=0 && x < n && y >=0 && y < n)
			{
				screen[y][x] = ch;
			}
			x+=dir[i%4][0] * style[s];
			y+=dir[i%4][1];
		}
	}
	
	for (int i =0; i <n ;i++)
	{
		for(int j = 0; j <n ;j++)
		{
			cout << screen[i][j];
		}
		cout << endl;
	}
}
