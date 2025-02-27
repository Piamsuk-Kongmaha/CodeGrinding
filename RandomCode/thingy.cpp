/*
TASK:spiral
LANG:C++
AUTHOR : Piamsuk Kongmaha
CENTER: SUT
*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	cin.tie(NULL);
	
	char ch;
	short b,x,y,s,d;
	cin >> b >> x>> y >> s >> d >> ch;
	
	int a[b+1][b+1];
	
	for(int i = 0; i< b+1; i++)
	{
		for(int j =0; j < b+1 ; j++)
		{
			a[i][j] = 0;
		}
	}
	
	a[y][x] = 1;
	
	
	int go = 1;
	
	if (d == 0)
	{
		a[y][++x] = 1;
	
	for(int i = 1; i < s; i++)
	{
		go = i%4;
		if (go == 1)
		{
			for(int j = 1; j <= i+1; j++)
			{
				a[++y][x] = 1;
			}
		}
		else if (go == 2)
		{
			for(int j = 1; j <= i+1; j++)
			{
				a[y][--x] = 1;
			}
		}
		else if (go == 3)
		{
			for(int j = 1; j <= i+1; j++)
			{
				a[--y][x] = 1;
			}
		}else
		{
			for(int j = 1; j <= i+1; j++)
			{
				a[y][++x] = 1;
			}
		}
	}
}else
{
	a[y][--x] = 1;

	
	
	for(int i = 1; i < s; i++)
	{
		go = i%4;
		if (go == 1)
		{
			for(int j = 1; j <= i+1; j++)
			{
				a[++y][x] = 1;
			}
		}
		else if (go == 2)
		{
			for(int j = 1; j <= i+1; j++)
			{
				a[y][++x] = 1;
			}
		}
		else if (go == 3)
		{
			for(int j = 1; j <= i+1; j++)
			{
				a[--y][x] = 1;
			}
		}else
		{
			for(int j = 1; j <= i+1; j++)
			{
				a[y][--x] = 1;
			}
		}
	}
}
	
	for(int i =0; i < b; i++)
	{
		for(int j =0; j < b; j++)
		{
			if(a[i][j])
			{
				cout<< ch;
			}else
			{
				cout << ".";
			}
		}
		cout << '\n';
	}
	return 0;
}
