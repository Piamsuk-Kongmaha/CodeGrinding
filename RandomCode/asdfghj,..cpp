#include <bits/stdc++.h>

using namespace std;

int main()
{
	for(int i = 0; i < 5; i++)
	{
		
		for(int j = 0; j < 5-i; j++)
		{
			cout << " ";
		}
		for(int j = 1; j <= 5; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
