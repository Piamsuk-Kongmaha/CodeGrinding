#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 4;
	
	for(int i= 1; i <= 2*n ;i++)
	{
		for(int j = 1; j <= 4*n-1;j++)
		{
			cout << "<" << i << "," << j << ">" << " ";
		}
		cout << endl;
	}
}
