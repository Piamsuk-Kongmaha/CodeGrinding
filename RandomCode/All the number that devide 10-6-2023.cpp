#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int a,b,c,n = 0;
	cin >> n;
	
	for(int i = 1; i < n; i++)
	{
		if (n % i == 0)
		
		{
			a++;
		}
		
		if (a == 2)
		{
			c = i;
		}
		
		if (a == 3)
		{
			b = i;
		}
	}
	
	if (a % 2 != 0)
	{ 
		cout << b;
	}else
	{
		cout << c;
	}
	
	cout << endl <<a;
}
