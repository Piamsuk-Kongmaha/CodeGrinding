#include <bits/stdc++.h>

using namespace std;

queue<int> a;

int main()
{
	int n,m;
	cin >> n >> m;
	
	for(int i =1 ; i <= n; i++)
	{
		a.push(i);
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j =1 ; j < m; j++)
		{
			a.push(a.front());
			a.pop();
		}
		
		cout << a.front() << " ";
		a.pop();
	}
}
