#include<bits/stdc++.h>

using namespace std;

int main()
{
	int m;
	long long int n;
	cin >> m >> n;
	int labor[m];
	
	for(int i = 0; i < m; i++)
	{
		cin >> labor[i];
	}
	
	long long int l =1, r= 1e18, mid;
	
	while (l<r)
	{
		mid = l+(r-l)/2;
		long long int sum = 0;
		for(int i =0 ; i< m ; i++)
		{
			sum += (long long int)mid/labor[i];
			if (sum>= n) break;
		}
		
		if (sum>=n)
		{
			r = mid - 1;
		}
		else{
			l = mid +1;
		}
	}
	cout << r;
}
