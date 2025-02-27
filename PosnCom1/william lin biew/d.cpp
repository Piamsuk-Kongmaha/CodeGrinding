#include<bits/stdc++.h>
using namespace std;

int main()
{	
	string s;
	cin >> s;
	int len = s.size();
	int a,b = 0;
	a = (s[0] - '0')%3;
	b = (s[0] - '0')%11;

	for(int i = 1; i < len ; i++)
	{
		a = (a*10 + int(s[i]-'0'))%3;
		b = (b*10 + int(s[i]-'0'))%11;
	}

	cout << a << ' ' << b;
}