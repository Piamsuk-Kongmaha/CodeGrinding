#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,loop = 0;
	vector<int> v;
	cin >> n;
	cout << 1 << " ";
	for (i = 2;i<= sqrt(n) ; i++)
	{
		if (n%i == 0)
		{
			v.push_back(i);
			if (n/i != i) v.push_back(n/i);
		}
		loop ++;
	}
	sort(v.begin(),v.end());
	for(int n:v)
	{
		cout << n <<" ";
	}
	cout << n;
	cout << "\nloop= " << loop;
	return 0;
}
