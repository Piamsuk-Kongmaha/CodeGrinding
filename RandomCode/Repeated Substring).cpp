#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	string s;
	int n;
	cin >> n;
	
	for(int k = 0 ; k < n; k++)
	{
		bool ch = false;
		cin >> s;
		string tmp = "";
		int n = s.size();
		for(int i = n/2; i >= 1; i--)
		{
			if(n%i == 0)
			{
				int round = n/i;
				cout << round;
				string newstr = "";
				string pt = s.substr(0,i);
				while(round--)
				{
					newstr += pt;
				}
				if (newstr == s)
				{
					tmp = pt;
					ch = true;
				}*/
			}
		}
		if (ch == false)
		{
			cout << s << '\n';
		}
		if (ch == true)
		{
			cout << tmp << '\n';
		}
	}
	return 0;
	
	
}
