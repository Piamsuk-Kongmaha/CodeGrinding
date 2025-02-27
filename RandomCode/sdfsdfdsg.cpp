#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	string s;
	int n;
	cin >> n;
	
	for(int k = 0; k < n; k++)
	{
		cin >> s;
		bool ch = false;	
		string tmp = "";
		int l = s.size();
		for(int i = l/2; i >= 1; i--)
		{			
			if (l%i == 0)
			{
				int round = l/i;
				string newstr  = "";
				string pt = s.substr(0,i);
				while (round--)
				{
					newstr += pt;
				}
				if (newstr == s)
				{
					tmp = pt;
					ch = true;
				}
			}
		}
		if (ch == true){
			cout << tmp << '\n';
		}
		if (ch == false){
			cout << s << '\n';
		}
	}
	return 0;
	
	
	
	
}
