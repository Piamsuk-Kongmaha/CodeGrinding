#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int n = 8,i = 0,j = 0,mi =1;
	cin >> n;
	int len = n;
	vector<vector<char>> a(n, vector<char> (n,'-'));
	while (i < len || j < len){
		for(int x = i; x < len; x++)
		{
			a[i][x] = '*';
			a[i+len-mi][x] = '*';
		}
		for(int y = j; y < len; y++)
		{
			a[y][j+len-mi] = '*';
			a[y][j] = '*';
		}
		len-=2;
		i+=2;
		j+=2;
		mi+=2;
	}
		
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n ;j++)
		{
			cout << a[i][j];
		}
		cout << '\n';
	}
}
