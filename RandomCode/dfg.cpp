#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int k = 2*n+1;
	
	for(int i = 0; i < k; i++)
	{
		for(int j = 0; j < k; j++)
		{
			if (n - i > j || n + i < j || j < i - n  || j >= k-i+n)
			{
				cout << '*';
			}else
			{
				cout << '.';
			}
		
		}
		cout << '\n';
	}
}
