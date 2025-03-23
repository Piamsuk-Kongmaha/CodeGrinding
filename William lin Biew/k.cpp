#include <bits/stdc++.h>

using namespace std;
typedef long long ll; 

map<ll,int> seen;

int main()
{
	int n,k;

	ll ans = 0;

	cin >> n >> k;
	ll sum = 0;	
	seen[0] = 1; 
	for(int i =0; i < n; i++)
	{
		ll temp;
		cin >> temp;
		sum += temp;
		if(seen.count(sum - k))
		{
			ans+=seen[sum-k];
		}

		seen[sum]++;
	}

	cout << ans;
}