/*
TASK: goldbach
LANG: C++
AUTHOR: Piamsuk Kongmaha
CENTER: SUT
*/


#include <bits/stdc++.h>

using namespace std;

#define k 300000

int a[k] = {};


int main()
{
	for(int i = 3; i < k/i ; i+=2)
	{
		for(int j = i; j*i <= k; j++)
		{
			a[i*j] = 1;
			
		}
	}
	
	int n,p;
	cin >> n;
	
	while (n--)
	{
		int c =0;
		cin >> p;
		for(int i = 3; i <= p/2; i+=2)
		{
			if(a[i] == 0 && a[p-i] == 0)
			{
				c++;
			}
		}
		cout << c << '\n';
		
	}
	return 0;
	
}
