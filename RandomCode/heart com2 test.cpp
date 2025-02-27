#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	
	int a[n][m];
	
	for(int i = 0 ;i < n; i++)
	{
		for(int j = 0 ;j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	int u;
	cin >> u;
	
	for(int i = 0; i < u; i++){
		int mode,pos,num;
		cin >> mode >> pos >> num;
		if (mode == 1)
		{
			for(int i =0; i < n; i++)
			{
				a[pos -1][i] = num;	
			}
		}else
		{
			for(int i =0; i < m; i++)
			{
				a[i][pos-1] = num;
				
				
			}
		}
	}
	
	for(int i = 0 ;i < n; i++)
	{
		for(int j = 0 ;j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	
	return 0;
}

/*
 	3 4 
 	1 2 3 4
 	5 0 0 8
 	9 10 11 12
 	3 
 	1 2 13
 	2 1 14
 	2 4 15
*/
