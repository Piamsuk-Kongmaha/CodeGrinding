#include <bits/stdc++.h>

using namespace std;

int main()
{
	int sum=0,sum2;
	int v[10];
	for(int i = 0; i < 9; i++)
	{
		cin >> v[i];
		sum+=v[i];
	}
	
	sum2 = sum - 100;
	
	
	for(int i = 0; i < 9; i++)
	{
		int c = 0;
		for(int j = 0; j < 9 ;j++)
	 {
			if(i == j) continue;
			if(v[i] + v[j] == sum2)
			{
				c++;
				break;
			}
		}
		if (c == 0) cout << v[i] << '\n';
	}
	return 0;
	
	
}
