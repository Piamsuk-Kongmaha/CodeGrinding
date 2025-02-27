#include <bits/stdc++.h>

using namespace std;

int main()
{
	int X,Y;
	
	cin >> X >> Y;
	
	if (X > Y) {
		cout << "2";
	}
	else if (Y%X == 0) {
		cout << Y/X;
	} else
	{
		cout << Y/X+1;
	}
}
