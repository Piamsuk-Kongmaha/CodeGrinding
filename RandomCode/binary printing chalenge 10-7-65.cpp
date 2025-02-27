#include<bits/stdc++.h>

using namespace std;

int n = 1;

void binum(int num)
{
	for (int i = 9;i >= 0; i--)
	{
		int mask = (1 << i);
		
		if (num & mask)
		{
			cout << "1";
		} else
		{
			cout << "0";
		}
	}
	n++;
	cout << '\n';
}


int main()
{
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	float s = clock();
	for (int i = 0; i <= 1023; i++)
	{
		cout << n << ". = ";
		binum(i);
	}
	float e = clock();
	cout << fixed << setprecision(6) << (e-s)/CLOCKS_PER_SEC;
	cout << '\n' << n;
	return 0;
	
	
}
