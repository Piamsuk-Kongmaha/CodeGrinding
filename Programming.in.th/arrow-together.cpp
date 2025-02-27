
#include <bits/stdc++.h>

using namespace std;

int main()
{
	char c;
	string t;
	int n;
	cin >> n >> c >> t ;
	
	int q = t.size();
	
	for (int i = 0; i <= n*2; i++)
	{
		for (int k = 0; k <= q; k++)
	{
		if (t[k] == 'U'){
		
		for(int j = 0; j< 2*n+1;j++)
		{
			if(j == n || i+j == n| j-i == n)
			{
				cout << c << " ";
			}else
			{
				cout << "." << " ";
			}
			
		}
	}
		if (t[k] == 'D'){
		
		for(int j = 0; j< 2*n+1;j++)
		{
			if(j == n ||i+j == 2*n+n || i-j == n)
			{
				cout << c << " ";
			}else
			{
				cout << "." << " ";
			}
			
		}
	}
		if (t[k] == 'R'){
		
		for(int j = 0; j< 2*n+1;j++)
		{
			if(i == n || i+j == 2*n+n| j-i == n)
			{
				cout << c << " ";
			}else
			{
				cout << "." << " ";
			}
			
		}
	}
		if (t[k] == 'L'){
		
		for(int j = 0; j< 2*n+1;j++)
		{
			if(i == n || i+j == n| i-j == n)
			{
				cout << c << " ";
			}else
			{
				cout << "." << " ";
			}
			
		
		}
	}	
		
	}
	cout << endl;
}
}