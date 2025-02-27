#include <bits/stdc++.h>

using namespace std;

int main() 
{
	double a,b,r,P;
	
	P = M_PI;
	cin >> r;
	a = r * r * P;
	b = 2 * r * r;
	
	cout << fixed << setprecision(6) << a << endl;
	cout << fixed << setprecision(6) << b;
}
