#include <bits/stdc++.h>

using namespace std;


int main()
{
	string s;
	cin >> s;
	
	int p = s.size();
	
	int h;
	cin >> h;
	
	for(int i = 0; i < p; i++)
	{
		for(int j = 0; j < h; j++)
		{
			for(int k = 0; k < h*i; k++) cout << '.';
			for(int k = 0; k < p-i; k++)
			{
				for(int l = 0; l < 2*h; l++) if(l >= j && l < 2*h-j-1)cout << s[i]; else cout << '.';
			}
			for(int k = 0; k < h*i; k++) cout << '.';
			cout << endl;
		}
	}
}
