#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < 1; j++)
		{
			for (int k = 0; k < s.size() - i-1 ; k++)
			{
				cout << ".";
			}
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < 2; l++) if (l >= j && l < 2-j-1) cout << s[i]; else cout << ".";
			}
			for (int k = 0; k < s.size() - i-1; k++)
			{
				cout << ".";
			}
			cout << '\n';
			
		}
	}
	
	
}
