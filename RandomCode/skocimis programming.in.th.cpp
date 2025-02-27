#include <bits/stdc++.h>

using namespace std;

int main()
{
	int max,a,b,c;
	cin >> a >> b >> c;
	if((b-a) > (c-b)){
		max = b-a;
	}else {
		max = c-b;
	}
	cout << max-1;
	return 0;
}
