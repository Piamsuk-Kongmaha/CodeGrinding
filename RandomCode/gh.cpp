#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int k = n;
	int c = 2;
	
	for(int i = 1; i <= n; i++)
	{
	
		if (c > n+1)
		{
			break;
		}
		for(int q = 0; q < c; q++)
		{
		for(int j = 0; j < n-q; j++) cout<< " ";
		for(int j = 0; j < 2*q+1; j++) cout << "*";
		
		cout << '\n';
		}
		
		c++;
		
	}
	for(int i = 0; i < n; i++) cout << " ";
	
	cout << "|" << '\n';
	
	for(int i = 0; i < n; i++) cout << "=";
	cout << 'V';
	for(int i = 0; i < n; i++) cout << "=";
	
	return 0;
	
	
}
