#include <bits/stdc++.h>
// made in Devc++ NAJA;;;;
using namespace std;

int m,maxh,maxw;
char c[200][200];


void making(int s, int h)
{
	for(int i = 1; i <=h; i++)
		{
			for(int j =1; j <=h*2; j++)
			{
				if(c[i][j+s-1] == 'X')continue;
				else if (i == j && c[i][j+s-1] == '\\') c[i][j+s-1] = 'v';
				else if (i==j) c[i][j+s-1] = '/';
				else if (i+j == h*2+1 && c[i][j+s-1] == '/') c[i][j+s-1] = 'v';
				else if (i+j == h*2+1) c[i][j+s-1] = '\\';
				else if (i<h && i<j&& i+j <= h*2) c[i][j+s-1] = 'X';
			}
		}
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> m;
	fill_n(c[0],200*200,'.');
	while(m--)
	{
		int s,h;
		cin >> s>> h;
		maxh = max(maxh,h);
		maxw = max(maxw, s+h*2-1);
		making(s,h);
	}
	
	for(int i = maxh; i > 0; i--)
	{
		for(int j = 1; j <= maxw; j++)
		{
			cout << c[i][j]	;
		}
		cout << endl;
	}
}
