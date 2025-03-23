#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n,k,temp;
	cin >> n >> k;
	map<int,int> v1;
	for(int i = 0; i < n ;i++)
	{
		cin >> temp;
		if(v1.count(k-temp))
		{
			cout << v1[k-temp] << " " << i+1; 
			return 0;
		}
		v1[temp] = i+1;
	}
	cout << "IMPOSSIBLE";
}