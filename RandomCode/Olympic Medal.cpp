#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long long int mn = 1e8+8, mx = 0;
	long long int people[n], pedal[n];
	
	for(int i = 0 ; i< n; i++)
	{
		cin >> people[i];
	}
	for(int i = 0; i < n; i++)
	{
		cin >> pedal[i];
	}
	
	sort(people, people+n);
	sort(pedal, pedal+n, greater<int>());
	
	for(int i = 0; i < n; i++)
	{
		mn = min(mn,people[i] + pedal[i]);
		mx = max(mx, people[i] + pedal[i]);
	}
	
	cout << mx-mn;
	return 0;
}
