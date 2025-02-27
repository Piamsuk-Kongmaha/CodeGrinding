#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n,k,b = 0;
	cin >> n >> k;
	int v1[1001];
	memset(x,0,n);
	for (int i = 2; i<= n; i++)
	{
		for (int j = i; j<= n; j+=i)
		{
			if(v1[j] == 0)
			{
				v1[j] = 1;
				b++;
			}
			if (b == k)
			{
				cout << j;
				return 0;
			}
		}
	}
}
