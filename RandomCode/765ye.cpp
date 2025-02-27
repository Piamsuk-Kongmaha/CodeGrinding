#include <bits/stdc++.h>

using namespace std;

int main()
{
	cin.tie(nullptr) -> ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	array<int, 2> arr[n];
	
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i][0] >> arr[i][1];
	}
	int small = INT_MAX;
	for(int i = 1;i < pow(2,n); ++i)
	{
		int s = 1, b = 0;
		for(int j = 0;j < n;++j)
		{
			if (i&(1 << j))
			{
				s *= arr[j][0];
				b += arr[j][1];
			}
		}
		
		small = min(small, abs(b-s));
	}
	cout << small;
}
