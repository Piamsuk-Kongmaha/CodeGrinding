#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,q,win;
	
	for (int i = 0; i < 5;i++)
	{
		int sum = 0;
		for(int j =0; j < 4; j++)
		{
			cin >> q;
			sum += q;
		}
		if (sum > n)
		{
			n = sum;
			win = i + 1;
			
		}
	}
	
	cout << win << " " << n;
	
}
