#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,loop = 0;
	cin >> n;
	cout << 1 << " ";
	for (i = 2;i<= n/2; i++)
	{
		if (n%i == 0)
		{
			cout << i << " ";
		}
		loop ++;
	}
	cout << n;
	cout << "\nloop= " << loop;
	return 0;
}
