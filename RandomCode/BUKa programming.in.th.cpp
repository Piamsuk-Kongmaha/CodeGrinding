#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	char op;
	string b;
	cin >> a >> op >> b;
	int n = a.size();
	int m = b.size();
	
	if (op == '*')
	{
		cout << "1";
		for (int i = 1; i < (n+m)-1;i++)
		{
			cout << "0";
		}
	}
	
	if (op == '+')
	{
		for(int i = max(n,m); i >= 1;i--)
		{
			if (i==n || i == m)
			{
				if (m == n)
				{
					cout << "2";
				}else
				{
					cout << "1";
				}
			}else
			{
				cout << "0";
			}
		}
	}
}
