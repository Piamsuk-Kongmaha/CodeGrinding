#include <iostream>
#define ll long long
#define pii pair<int, pair<int,int>>
using namespace std;

void think (char a, char b, char c, int n)
{
	if (n > 0)
	{
		think(a,c,b ,n-1);
		cout << "Move disk " << n << " from " << a << " to " << c << endl;
		think(c,a,b,n-1);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	think('A', 'B', 'C', 3);

	return 0;

}



