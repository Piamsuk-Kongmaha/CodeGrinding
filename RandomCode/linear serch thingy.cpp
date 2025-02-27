#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[50] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
	int q,l = 0, r = 49;
	cin >> q;
	
	while (l <= r)
	{
		int m =  l+(r-l)/2;
		
		if (a[m] == q)
		{
			cout << "Found it bro";
			return 0;
		}
		if (q > a[m])
		{
			l = m+1;
		}else
		{
			r = m-1;
		}
	}
	
	cout << "Nuh uh";
	
}
