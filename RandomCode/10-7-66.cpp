#include<bits/stdc++.h>

using namespace std;



int main()
{
	float s = clock();
	
	for (int i = 0; i <= 255; i++)
	{
		for (int k = 7;k >= 0; k--)
	{
		int mask = (1 << k);
		
		if (i & mask)
		{
			cout << "1";
		} else
		{
			cout << "0";
		}
	}
	
	cout << endl;
}
	float e = clock();
	
	cout << fixed << setprecision(6) << (e-s)/CLOCKS_PER_SEC;
	
	return 0;
	
	
}
