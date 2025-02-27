#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	char c;
	cin >> c >> n >> m;
	int k = n*2+1;
	for(int y = 0; y < m; y++)
	{
	
	for(int i = 0; i <k; i++)
	{
		//cout << i << ": ";
		
		for (int x =0 ;x < m; x++)
		{	for(int j= 0; j< k; j++)
			{
			if ((i == j && x==y) || (i+j == 2*n && x+y== m-1)) cout << '#';
			else if (j == i || i+j == 2*n || j == n  || i ==n ) cout << '+';
			else if (j < n-i|| j > n+i || j < i-n || j >= k-i+n) cout << '.';
			else cout << c;
			}	
		}
			cout << '\n';
		
	}
	}
}
