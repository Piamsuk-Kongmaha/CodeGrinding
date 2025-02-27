#include <bits/stdc++.h>

using namespace std;

vector<int> check(10001,0);
vector<int> go;
int main()
{
	int n,maxn = 0;
	cin >> n; 
	
	for(int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		check[temp]++;
	}
	
	for(int i =0; i < 10001; i++)
	{
			maxn = max(maxn,check[i]);
	}
	for(int i =0; i < 10001; i++)
	{
			if(check[i] == maxn)
			{
				cout << i << ' ';
			}
	}
	return 0;
}
