#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 3;
	
	char a[n][n];
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++ )
		{
			if(i >= j) a[i][j] = '*';
			else a[i][j] = ' ';
		}
	}
	
	
	for(int i = 0; i < n; i++)
		{
			for(int k = 0 ; k <= i ;k++)
			{
				
			for(int j = 0; j < n; j++ )
		    {
		    	cout << a[i][j] ;
		    }
		    }			
			cout << '\n';
	
	    }
	
	
	return 0;
}

