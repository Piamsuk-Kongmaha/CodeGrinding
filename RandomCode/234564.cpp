#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,b;
	cin >> n;
	int size[5];
	
	for (int i = 1; i<= n; i++)
	{
		for (int j = 0;j < 5; j++)
		{
			cin >> b;
			size[j] += b;
		}
		
	}
	
	double allcakeweneed = size[1]*0.75 + size[2]*0.5 + size[3] * 0.25 + size[4]* 0.125 + size[0];
	
	cout << ceil(allcakeweneed);
}
