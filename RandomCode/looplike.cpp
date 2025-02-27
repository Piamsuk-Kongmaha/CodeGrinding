#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,i,v,m = 0;
	cin >> a;
	int b[10001] = {0};
	
	for (i = 0; i < a; i++)
	{
		cin >> v ;
		b[v]++;
	}
	for (i = 1; i < 10001; i++)
	{
		if(b[i] > m)
		{
			m  = b[i];
		}
	}
	for (i = 1; i < 10001; i++)
	{
		if(b[i] == m)
		{
			cout << i << " ";
		}
	}
}
