#include <bits/stdc++.h>

using namespace std;

int main()
{
	int r,c,n;
	
	cin >> n;
	
	for (r = 1;r <= n; r++)
	{
		for (c = 1; c <= n; c++)
		{
			if (r == 1 || c==1 || r == n || c == n || r == c || r + c == n+1)
			{
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		
		cout << endl;
	}
	
	
}
