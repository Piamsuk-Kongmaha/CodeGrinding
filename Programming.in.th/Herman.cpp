#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	
	double para, area;
	
	para = n * 2 * n;
	
	area = M_PI *n * n;
	
	cout << fixed << setprecision(6) << area << '\n' << para;
	return 0;
	
}
