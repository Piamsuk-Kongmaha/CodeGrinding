#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n+1][n*2+1];
	memset(a,0,sizeof(a));
	a[0][n] = 1;
	a[n][0] = 1;
	a[n][2*n] = 1;
	
	for(int i = 1; i <=n; i++)
	{
		for(int j = 1 ; j <= 2*n-1;j++)
		{
			a[i][j] = a[i-1][j-1] + a[i-1][j+1];
		}
	}
	for(int i = 0; i <= n; i++)
	{
		for(int j =0; j <= 2*n ;j++)
		{
			
			if(a[i][j] > 0) cout << a[i][j] << " ";
			else cout << "  ";
		}
		cout << "\n";
	}
	
	

	
	

}
