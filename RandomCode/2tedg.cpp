#include <bits/stdc++.h>

using namespace std;

int g(int n , int m)
{
	while (n%m !=0)
	{
		int temp = m;
		m = n%m;
		n = temp;
	}
}

int main()
{
	int n,m,k;
	cin >> k >> m;
	while (--k)
	{
		cin >> n;
		m = n*m/g(n,m);
	}
	cout << m;
	
}
