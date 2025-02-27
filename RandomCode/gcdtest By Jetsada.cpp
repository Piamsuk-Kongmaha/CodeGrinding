#include <iostream>
#define ll long long
#define pii pair<int, pair<int,int>>
using namespace std;


int gcd(int x, int y)
{
	if (y == 0)
	return x;
	else return gcd(y, x%y);
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b);

	return 0;

}


