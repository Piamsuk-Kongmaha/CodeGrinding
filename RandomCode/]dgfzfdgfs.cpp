#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.length();
	for(int i = n/2; i  >= 1; i--)
	{
		if(n%i == 0)
		{
			int round = n/i;
			string newstr = "";
			string pt = s.substr(0,i);
			while(round--)
			{
				newstr+=pt;
			}
			if(newstr == s)
			{
				cout << pt << '\n';	
			}	
		}
	}
}
