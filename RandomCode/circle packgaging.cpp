#include <bits/stdc++.h>

using namespace std;

int main()
{
	int y;
	cin >> y;
	cout << fixed << setprecision(6);
	
	if(y == 1) cout << "2.000000";
	else if(y%2 == 0) cout << float(y);
	else if(y == 3) cout << 2+sqrt(3);
	else cout << y-3+2*sqrt(3);		
}
