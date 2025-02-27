/*
TASK: sudoku
LANG: C++
AUTHOR: Piamsuk Kongmaha
CENTER: SUT
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int r,n,sum;
	string a;

	for(int i = 0; i < 9 ; i++)
	{
		n = 0;
		sum = 0;
		cin >> a;
		for(int j =0; j < 9; j++)
		{
			
			n += (a[j] - '0');
			
			if(a[j] == '0')
			{
				sum = sum+(j+1)*100+(i+1)*10;
			}
			
		}
		if(n != 55)
			{
				sum = sum-n+55-10;
			}
		
	}
	cout << sum;
}
