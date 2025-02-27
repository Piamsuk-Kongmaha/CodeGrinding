#include <bits/stdc++.h>

using namespace std;

int main()
{
	char sp = ' ';
	string s = "ANNA";
	int n = 4;
	for(int i = 0; i < n;i++)
	{
		for(int j = 1; j < 2*n-i ; j++) cout << sp;
		for(int j = 0; j < 2*i+1; j++) cout << '*';
		cout << '\n';
	}
	for(int i = 0; i < n;i++)
	{
		for(int j = 1; j < n-i ; j++) cout << sp;
		for(int j = 0; j < 2*i+1; j++) cout << '*';
		for(int j = i+1; j < 2*n-i ; j++) cout << sp;
		for(int j = 1; j <= 2*i+1; j++) cout << '*';
		cout << '\n';
	}
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < i ; j++) cout << sp;
		for(int j = i+1; j < 2*n-i; j++) cout << '*';
		for(int j = 0; j < 2*i+1; j++) cout << sp;
		for(int j = i+1; j < 2*n-i ; j++) cout << '*';
		cout << '\n';
	}
	for(int i = 0; i < n;i++)
	{
		for(int j = 0; j < i+n; j++) cout << sp;
		for(int j = i+1; j < 2*n-i ; j++) cout << '*';
		
		cout << '\n';
	}
}
