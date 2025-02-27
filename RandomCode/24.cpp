#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[] = {20,-12,-15,8,9,14,-32,8,20};
	
	int sum  = 0, maxo = 0;
	
	int s = sizeof(a)/sizeof(a[0]);
	
	for(int i = 0; i < s; i++)
	{
		if (sum+a[i] < a[i])
		{
			sum = a[i];
		}else
		{
			sum += a[i];
		}
		
		maxo = max(maxo,sum);
		
	}
	cout << maxo;

}
