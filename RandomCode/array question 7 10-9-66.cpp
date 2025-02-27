#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n[7] = { };
	
	for (int i = 0; i < 7; i++)
	{
		cin >> n[i];
	}
	
	for (int i = 0; i <= 7; i++)
	{
		for (int j =0; j <= 7; j++)
		{
			if (n[j] < n[j+1])
			{
				int temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
		}
	}
	
	for (int i = 0; i<3; i++)
	{
		cout << n[i] << " ";
	}
}
