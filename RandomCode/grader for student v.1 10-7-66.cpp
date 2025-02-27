#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	
	cin >> a >>b;
	
	if (a + b >= 44 && a >= 20 && b >= 20 )
	{
		cout << "Passed";
	} else if (a + b >= 44 && a < 20 || b < 20 )
	{
		cout << "re - exam";
	}else
	{
		cout << "Failed";
	}
}
