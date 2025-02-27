#include <bits/stdc++.h>

using namespace std;

string s;

void cat(int x, int y)
{
	if (x==0 || y ==0)
	{
		cout << s << endl;
		return;
	}
	if (x > 0)
	{
		s+="W ";
		cat(x-1, y);
		s.pop_back();
		s.pop_back();
	}
	if (y > 0)
	{
		s+="L ";
		cat(x, y-1);
		s.pop_back();
		s.pop_back();
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int k,a,b;
	cin >> k >> a >>b;
	cat(k-a,k-b);
}
