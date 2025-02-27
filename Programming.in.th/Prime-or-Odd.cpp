#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if(s == "2" || ((s[s.length() - 1 ]- '0') %2 )) cout << "T" << '\n';
		else cout << "F" << '\n';
	}
	return 0;
	
}

