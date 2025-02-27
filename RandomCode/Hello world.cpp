#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	
	cin >> n >>m;
	
	int k = 2*n+1;
	
	for(int y = 0 ; y < m ; y++)
	{
		
	for(int i = 0; i < k ; i++)
	{
		for(int x = 0 ;x < m; x++)
		{
		for(int j = 0 ; j < k ;j++)
		{
			if((i == j && x == y) || (i+j==k-1 && x + y == m-1)) cout << "#";
			else if(i == j || i+j == k-1 || i == n || j == n)cout << "+";
			else if(j < n-i || j > i+n || j < i-n || j >= k-i+n ) cout << ".";
			else cout << "*";
		}
	}
	cout << endl;
	}
	}
}
