#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int b[n];
	
	for(int i =0; i < n; i++)
	{
		cin >> b[i];
	}
	
	
	int max = b[0];
	int min = b[0];
	
	
	for(int i =0; i < n; i++)
	{
		
		if(b[i] > max)
		{
			max = b[i];
		}
		if(b[i] < min)
		{
			max = b[i];
		}
	}
	
	cout << min << '\n' << max;
}
