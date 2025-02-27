#include <bits/stdc++.h>

using namespace std;

void d(int n, string s)
{
	if (n == -1)
	{
		return;
	}
	if (n == 0)
	{
		cout << s << "E\n";
		return ;
	}
	d(n-1, s+"--\n");
	d(n-2, s+"||\n");
}

int main()
{
	int n;
	string s = "";
	cin >> n;
	d(n,s);
	
	
	
}
