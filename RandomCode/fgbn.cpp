#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n-i; j++)
		{
			cout << ".";
		}
		for(int k = 1; k <= i+1; k++)
		{
			if (k == 1 || k == i+1 || i == n )cout << "* ";
			else cout << ".";
		}
		cout << endl;
	}
}

