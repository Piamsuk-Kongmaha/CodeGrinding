#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a,b;
	char n;
	
	cin >> a >> n >> b;
	
	if (a == "0" || b == "0" && n=='*')
	{
		cout << "0";
	}else if (a == "0" && n == '+')
	{
		cout << b;
	}
	else if (b == "0" && n == '+')
	{
		cout << a;
	}else if(n == '*')
	{
		cout << "1";
		for(int i =0; i < a.size() + b.size() -2; i++)
		{
			cout << "0";
		}
	}else
	{
		int min_len = min(a.size(), b.size());
		int max_len = max(a.size(), b.size());
		
		if(min_len == max_len)
		{
			cout << "2";
			for(int i =0; i < max_len-1; i++)
			{
				cout << "0";
			}
		} 
		else
		{
			cout << "1";
			for(int i = 0; i < max_len - min_len - 1 ; i++)
			{
				cout << "0";
			}
			cout << "1";
			for(int i = 0; i < min_len -1; i++)
			{
			cout << "0";
			}
		 } 
		
	}
	return 0;
}
