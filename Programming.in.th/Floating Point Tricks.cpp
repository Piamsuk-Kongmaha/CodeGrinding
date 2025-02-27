#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long double q ;
	int n;
	cin >> n;
	
	for(int i =0 ; i < n; i++)
	{
		cin >> q;
		cout << fixed << setprecision(0) << pow(2,q) << '\n';
	}
}
