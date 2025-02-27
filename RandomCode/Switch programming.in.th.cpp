#include <bits/stdc++.h>

using namespace std;

int n;
string s,ss;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> s;
	ss = s+s;
	for(int i = 1; i <=n ; i++)
	{
		if (n%i == 0 && !s.compare(ss.substr(i,n)))
		{
			cout << i;
			return 0;
		}
	}
}
