#include <bits/stdc++.h>

using namespace std;

double avg(double a[5])
{
	double n = 0;
	for (int i = 0; i < 5; i++) 
	{
		n += a[i];
	}
	return n/5;
}

int main()
{
	double a[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	
	cout << avg(a);
	
	
}
