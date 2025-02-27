#include <bits/stdc++.h>

using namespace std;

int main()
{
	char c;
	char t;
	int n;
	cin >> n >> c >> t ;
	
	if (t == 'u' || t=='U')
	{
		for (int i = 0; i < 2*n+1; i++)
	{
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
		cout << endl;
	}
		
	}
	
	if (t == 'D' || t=='d')
	{
		for (int i = 0; i < 2*n+1; i++)
	{
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
		cout << endl;
	}
		
	}
	if (t == 'R' || t=='r')
	{
		for (int i = 0; i < 2*n+1; i++)
	{
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
		cout << endl;
	}
	
	}
	if (t == 'L' || t=='l')
	{
		for (int i = 0; i < 2*n+1; i++)
	{
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
		cout << endl;
	}
}
		
	}
	
	
	 
	
	
