#include <bits/stdc++.h>

using namespace std;

bool c(int n) {
	if (n = 2) return true;
	if (n < 2 || n%2==0) return false;
	if (n < 9) return true;
	int i = 3;
	for(; i <= sqrt(n); i+=2)
	{
		if (n%i == 0) return false;
		
	}
}

int main ()
{
	int n;
	cin >> n;
	
	if (c(n)) cout << "yes";
	else cout << "no";
}
