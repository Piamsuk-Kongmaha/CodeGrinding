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
	cin >> r;
	for(int q = 0; q < r; q++)
	{
	string a = "";
	sum = 0;
	for(int i = 0; i < 9 ; i++)
	{
		n = 0;
		cin >> a;
		for(int j =0; j < 9; j++)
		{
			
			n += (a[j] - '0');
			if(a[j] == '0')
			{
				sum = sum+(j+1)*100+(i+1)*10;
			}
			
		}
		if(n < 45)
			{
				sum = sum-n+45;
			}
		
	}
	cout << sum << '\n';
	}
}
