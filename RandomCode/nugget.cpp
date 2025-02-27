#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	if (n < 6)
	{
		cout << "no";
	}
	
	for(int i = 6; i <= n; i++)
	{
		if (i%3 == 0)
		{
			cout << i << '\n';
		}else if (i%20 == 0)
		{
			cout << i << '\n';
			
		} else if((i-20)%3 == 0 && (i-20) >= 6)
		{
			cout << i << '\n';
		}
	}
}
