#include <bits/stdc++.h>

using namespace std;

int main()
{
	int i,x,count = 0;
	int temp[50] = {0};
	
	for (i=0;i < 10; i++)
	{
		cin >> x;
		
		if (temp[x%42] == 0)
		{
			count++;
			temp[x%42] = 1;
		}
	}
	cout << count;
}
