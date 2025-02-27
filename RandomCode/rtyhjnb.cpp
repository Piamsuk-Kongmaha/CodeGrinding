#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,n = 0;
	int b[5] = {0};
	
	cin >> a;
	
	for(int i =1; i <= a; i++)
	{
		for(int j =0; j < 5; j++)
		{
			cin >> n;
			b[j]+=n;
		}
	}
	
	double cake = b[0] + b[1]*0.75 + b[2]*0.50 + b[3]*0.25 + b[4]*0.125;
	
	cout << ceil(cake);
}
