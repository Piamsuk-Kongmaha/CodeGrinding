#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> v(10,1);
	vector<int>::iterator it, st;
	sort(v.begin(),v.end());
	for (st = v.begin(); st != it; ++st) cout << " " << *it;
	cout << '\n';	
}
