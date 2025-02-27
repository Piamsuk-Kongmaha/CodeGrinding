#include <bits/stdc++.h>

using namespace std;

int main()
{
	char sp = ' ';
	string s = "ARSOONG";
	int n = s.size();
	for(int i = 0; i < n;i++)
	{
		for(int j = 1; j < 2*n-i ; j++) cout << sp;
		for(int j = 0; j <= i; j++) cout << s[j] << " ";
		cout << '\n';
	}
	for(int i = 0; i < n;i++)
	{
		for(int j = 1; j < n-i ; j++) cout << sp;
		for(int j = 0; j <= i; j++) cout << s[j] << " ";
		for(int j = i+1; j < 2*n-i ; j++) cout << sp;
		for(int j = 0; j <= i; j++) cout << s[j] << " ";
		cout << '\n';
	}
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < i ; j++) cout << sp;
		for(int j = 0; j < n-i; j++) cout << s[j] << " ";
		for(int j = 0; j < 2*i+1; j++) cout << sp;
		for(int j = 0; j < n-i; j++) cout << s[j] << " ";
		cout << '\n';
	}
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < i+n; j++) cout << sp;
		for(int j = 0; j < n-i; j++) cout << s[j] << " ";
		
		cout << '\n';
	}
}
