#include <bits/stdc++.h>

using namespace std;

char com,g,x,y;

int n;
int a[28] = { };

int main()
{
	while (true)
	{
		cin >> com;
		
		if (com == '=')
		{
			cin >> g >> n;
			a[g - 'A'] = n;
		}
		else if (com == '#')
		{
			cin >> g;
			cout << a[g - 'A'] << '\n';
		}
		else if (com == '+')
		{
			cin >> x >> y;
			a[x - 'A'] += a[y - 'A'];
		}
		else if (com == '-')
		{
			cin >> x >> y;
			a[x - 'A'] -= a[y - 'A'];
		}
		else if (com == '*')
		{
			cin >> x >> y;
			a[x - 'A'] *= a[y - 'A'];
		}
		else if (com == '/')
		{
			cin >> x >> y;
			a[x - 'A'] /= a[y - 'A'];
		}
		else if (com == '!')
		{
			cout << "!";
			return 0;
		}
	}
}
