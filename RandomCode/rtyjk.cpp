#include <bits/stdc++.h>

using namespace std;

vector<int> v;

void g(int n)
{
	while (n%2 == 0)
	{
		v.push_back(2);
		n/=2;
	}
	
	for(int i =3 ;i <= n/i ; i+=2)
	{
		while (n%i == 0)
	{
		v.push_back(i);
		n/=i;
}
	}
	if (n > 1) v.push_back(n);
}
int main()
{
	int n;
	cin >> n;
	g(n);
	cout << v.size() << '\n';
	for(auto v2:v)
	{
		cout << v2 << " ";
	}
}
