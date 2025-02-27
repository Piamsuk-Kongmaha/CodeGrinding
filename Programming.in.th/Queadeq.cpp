#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n[3];
	vector<int> a,b,c,d;
	cin >> n[0] >> n[1] >> n[2];
	for(int i = -100; i < 100; i++)
	{
		for(int j = -100; j<100; j++)
		{
			if(i*j == n[0] && i>0 && j>0 && i<=j)
			{
				a.push_back(i);
				c.push_back(j);
			}
			if(i*j == n[2])
			{
				b.push_back(i);
				d.push_back(j);
			}
		}
	}
	
	for(int i = 0; i < sizeof(a); i++)
	{
		for(int j = 0; j < sizeof(b); j++)
		{
			if((a[i] * d[j]) + (c[i] * b[j]) == n[1])
			{
				cout << a[i] << " " << b[j] << " " << c[i] << " " << d[j];
				return 0;
			}
		}
	}
	cout << "No Solution";
	return 0;
}
