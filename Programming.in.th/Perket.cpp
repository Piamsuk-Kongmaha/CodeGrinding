#include <bits/stdc++.h>

using namespace std;

long best = 1000000000;
int a[11], b[11];
int n;

void think(int i, int s, int q)
{
	if(i == n)
	{
		if(abs(s-q) < best && q > 0)
		{
			best = abs(s-q);
		}
    }else
    {
		think(i+1,s * a[i], q + b[i]);
		think(i+1,s,q);
    }
}
int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
	}
	
	think(0, 1, 0);
	cout << best;
	
}
