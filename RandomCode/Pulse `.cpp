#include <bits/stdc++.h>

using namespace std;
int n,co = 0,base = 2;
string st;


void think(int deep)
{
	if (deep == n)
	{
		cout << st << endl;
	}else
	{
		int i;
		for(i = 0; i < base; i++)
		{
	
				st += '0' + i;
			think(deep+1);
			st.erase(st.length() - 1, 1);
		}

		
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	n = 3;
	think(0);
	return 0;

}



