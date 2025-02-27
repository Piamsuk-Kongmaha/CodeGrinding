#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[36];
	long t,n;
	cin >> t;
	for (int i = 1; i <= t ;i++)
	{
		int count = 0;
		cin >> n;
		while(n%2 == 0)
	{
		count++;
		n/=2;
	}
	
		for(int k=3; k <= n/k; k+=2)
		{	
		while (n%k == 0)
		{
			count++;
			n/=k;
		}
		}
		a[i] = count+(n%2);
	}
	for(int l = 1; l <= t; l++)
	{
		cout << a[l] << endl;
	}
}
