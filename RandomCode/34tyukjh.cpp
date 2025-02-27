#include <bits/stdc++.h>

using namespace std;


int main()
{
	string s1,s2;
	getline(cin, s1);
	getline(cin, s2);
	int pos = 0, count = 0;
	
	while (pos < s1.size()- s2.size()+1)
	{
		if (s2 == s1.substr(pos,s2.size())) count++;
		
		pos++;
	}
	
	cout << count << '\n';
}
