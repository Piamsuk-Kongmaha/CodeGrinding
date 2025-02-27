#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	for(int i = 1; i <= x; i++)
	{
		for(int j = 1; j <= i; j++ )
		{
			if (j == 1 || j == i || i == x)
			{
				cout << "*";
			}else
			{
				cout << " ";
			}
		}
		cout << '\n';
	}
}
