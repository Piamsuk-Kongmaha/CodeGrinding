/*
TASK: fundamental
LANG: C++
AUTHOR: Piamsuk Kongmaha
CENTER: SUT
*/


#include <bits/stdc++.h>


using namespace std;


int primefactor(int k)
{
	int c = 0;
	
	while (k %2 == 0)
	{
		c++;
		k/=2;
	}
	
	for (int i = 3; i<= k/i; i+=2)
	{
		while (k%i==0)
		{
			c++;
			k/=i;	
		}
		
	}
	
	if (k > 1)c++;
	
	return c;
}

int main()
{
	int n,k;
	cin >> n;
	while (n--)
	{
		cin >> k;
		cout << primefactor(k) << '\n';
	}
}
