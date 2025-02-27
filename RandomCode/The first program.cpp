#include <bits/stdc++.h>

using namespace std;


int main()
{
	
	long long int n1,n2,sum;
	cin >> n1 >> n2;
	float s = clock();
	
	long long int GCD1 = n1;
	long long int GCD2 = n2;
	
	
	while (GCD1%GCD2 != 0)
	{
		long long int temp = GCD2;
		GCD2 = GCD1%GCD2;
		GCD1 = temp;
	}
	
	sum = (n1 * n2)/GCD2;
	
	cout << sum << endl;
	
	
	
	float e = clock();
	
	cout << fixed << setprecision(6) << (e-s)/CLOCKS_PER_SEC << "\n";
}
