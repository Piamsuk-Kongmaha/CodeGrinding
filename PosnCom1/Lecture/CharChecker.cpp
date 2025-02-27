#include <bits/stdc++.h>

using namespace std;
int main()
{	
	string s;
	cin >> s;

	unsigned int count[26] = {};
	int len = s.length();
	for(int i =0; i < len; i++)
	{
		count[s[i]-'A']++;
	}
	for(int i = 0; i < 26; i++)
	{
		if(count[i] > 0)
		{
			cout << char(i+'A') << " " << count[i] << '\n';
		} 
	}
}