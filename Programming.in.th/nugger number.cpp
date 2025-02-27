#include <bits/stdc++.h>

using namespace std;

bitset<105> dp;

int main()
{
	int n;
	cin >> n;
	dp[6] = 1;
	dp[9] = 1;
	dp[20] = 1;
	
	bool ch = 1;
	
	for(int  i = 6; i <= n; i++)
	{
		if(i>=6 && dp[i-6]) dp[i] =1;
		if(i>=9 && dp[i-9]) dp[i] =1;
		if(i>=20 && dp[i-20]) dp[i] =1;
		
		if(dp[i]) 
		{
			cout << i << '\n'; 
			ch = 0;
		}
	}
	
	if(ch) cout << "no";
	return 0;
}
