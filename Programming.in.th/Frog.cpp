#include <bits/stdc++.h>

using namespace std;

int main()
{
	float x,y;
	cin >> x >> y;
	if (x>y) cout << '2';
	else cout << ceil(y/x);
}
