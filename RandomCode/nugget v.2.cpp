#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	if (n < 6) cout << "no";
		
	
	for(int i = 6; i <= n; i++)
	{
		if (i%3 == 0) cout << i << '\n';
		else if (i%20 == 0) cout << i << '\n';
		else 
		{
			for (int j = 1; j <= i; j++)
			{
				if (((i-20*j)%3==0 && (i-20*j) >= 6))
				{
					cout << i << '\n';
					break;
				}
			}
			
		}
			
	}
	return 0;
}
