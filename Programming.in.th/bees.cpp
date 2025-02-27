#include <bits/stdc++.h>

using namespace std;

int main()
{
	while (true)
	{
		int n, w = 1, s= 0, q = 1, sum =2;
		cin >> n;
		
		if(n < 1)
		{
			break;
		}else
		{
			for(int i = 1; i <= n ; i++)
			{
				w = s+w+q;
				s = w-(q+s);
				sum = s+w+q;
			}
			cout << w << ' ' << sum;
		}
		cout << '\n';
	
	}
	return 0;
}
