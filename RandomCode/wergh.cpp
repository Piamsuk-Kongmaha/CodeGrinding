#include <bits/stdc++.h>

using namespace std;


int main()
{
	int a,i,j,v,m;
	
	cin >> a;
	
	int b[10001] = { };
	
	for (int i = 0; i < a; i++)
	{
		cin >> v;
		b[v]++;
	}
	for (int i = 0; i < 10001; i++)
	{
		if(m < b[i]) m=b[i];
	}
	for (int i = 0; i < 10001; i++)
	{
		if(m == b[i]) cout << i << " ";
	}
	
}
