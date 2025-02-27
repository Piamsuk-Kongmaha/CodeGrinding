#include <bits/stdc++.h>

using namespace std;

double fac(int num)
{
	if (num == 0 || num == 1) return 1;
	else return num * fac(num-1);
}

int main()
{
	
	int n;
	cin >> n;
	float s = clock();
	if(n %2 == 1) n++;
	
	cout << fixed << setprecision(0) << fac(n)/pow(fac(n/2),2) << endl;
	float e = clock();
	cout << fixed << setprecision(6) << (e-s)/CLOCKS_PER_SEC;
	return 0;
	
}
