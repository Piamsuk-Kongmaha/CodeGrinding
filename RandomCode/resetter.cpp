/*
TASK: goldbach
LANG: C++
AUTHOR: Piamsuk Kongmaha
CENTER: SUT
*/


#include <bits/stdc++.h>

using namespace std;

#define k 10000

int a[10000] = { };


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i = 3; i <= k ; i+=2)
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
		for(int i = 3; i < p; i+=2)
		{
			for(int j = i; j < p ;j+=2)
			{
				if(a[i] == 0 && a[j] == 0 && i+j == p)
				{
					c++;
				}
			}
		}
		cout << c << '\n';
		
	}
	return 0;
	
}
