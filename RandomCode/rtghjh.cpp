#include <bits/stdc++.h>

using namespace std;

int gcd(int n, int m)
{
	while (n%m != 0)
	{
		int temp = m;
		m = n%m;
		n = temp;
	}
	return m;
}

int main()

{
	int n,m,k;
	cin >> k;
	cin >> m;
	
	while(--k)
	{
		cin >> n;
		m = gcd(n,m);
	 } 
	cout << m;
}
