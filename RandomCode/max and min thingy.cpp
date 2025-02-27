#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<long long int> s;
	
	int n;
	cin >> n;
	
	for(int i =0 ;i < n; i++)
	{
		long long int temp;
		cin >> temp;
		s.push_back(temp);
	}
	
	cout << *min_element(s.begin(), s.end()) << '\n' << *max_element(s.begin(), s.end());
	return 0;
}
