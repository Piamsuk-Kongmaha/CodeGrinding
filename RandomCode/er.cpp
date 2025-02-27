#include <bits/stdc++.h>

using namespace std;

vector<long long int> meow;
vector <long long int>::iterator result;
pair<vector<long long int>::iterator, vector<long long int>::iterator> ip;

int main()
{
	long long int maxnum = 0;
	int maxc = 0, d = 0;
	for(int i =0; i <= 50; i++)
	{
		long long int n = (i*i*i*i*i*i) - 58*(i*i*i*i*i) + 1392*(i*i*i*i) - 17694*(i*i*i) + 125631*(i*i) - 472392*i + 734832;
		meow.push_back(n);
	}
	sort(meow.begin(), meow.end());
	result = max_element(meow.begin(), meow.end());
	cout << *result << '\n';
	result = min_element(meow.begin(), meow.end());
	cout << *result << '\n';
	cout << (meow[25] + meow[24])/2 << endl;
	for(int i = 0; i < 50; i++)
	{
		int c = 0;
		for(int j = 0; j < 50; j++)
		{
			if (meow[j] == meow[i])
			{
				c++;
			}
		}
		if (c > maxc)
		{
			maxnum = i;
			maxc = c;
		}
		if (meow[i] % 100 == 0)
		{
			d++;
		}
		
	}
	cout << maxnum << " " << d;
}
