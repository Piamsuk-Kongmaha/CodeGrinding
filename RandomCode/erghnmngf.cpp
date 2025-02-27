/*
TASK:sheild
LANG:C++
AUTHOR : Piamsuk Kongmaha
CENTER: SUT
*/

#include <bits/stdc++.h>

using namespace std;


int main()
{
	char c = 'x';
	int n = 4 ,m = 3;
	cin >> c >> n >> m;
	int k = 2*n+1;
	for (int y = 0; y < m ; y++)
	{
		

	for (int i = 0; i < k; i++ )
	{
		for(int x = 0; x < m; x++)\
		{
			
	
		for(int j = 0; j < k; j++)
		{ 
			if ((i==j && x == y) || (i+j == 2*n && x+y == m-1)) cout << '#';
			else if (i == j || i+j == 2*n || i == n || j == n ) cout << '+';
			else if (j < n - i || i-j > n || j > n+i|| j >= k-i+n ) cout << ".";
			else cout << c;
		}
		}
		cout << '\n';
	}
	}
}
