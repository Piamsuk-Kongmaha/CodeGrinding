#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x[12][12], f[105];
	memset(f, 0, sizeof(f));
	int n, ans = 0, ph = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j< n; j++)
		{
			cin >> x[i][j];
			f[x[i][j]]++;
		}
	}
	
	for(int i = 0; i < n*n; i++)
	{
		if(f[i]>1) 
		{
			cout << "No"; return 0;
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		ans+= x[0][i];
	}
	
	for(int i = 0; i < n; i++)
	{
		ph = 0;
		for(int j = 0; j < n ;j ++)
		{
			ph+=x[i][j];
		}
		if(ph != ans)
		{
		 	cout  << "No"; return 0;
		 } 
	}
	for(int i = 0; i < n; i++)
	{
		ph = 0;
		for(int j = 0; j < n ;j ++)
		{
			ph+=x[j][i];
		}
		if(ph != ans) 
		{
			cout << "No"; return 0;
		}
	}
	ph = 0;
	for(int i = 0; i < n; i++)
	{
		ph+=x[i][i];
	}
	if(ph != ans)
	{
		cout << "No"; return 0;
	}
	ph = 0;
	for(int i = 0; i < n; i++)
	{
		ph+= x[i][n-i-1];
	}
	if(ph != ans)  
	{
		cout << "No"; return 0;
	}
	cout << "Yes";
	return 0;
	
}
