#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	string g = "";
	
	getline(cin, s);
	
	for(int i =0 ; i< s.size(); i++)
	{
		g+=s[i];
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
		{
			i+=2;
		}
	}
	cout << g;
}
