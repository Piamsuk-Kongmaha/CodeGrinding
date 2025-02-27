#include <iostream>
#define ll long long
#define pii pair<int, pair<int,int>>
using namespace std;
string st;
int n,k,co=0,count0 = 0;

void think(int deep)
{
	if (deep==n) 
	{
		cout << ++co << ". " << st << endl; 		
	}else
	{
		if (st==" " || st[deep-1]!='0')
		{
			st += '0';
			count0++;
			if (count0 <= k ) think(deep+1);
			st.erase(st.length()-1, 1);
			count0--;
		}
		
		st += '1';
		think(deep+1);
		st.erase(st.length() -1, 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	think(0);

	return 0;

}



