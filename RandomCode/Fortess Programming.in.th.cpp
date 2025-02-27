#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	long long int a,b;
	
	for(int i = 0; i < 20; i++ )
	{
		cin >> a >> b;
		long long int ans;
		
		ans = (b - (a/2 - b ) + 1);
		
		if (ans < 0 ||  a/2-b < 0 || a%2 == 1)
		{
			cout << "0\n";
		}else
		{
			cout << ans << "\n";
		}
	}
}
