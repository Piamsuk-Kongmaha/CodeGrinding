#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,loop = 0;
	set<int> s;
	cin >> n;
	cout << 1 << " ";
	for (i = 2;i<= sqrt(n) ; i++)
	{
		if (n%i == 0)
		{
			s.insert(i);
			s.insert(n/i);
		}
		loop ++;
	}
	for(int n:s)
	{
		cout << n <<" ";
	}
	cout << n;
	cout << "\nloop= " << loop;
	return 0;
}
